using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;


namespace MappingHelpersPack {


    public static class Utils2
    {

        public static Vector3 GetPlaneCenter(PlacenotePlaneMeshRender plane){
            Mesh m = plane.GetComponent<MeshFilter> ().mesh;
            Vector3 meshCenter = Vector3.zero;
            //		Mesh m = planes [i].GetComponent<MeshFilter> ().mesh;
            for (int k = 0; k < Mathf.Min(10,m.vertexCount); k++) {
                meshCenter += m.vertices [k]; // planes [i].transform.TransformPoint (m.vertices [k]);
            }
            meshCenter /= Mathf.Min(10,m.vertexCount);
            return plane.transform.TransformPoint(meshCenter);
        }

        public enum PlaneType { Horizontal, Vertical }
        public static PlaneType DeterminePlaneType(PlacenotePlaneMeshRender plane){
            
            Vector3[] tri = new Vector3[]{ 
                plane.GetComponent<MeshFilter>().mesh.vertices[plane.GetComponent<MeshFilter>().mesh.triangles[0]],
                plane.GetComponent<MeshFilter>().mesh.vertices[plane.GetComponent<MeshFilter>().mesh.triangles[1]],
                plane.GetComponent<MeshFilter>().mesh.vertices[plane.GetComponent<MeshFilter>().mesh.triangles[2]]
            };
            
            if (tri[0].y == tri[1].y && tri[1].y == tri[2].y) return PlaneType.Horizontal;
            else return PlaneType.Vertical;
            // return PlaneType.Horizontal;
        }

        

        public static Vector3[] PlaceNoteGreenPoints (int startFromIndex = 0) {    
            
            List<Vector3> greenPoints = new List<Vector3>();
            
            LibPlacenote.PNFeaturePointUnity[] map = LibPlacenote.Instance.GetMap ();
            // map Array is ordered by time 
            
            
            
            for (int i=0; i<map.Length; i++){
                LibPlacenote.PNFeaturePointUnity m = map[i];
                if (m.measCount > 6){
                    greenPoints.Add(new Vector3(m.point.x,m.point.y,m.point.z));
                }
            }

            // use startFromIndex to skip "old" points from the green point count
            List<Vector3> greenPointsFromIndex = greenPoints.GetRange(startFromIndex,greenPoints.Count - startFromIndex);
            
            

            return greenPointsFromIndex.ToArray();
        }


        public static bool PlayerFacingDirection(Vector3 dir, float angle){
            float ang = Vector3.Angle(Camera.main.transform.forward,dir);
            // Debug.Log("Cam dir:"+Camera.main.transform.forward+", my dir:"+dir+", angle:"+ang);
            return ang < angle;
        }
        public static bool AudioFinished(AudioSource aud){
            // Debug.Log("aud time:"+aud.time+", aud clip len:"+aud.clip.length);
            if (aud.time == 0){
                Debug.LogError("Audio not finishing");
            }
            return aud.time > aud.clip.length - 0.5f;
        }
        public static void EnableFadeOnMaterial(Material material){
            material.SetFloat("_Mode", 2);
            material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
            material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
            material.SetInt("_ZWrite", 0);
            material.DisableKeyword("_ALPHATEST_ON");
            material.EnableKeyword("_ALPHABLEND_ON");
            material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
            material.renderQueue = 3000;
        }
        public static bool FadeAllMaterialsAndUI(Transform parent, float alpha, float lerpSpeed = 1)
        {
            bool finished = true;
            float finishedThreshhold = .01f;
            float sp = Time.deltaTime * lerpSpeed;
            foreach (Renderer r in parent.gameObject.GetComponentsInChildren<Renderer>()) {
                Material[] mats = r.materials;
                foreach (Material m in mats) {
                    EnableFadeOnMaterial(m);

                    //Debug.Log("setting mat:" + m);
                    //Debug.Log("has color? " + m.color);
                    float newAlpha = Mathf.Lerp(m.color.a, alpha, sp);
                    m.color = new Color(m.color.r, m.color.g, m.color.b, newAlpha);
                    if (Mathf.Abs(alpha - newAlpha) > finishedThreshhold) {
                        finished = false;
                    }
                }
                r.materials = mats;
            }

            foreach (Text m in parent.gameObject.GetComponentsInChildren<Text>())
            {
                float newAlpha = Mathf.Lerp(m.color.a, alpha,sp);
                m.color = new Color(m.color.r, m.color.g, m.color.b, newAlpha);
                if (Mathf.Abs(alpha - newAlpha) > finishedThreshhold)
                {
                    finished = false;
                }
            }

            foreach (Image m in parent.gameObject.GetComponentsInChildren<Image>())
            {
                float newAlpha = Mathf.Lerp(m.color.a, alpha, sp);
                m.color = new Color(m.color.r, m.color.g, m.color.b, newAlpha);
                if (Mathf.Abs(alpha - newAlpha) > finishedThreshhold)
                {
                    finished = false;
                }
            }

            if (finished) {
                SetAllMaterialsAndUI(parent, alpha);
            }

            return finished;
        }

        public static void SetAllMaterialsAndUI(Transform parent, float newAlpha)
        {
            foreach (Renderer r in parent.gameObject.GetComponentsInChildren<Renderer>())
            {
                Material[] mats = r.materials;
                foreach (Material m in mats)
                {
                    m.color = new Color(m.color.r, m.color.g, m.color.b, newAlpha);
                
                }
                r.materials = mats;
            }

            foreach (Text m in parent.gameObject.GetComponentsInChildren<Text>())
            {
                m.color = new Color(m.color.r, m.color.g, m.color.b, newAlpha);
            }

            foreach (Image m in parent.gameObject.GetComponentsInChildren<Image>())
            {
                m.color = new Color(m.color.r, m.color.g, m.color.b, newAlpha);
            }

        }

        public static bool PlayerInRange(Transform t, float d)
        {
            return Vector3.Magnitude(Camera.main.transform.position - t.position) < d;
        }

        public static bool LineOfSight(Transform a, Transform b)
        {

            // cast a raycast from a to b
            // ignore any hits that are sharing transform with source (e.g. I can see through myself)
            // if the hit is sufficiently close to player, allow it (player cannot hide behind tiny obstructions)
            float dist = (a.position - b.position).magnitude;
            RaycastHit hit = new RaycastHit();
            if (Physics.Raycast(new Ray(a.position, b.position - a.position), out hit))
            {
                if (hit.collider.transform.root == b.transform.root
                    || hit.collider.transform == b
                    || Mathf.Abs(hit.distance - dist) < dist / 20f)
                    return true;
                else
                {
                    //                Debug.Log("LOS failed:" + hit.collider.name);
                    return false;
                }
            }
            return true; // nothing obstructing and B didn't have a collider.

        }
        public static void QuietDestroy(GameObject o)
        {
            //        foreach (DeadSound ds in o.GetComponentsInChildren<DeadSound>())
            //        {
            //            ds.enabled = false;
            //        }

            foreach (MonoBehaviour c in o.GetComponentsInChildren(typeof(MonoBehaviour)))
            {
                c.enabled = false;
            }
            foreach (Component c in o.GetComponentsInChildren(typeof(Component)))
            {
                if (c.GetType() == typeof(Transform))
                    continue;
                //            c.enabled = false;
                Object.DestroyImmediate(c);
                //            Object.Destroy(c);
            }
            Object.Destroy(o);

        }
        public static GameObject MakeParentFromObjects(List<GameObject> objectsToGroup)
        {
            List<Object> toGroup = new List<Object>();
            foreach (GameObject g in objectsToGroup)
            {
                GameObject f = g;
                //			while(f.GetComponent<HexGridPiece>() == null && f.transform.parent != null) {
                //				f = f.transform.parent.gameObject;
                //			}
                toGroup.Add(f);
            }

            //		while (Selection.activeGameObject.name.Contains("(Clone)")){
            //			Selection.activeGameObject.name = 
            //		}
            GameObject newParent = new GameObject(objectsToGroup[0].name + " group");


            Transform root = objectsToGroup[0].transform.parent;
            newParent.transform.parent = root;
            Vector3 center = Vector3.zero;
            foreach (GameObject g in objectsToGroup)
            {
                center += g.transform.position;
            }
            center /= objectsToGroup.Count;
            Vector3 middlestCenter = Vector3.zero;
            float closestDist = float.PositiveInfinity;
            foreach (GameObject g in objectsToGroup)
            {
                float d = (g.transform.position - center).sqrMagnitude;
                if (d < closestDist)
                {
                    closestDist = d;
                    middlestCenter = g.transform.position;
                }
            }
            newParent.transform.position = middlestCenter;
            newParent.transform.position = center;
            foreach (GameObject g in objectsToGroup)
            {
                g.transform.parent = newParent.transform;
            }
            return newParent;
        }

        public static void MakeMaterialStandardFade(Material material)
        {
            material.SetFloat("_Mode", 2);
            material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
            material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
            material.SetInt("_ZWrite", 0);
            material.DisableKeyword("_ALPHATEST_ON");
            material.EnableKeyword("_ALPHABLEND_ON");
            material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
            material.renderQueue = 3000;
        }

        

        public static Quaternion FlattenRotation(Quaternion rot)
        {
            rot.eulerAngles = new Vector3(0, rot.eulerAngles.y, 0);
            return rot;
        }

        public static Vector3 FlattenVector(Vector3 vectorA)
        {
            return new Vector3(vectorA.x, 0, vectorA.z);
        }

        public static Vector3 GetCenter(List<Vector3> pts)
        {
            Vector3 ret = Vector3.zero;
            foreach (Vector3 p in pts)
            {
                ret += p;
            }
            ret /= pts.Count;
            return ret;
        }

        public static float HighestY(Transform tt)
        {
            // Takes the transformand all children and goes through each inddividual mesh's world bounds to figure out what is the highest worldspace point occupied by any child
            // Useful if you want to know what the highest position of a group of objects is in world space, e.g. "does this group of objects cross some surface of height Y"
            float highestY = Mathf.NegativeInfinity;
            foreach (Transform t in tt)
            {
                foreach (MeshRenderer r in t.GetComponentsInChildren<MeshRenderer>())
                {
                    float newY = r.gameObject.transform.position.y + r.bounds.extents.y;
                    if (newY > highestY)
                    {
                        highestY = newY;
                    }
                }
            }
            return highestY;
        }

        public static Mesh CreateMeshFromPointsWithCenter(List<Vector3> points, Vector3 center)
        {
            int[] newTriangles = new int[(points.Count) * 3];
            points.Add(center);

            Mesh mesh = new Mesh();

            for (int i = 0; i < newTriangles.Length; i += 3)
            {
                newTriangles[i] = i / 3;
                newTriangles[i + 1] = (i / 3 + 1) % (points.Count - 1); // mod is only applied for the last triangle as it wraps aroud to the same vert as the first triangle.
                newTriangles[i + 2] = points.Count - 1; // always the last point.
            }





            Vector2[] uvs = new Vector2[points.Count];
            for (int i = 0; i < uvs.Length; i++)
            {
                //            normals[i] = -Camera.main.transform.forward;
                uvs[i] = new Vector2((float)i / (float)uvs.Length, (float)i / (float)uvs.Length);
            }

            mesh.vertices = points.ToArray();
            mesh.uv = uvs;
            mesh.triangles = newTriangles;
            mesh.RecalculateNormals();
            AddBackfaceUVs(mesh);
            mesh.RecalculateNormals();

            return mesh;

        }

        public static void AddBackfaceUVs(Mesh mesh)
        {
            int oldVertCount = mesh.vertices.Length;
            Vector3[] vertices = mesh.vertices;
            Vector2[] uv = mesh.uv;
            Vector3[] normals = mesh.normals;
            int szV = vertices.Length;
            Vector3[] newVerts = new Vector3[szV * 2];
            Vector2[] newUv = new Vector2[szV * 2];
            Vector3[] newNorms = new Vector3[szV * 2];
            int j = 0;
            for (j = 0; j < szV; j++)
            {
                // duplicate vertices and uvs:
                newVerts[j] = newVerts[j + szV] = vertices[j];
                newUv[j] = newUv[j + szV] = uv[j];
                // copy the original normals...
                newNorms[j] = normals[j];
                // and revert the new ones
                newNorms[j + szV] = -normals[j];
            }
            int[] triangles = mesh.triangles;
            int szT = triangles.Length;
            int[] newTris = new int[szT * 2]; // double the triangles
            for (int i = 0; i < szT; i += 3)
            {
                // copy the original triangle
                newTris[i] = triangles[i];
                newTris[i + 1] = triangles[i + 1];
                newTris[i + 2] = triangles[i + 2];
                // save the new reversed triangle
                j = i + szT;
                newTris[j] = triangles[i] + szV;
                newTris[j + 2] = triangles[i + 1] + szV;
                newTris[j + 1] = triangles[i + 2] + szV;
            }
            mesh.vertices = newVerts;
            mesh.uv = newUv;
            mesh.normals = newNorms;
            mesh.triangles = newTris; // assign triangles last!
            int newVertCount = mesh.vertices.Length;
            // commented Debug.Log ("added backface UVs to:" +Selection.activeGameObject+". Vertex count old / new: " +oldVertCount +" / " +newVertCount);
        }


        public static float LowestY(Transform tt)
        {
            // same sas highesty but for lowest point
            // Used together, you can get the total world space height of a group of objects
            float lowestY = Mathf.Infinity;
            foreach (Transform t in tt)
            {
                foreach (MeshRenderer r in t.GetComponentsInChildren<MeshRenderer>())
                {
                    float newY = r.gameObject.transform.position.y - r.bounds.extents.y;
                    if (newY < lowestY)
                    {
                        lowestY = newY;
                    }
                }
            }
            return lowestY;
        }

        public static float RealHeight(Transform t)
        {
            return HighestY(t) - LowestY(t);
        }

        public static Bounds boundsOfChildren(Transform t)
        {
            // What is the total encapsulating bounds of all children of t?
            Bounds b = new Bounds(Vector3.zero, Vector3.zero);
            foreach (MeshRenderer r in t.GetComponentsInChildren<MeshRenderer>())
            {
                if (b.size == Vector3.zero)
                {
                    b = r.bounds;
                }
                else
                {
                    b.Encapsulate(r.bounds);
                }
            }
            return b;
        }


        public static float CubicInOut(float x)
        { // Note - not actually cubic, need to change the name
        // a bell curve style curve beginning and ending at zero.
        // used for elevator to start and end slow but move quite fast in the middle.
            float ret = new AnimationCurve(
                new Keyframe(0, 0),
                new Keyframe(0.02f, 0.05f),
                new Keyframe(0.2f, 0.75f),
                new Keyframe(0.3f, 0.9f),
                new Keyframe(0.4f, 1),
                new Keyframe(0.6f, 1),
                new Keyframe(0.7f, 0.9f),
                new Keyframe(0.8f, 0.75f),
                new Keyframe(0.98f, 0.05f),
                new Keyframe(1, 0)
            ).Evaluate(x);
            //		Debug.Log("ret:"+ret);
            return ret;
        }

        public static float BellCurve(float x)
        {
            // approximates a bell curve of max y value 1 between interval 0, 1 on x axis.
            float ret = (1 + Mathf.Cos(Mathf.PI * 2 * x - Mathf.PI)) / 2f;
            return ret;
        }



        public static Vector3[] GetCircleOfPoints(float degreesToComplete = 360, float radius = 150, float scale = 5)
        { // lower scale = higher point count
        // This method can be used to get a set of Vector3 points that draw a cirle about the Y axis.
        // Useful if you want to cast a spell that creates an arrangement of objects in a circle around the spellcaster or target.
        // Note: The Vector3[] array will exist in local space

            int count = (int)(degreesToComplete * radius / scale / 60);
            float arcLength = degreesToComplete / count;
            Vector3[] ret = new Vector3[count];
            for (int i = 0; i < count; i++)
            {
                // commented Debug.Log ("radius:"+radius);
                float xPos = Mathf.Sin(Mathf.Deg2Rad * i * arcLength) * (radius); // x and y calculated with "trigonometry"
                float yPos = Mathf.Cos(Mathf.Deg2Rad * i * arcLength) * (radius);
                ret[i] = new Vector3(xPos, 0, yPos);
            }
            return ret;
        }

        public static bool IntervalElapsed(float t)
        {
            // A handy replacement for using "timers" in various scripts to track actions over intervals
            /*
            * Usage: 
            * if (Utils.IntervalElapsed(2)) {
            * 		// This action occurrs every 2 seconds.
            * }
            */
            return Time.realtimeSinceStartup > t && Mathf.Abs(((Time.realtimeSinceStartup - t) % t) - t) < Time.unscaledDeltaTime;
        }



        public static Transform GetClosestObjectOfType<T>(Transform origin) where T : MonoBehaviour
        {
            // Often not the most efficient, but will help you find the closest object which has type <T> to a transform, "origin"
            /*
            * Usage: 
            * Enemy e = Utils.GetClosestObjectOfType<Enemy>(Player.transform);
            * // if any Enemy objects exist in the scene, e is now a reference to the closest Enemy to the Player
            * */

            Transform closest = null;
            foreach (Component oo in Component.FindObjectsOfType(typeof(T)))
            {
                GameObject o = oo.gameObject;
                if (!closest)
                {
                    closest = o.transform;
                }
                else if (Vector3.SqrMagnitude(origin.position - o.transform.position) < Vector3.SqrMagnitude(closest.position - origin.position))
                {
                    closest = o.transform;
                }
            }
            return closest;
        }

    }
}
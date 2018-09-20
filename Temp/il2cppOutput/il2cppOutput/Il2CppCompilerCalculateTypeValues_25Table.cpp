#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// ARReferenceImage[]
struct ARReferenceImageU5BU5D_t715634648;
// ARReferenceImagesSet
struct ARReferenceImagesSet_t4271437859;
// LibPlacenote
struct LibPlacenote_t517300920;
// LibPlacenote/MapInfo[]
struct MapInfoU5BU5D_t44187817;
// LibPlacenote/MapLocation
struct MapLocation_t2020070547;
// LibPlacenote/MapLocationSearch
struct MapLocationSearch_t1466305414;
// LibPlacenote/MapMetadata
struct MapMetadata_t326242838;
// Newtonsoft.Json.Linq.JToken
struct JToken_t1038539247;
// System.Action`1<LibPlacenote/MapInfo[]>
struct Action_1_t216655412;
// System.Action`1<LibPlacenote/MapMetadata>
struct Action_1_t498710433;
// System.Action`1<System.String>
struct Action_1_t2019918284;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t1290832230;
// System.Action`3<System.Boolean,System.Boolean,System.Single>
struct Action_3_t1496896439;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t1182523073;
// System.Collections.Generic.List`1<LibPlacenote/PNTransformUnity>
struct List_1_t2932871760;
// System.Collections.Generic.List`1<MainThreadTaskQueue/Delegate>
struct List_1_t366016060;
// System.Collections.Generic.List`1<PlacenoteListener>
struct List_1_t4244818851;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>
struct List_1_t3416529523;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Light
struct Light_t3756812086;
// UnityEngine.Light[]
struct LightU5BU5D_t3678959411;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_t3081694049;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t3069227754;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t2206337031;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.XR.iOS.ARFaceAnchor/DictionaryVisitorHandler
struct DictionaryVisitorHandler_t414487210;
// UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2049372221;
// UnityEngine.XR.iOS.ConnectToEditor
struct ConnectToEditor_t595742893;
// UnityEngine.XR.iOS.UnityARAlignment[]
struct UnityARAlignmentU5BU5D_t3682394155;
// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct UnityARDirectionalLightEstimate_t2924556994;
// UnityEngine.XR.iOS.UnityARPlaneDetection[]
struct UnityARPlaneDetectionU5BU5D_t3458580926;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t3929719369;
// UnityEngine.XR.iOS.UnityARSessionRunOption[]
struct UnityARSessionRunOptionU5BU5D_t4225291891;
// UnityEngine.XR.iOS.Utils.SerializableVector4
struct SerializableVector4_t2739337940;
// UnityEngine.XR.iOS.Utils.serializableARKitInit
struct serializableARKitInit_t3839227232;
// UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration
struct serializableARSessionConfiguration_t30565192;
// UnityEngine.XR.iOS.Utils.serializableFaceGeometry
struct serializableFaceGeometry_t1893768467;
// UnityEngine.XR.iOS.Utils.serializablePlaneGeometry
struct serializablePlaneGeometry_t3471745378;
// UnityEngine.XR.iOS.Utils.serializablePointCloud
struct serializablePointCloud_t4241265545;
// UnityEngine.XR.iOS.Utils.serializableSHC
struct serializableSHC_t226029808;
// UnityEngine.XR.iOS.Utils.serializableUnityARLightData
struct serializableUnityARLightData_t3029229948;
// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t255097097;
// UnityEngine.XR.iOS.VideoFormatEnumerator
struct VideoFormatEnumerator_t3131638505;

struct Vector3_t3722313464 ;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef MAPINFO_T3246710392_H
#define MAPINFO_T3246710392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/MapInfo
struct  MapInfo_t3246710392  : public RuntimeObject
{
public:
	// System.String LibPlacenote/MapInfo::placeId
	String_t* ___placeId_0;
	// LibPlacenote/MapMetadata LibPlacenote/MapInfo::metadata
	MapMetadata_t326242838 * ___metadata_1;

public:
	inline static int32_t get_offset_of_placeId_0() { return static_cast<int32_t>(offsetof(MapInfo_t3246710392, ___placeId_0)); }
	inline String_t* get_placeId_0() const { return ___placeId_0; }
	inline String_t** get_address_of_placeId_0() { return &___placeId_0; }
	inline void set_placeId_0(String_t* value)
	{
		___placeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___placeId_0), value);
	}

	inline static int32_t get_offset_of_metadata_1() { return static_cast<int32_t>(offsetof(MapInfo_t3246710392, ___metadata_1)); }
	inline MapMetadata_t326242838 * get_metadata_1() const { return ___metadata_1; }
	inline MapMetadata_t326242838 ** get_address_of_metadata_1() { return &___metadata_1; }
	inline void set_metadata_1(MapMetadata_t326242838 * value)
	{
		___metadata_1 = value;
		Il2CppCodeGenWriteBarrier((&___metadata_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPINFO_T3246710392_H
#ifndef MAPLIST_T467530398_H
#define MAPLIST_T467530398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/MapList
struct  MapList_t467530398  : public RuntimeObject
{
public:
	// LibPlacenote/MapInfo[] LibPlacenote/MapList::places
	MapInfoU5BU5D_t44187817* ___places_0;

public:
	inline static int32_t get_offset_of_places_0() { return static_cast<int32_t>(offsetof(MapList_t467530398, ___places_0)); }
	inline MapInfoU5BU5D_t44187817* get_places_0() const { return ___places_0; }
	inline MapInfoU5BU5D_t44187817** get_address_of_places_0() { return &___places_0; }
	inline void set_places_0(MapInfoU5BU5D_t44187817* value)
	{
		___places_0 = value;
		Il2CppCodeGenWriteBarrier((&___places_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPLIST_T467530398_H
#ifndef MAPLOCATION_T2020070547_H
#define MAPLOCATION_T2020070547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/MapLocation
struct  MapLocation_t2020070547  : public RuntimeObject
{
public:
	// System.Single LibPlacenote/MapLocation::latitude
	float ___latitude_0;
	// System.Single LibPlacenote/MapLocation::longitude
	float ___longitude_1;
	// System.Single LibPlacenote/MapLocation::altitude
	float ___altitude_2;

public:
	inline static int32_t get_offset_of_latitude_0() { return static_cast<int32_t>(offsetof(MapLocation_t2020070547, ___latitude_0)); }
	inline float get_latitude_0() const { return ___latitude_0; }
	inline float* get_address_of_latitude_0() { return &___latitude_0; }
	inline void set_latitude_0(float value)
	{
		___latitude_0 = value;
	}

	inline static int32_t get_offset_of_longitude_1() { return static_cast<int32_t>(offsetof(MapLocation_t2020070547, ___longitude_1)); }
	inline float get_longitude_1() const { return ___longitude_1; }
	inline float* get_address_of_longitude_1() { return &___longitude_1; }
	inline void set_longitude_1(float value)
	{
		___longitude_1 = value;
	}

	inline static int32_t get_offset_of_altitude_2() { return static_cast<int32_t>(offsetof(MapLocation_t2020070547, ___altitude_2)); }
	inline float get_altitude_2() const { return ___altitude_2; }
	inline float* get_address_of_altitude_2() { return &___altitude_2; }
	inline void set_altitude_2(float value)
	{
		___altitude_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPLOCATION_T2020070547_H
#ifndef MAPLOCATIONSEARCH_T1466305414_H
#define MAPLOCATIONSEARCH_T1466305414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/MapLocationSearch
struct  MapLocationSearch_t1466305414  : public RuntimeObject
{
public:
	// System.Single LibPlacenote/MapLocationSearch::latitude
	float ___latitude_0;
	// System.Single LibPlacenote/MapLocationSearch::longitude
	float ___longitude_1;
	// System.Single LibPlacenote/MapLocationSearch::radius
	float ___radius_2;

public:
	inline static int32_t get_offset_of_latitude_0() { return static_cast<int32_t>(offsetof(MapLocationSearch_t1466305414, ___latitude_0)); }
	inline float get_latitude_0() const { return ___latitude_0; }
	inline float* get_address_of_latitude_0() { return &___latitude_0; }
	inline void set_latitude_0(float value)
	{
		___latitude_0 = value;
	}

	inline static int32_t get_offset_of_longitude_1() { return static_cast<int32_t>(offsetof(MapLocationSearch_t1466305414, ___longitude_1)); }
	inline float get_longitude_1() const { return ___longitude_1; }
	inline float* get_address_of_longitude_1() { return &___longitude_1; }
	inline void set_longitude_1(float value)
	{
		___longitude_1 = value;
	}

	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(MapLocationSearch_t1466305414, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPLOCATIONSEARCH_T1466305414_H
#ifndef MAPMETADATASETTABLE_T1435536628_H
#define MAPMETADATASETTABLE_T1435536628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/MapMetadataSettable
struct  MapMetadataSettable_t1435536628  : public RuntimeObject
{
public:
	// System.String LibPlacenote/MapMetadataSettable::name
	String_t* ___name_0;
	// LibPlacenote/MapLocation LibPlacenote/MapMetadataSettable::location
	MapLocation_t2020070547 * ___location_1;
	// Newtonsoft.Json.Linq.JToken LibPlacenote/MapMetadataSettable::userdata
	JToken_t1038539247 * ___userdata_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MapMetadataSettable_t1435536628, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_location_1() { return static_cast<int32_t>(offsetof(MapMetadataSettable_t1435536628, ___location_1)); }
	inline MapLocation_t2020070547 * get_location_1() const { return ___location_1; }
	inline MapLocation_t2020070547 ** get_address_of_location_1() { return &___location_1; }
	inline void set_location_1(MapLocation_t2020070547 * value)
	{
		___location_1 = value;
		Il2CppCodeGenWriteBarrier((&___location_1), value);
	}

	inline static int32_t get_offset_of_userdata_2() { return static_cast<int32_t>(offsetof(MapMetadataSettable_t1435536628, ___userdata_2)); }
	inline JToken_t1038539247 * get_userdata_2() const { return ___userdata_2; }
	inline JToken_t1038539247 ** get_address_of_userdata_2() { return &___userdata_2; }
	inline void set_userdata_2(JToken_t1038539247 * value)
	{
		___userdata_2 = value;
		Il2CppCodeGenWriteBarrier((&___userdata_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPMETADATASETTABLE_T1435536628_H
#ifndef MAPSEARCH_T3662675896_H
#define MAPSEARCH_T3662675896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/MapSearch
struct  MapSearch_t3662675896  : public RuntimeObject
{
public:
	// System.String LibPlacenote/MapSearch::name
	String_t* ___name_0;
	// LibPlacenote/MapLocationSearch LibPlacenote/MapSearch::location
	MapLocationSearch_t1466305414 * ___location_1;
	// System.Double LibPlacenote/MapSearch::newerThan
	double ___newerThan_2;
	// System.Double LibPlacenote/MapSearch::olderThan
	double ___olderThan_3;
	// System.String LibPlacenote/MapSearch::userdataQuery
	String_t* ___userdataQuery_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MapSearch_t3662675896, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_location_1() { return static_cast<int32_t>(offsetof(MapSearch_t3662675896, ___location_1)); }
	inline MapLocationSearch_t1466305414 * get_location_1() const { return ___location_1; }
	inline MapLocationSearch_t1466305414 ** get_address_of_location_1() { return &___location_1; }
	inline void set_location_1(MapLocationSearch_t1466305414 * value)
	{
		___location_1 = value;
		Il2CppCodeGenWriteBarrier((&___location_1), value);
	}

	inline static int32_t get_offset_of_newerThan_2() { return static_cast<int32_t>(offsetof(MapSearch_t3662675896, ___newerThan_2)); }
	inline double get_newerThan_2() const { return ___newerThan_2; }
	inline double* get_address_of_newerThan_2() { return &___newerThan_2; }
	inline void set_newerThan_2(double value)
	{
		___newerThan_2 = value;
	}

	inline static int32_t get_offset_of_olderThan_3() { return static_cast<int32_t>(offsetof(MapSearch_t3662675896, ___olderThan_3)); }
	inline double get_olderThan_3() const { return ___olderThan_3; }
	inline double* get_address_of_olderThan_3() { return &___olderThan_3; }
	inline void set_olderThan_3(double value)
	{
		___olderThan_3 = value;
	}

	inline static int32_t get_offset_of_userdataQuery_4() { return static_cast<int32_t>(offsetof(MapSearch_t3662675896, ___userdataQuery_4)); }
	inline String_t* get_userdataQuery_4() const { return ___userdataQuery_4; }
	inline String_t** get_address_of_userdataQuery_4() { return &___userdataQuery_4; }
	inline void set_userdataQuery_4(String_t* value)
	{
		___userdataQuery_4 = value;
		Il2CppCodeGenWriteBarrier((&___userdataQuery_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPSEARCH_T3662675896_H
#ifndef SAVELOADCONTEXT_T2727061006_H
#define SAVELOADCONTEXT_T2727061006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/SaveLoadContext
struct  SaveLoadContext_t2727061006  : public RuntimeObject
{
public:
	// System.Action`1<System.String> LibPlacenote/SaveLoadContext::savedCb
	Action_1_t2019918284 * ___savedCb_0;
	// System.Action`3<System.Boolean,System.Boolean,System.Single> LibPlacenote/SaveLoadContext::progressCb
	Action_3_t1496896439 * ___progressCb_1;

public:
	inline static int32_t get_offset_of_savedCb_0() { return static_cast<int32_t>(offsetof(SaveLoadContext_t2727061006, ___savedCb_0)); }
	inline Action_1_t2019918284 * get_savedCb_0() const { return ___savedCb_0; }
	inline Action_1_t2019918284 ** get_address_of_savedCb_0() { return &___savedCb_0; }
	inline void set_savedCb_0(Action_1_t2019918284 * value)
	{
		___savedCb_0 = value;
		Il2CppCodeGenWriteBarrier((&___savedCb_0), value);
	}

	inline static int32_t get_offset_of_progressCb_1() { return static_cast<int32_t>(offsetof(SaveLoadContext_t2727061006, ___progressCb_1)); }
	inline Action_3_t1496896439 * get_progressCb_1() const { return ___progressCb_1; }
	inline Action_3_t1496896439 ** get_address_of_progressCb_1() { return &___progressCb_1; }
	inline void set_progressCb_1(Action_3_t1496896439 * value)
	{
		___progressCb_1 = value;
		Il2CppCodeGenWriteBarrier((&___progressCb_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAVELOADCONTEXT_T2727061006_H
#ifndef MATRIXOPS_T747228741_H
#define MATRIXOPS_T747228741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PNUtility.MatrixOps
struct  MatrixOps_t747228741  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIXOPS_T747228741_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ARBLENDSHAPELOCATION_T2653069299_H
#define ARBLENDSHAPELOCATION_T2653069299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARBlendShapeLocation
struct  ARBlendShapeLocation_t2653069299  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARBLENDSHAPELOCATION_T2653069299_H
#ifndef ARPLANEANCHORGAMEOBJECT_T1947719815_H
#define ARPLANEANCHORGAMEOBJECT_T1947719815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorGameObject
struct  ARPlaneAnchorGameObject_t1947719815  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.ARPlaneAnchorGameObject::gameObject
	GameObject_t1113636619 * ___gameObject_0;
	// UnityEngine.XR.iOS.ARPlaneAnchor UnityEngine.XR.iOS.ARPlaneAnchorGameObject::planeAnchor
	ARPlaneAnchor_t2049372221 * ___planeAnchor_1;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchorGameObject_t1947719815, ___gameObject_0)); }
	inline GameObject_t1113636619 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_t1113636619 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___gameObject_0), value);
	}

	inline static int32_t get_offset_of_planeAnchor_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorGameObject_t1947719815, ___planeAnchor_1)); }
	inline ARPlaneAnchor_t2049372221 * get_planeAnchor_1() const { return ___planeAnchor_1; }
	inline ARPlaneAnchor_t2049372221 ** get_address_of_planeAnchor_1() { return &___planeAnchor_1; }
	inline void set_planeAnchor_1(ARPlaneAnchor_t2049372221 * value)
	{
		___planeAnchor_1 = value;
		Il2CppCodeGenWriteBarrier((&___planeAnchor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORGAMEOBJECT_T1947719815_H
#ifndef CONNECTIONMESSAGEIDS_T1387126779_H
#define CONNECTIONMESSAGEIDS_T1387126779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ConnectionMessageIds
struct  ConnectionMessageIds_t1387126779  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMESSAGEIDS_T1387126779_H
#ifndef SUBMESSAGEIDS_T1008824323_H
#define SUBMESSAGEIDS_T1008824323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.SubMessageIds
struct  SubMessageIds_t1008824323  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBMESSAGEIDS_T1008824323_H
#ifndef UNITYARMATRIXOPS_T2790111267_H
#define UNITYARMATRIXOPS_T2790111267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrixOps
struct  UnityARMatrixOps_t2790111267  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIXOPS_T2790111267_H
#ifndef OBJECTSERIALIZATIONEXTENSION_T1997214439_H
#define OBJECTSERIALIZATIONEXTENSION_T1997214439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.ObjectSerializationExtension
struct  ObjectSerializationExtension_t1997214439  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSERIALIZATIONEXTENSION_T1997214439_H
#ifndef SERIALIZABLEVECTOR4_T2739337940_H
#define SERIALIZABLEVECTOR4_T2739337940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.SerializableVector4
struct  SerializableVector4_t2739337940  : public RuntimeObject
{
public:
	// System.Single UnityEngine.XR.iOS.Utils.SerializableVector4::x
	float ___x_0;
	// System.Single UnityEngine.XR.iOS.Utils.SerializableVector4::y
	float ___y_1;
	// System.Single UnityEngine.XR.iOS.Utils.SerializableVector4::z
	float ___z_2;
	// System.Single UnityEngine.XR.iOS.Utils.SerializableVector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_t2739337940, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_t2739337940, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_t2739337940, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_t2739337940, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEVECTOR4_T2739337940_H
#ifndef SERIALIZABLEFACEGEOMETRY_T1893768467_H
#define SERIALIZABLEFACEGEOMETRY_T1893768467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableFaceGeometry
struct  serializableFaceGeometry_t1893768467  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableFaceGeometry::vertices
	ByteU5BU5D_t4116647657* ___vertices_0;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableFaceGeometry::texCoords
	ByteU5BU5D_t4116647657* ___texCoords_1;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableFaceGeometry::triIndices
	ByteU5BU5D_t4116647657* ___triIndices_2;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t1893768467, ___vertices_0)); }
	inline ByteU5BU5D_t4116647657* get_vertices_0() const { return ___vertices_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(ByteU5BU5D_t4116647657* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((&___vertices_0), value);
	}

	inline static int32_t get_offset_of_texCoords_1() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t1893768467, ___texCoords_1)); }
	inline ByteU5BU5D_t4116647657* get_texCoords_1() const { return ___texCoords_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_texCoords_1() { return &___texCoords_1; }
	inline void set_texCoords_1(ByteU5BU5D_t4116647657* value)
	{
		___texCoords_1 = value;
		Il2CppCodeGenWriteBarrier((&___texCoords_1), value);
	}

	inline static int32_t get_offset_of_triIndices_2() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t1893768467, ___triIndices_2)); }
	inline ByteU5BU5D_t4116647657* get_triIndices_2() const { return ___triIndices_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_triIndices_2() { return &___triIndices_2; }
	inline void set_triIndices_2(ByteU5BU5D_t4116647657* value)
	{
		___triIndices_2 = value;
		Il2CppCodeGenWriteBarrier((&___triIndices_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEFACEGEOMETRY_T1893768467_H
#ifndef SERIALIZABLEPLANEGEOMETRY_T3471745378_H
#define SERIALIZABLEPLANEGEOMETRY_T3471745378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializablePlaneGeometry
struct  serializablePlaneGeometry_t3471745378  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::vertices
	ByteU5BU5D_t4116647657* ___vertices_0;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::texCoords
	ByteU5BU5D_t4116647657* ___texCoords_1;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::triIndices
	ByteU5BU5D_t4116647657* ___triIndices_2;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::boundaryVertices
	ByteU5BU5D_t4116647657* ___boundaryVertices_3;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t3471745378, ___vertices_0)); }
	inline ByteU5BU5D_t4116647657* get_vertices_0() const { return ___vertices_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(ByteU5BU5D_t4116647657* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((&___vertices_0), value);
	}

	inline static int32_t get_offset_of_texCoords_1() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t3471745378, ___texCoords_1)); }
	inline ByteU5BU5D_t4116647657* get_texCoords_1() const { return ___texCoords_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_texCoords_1() { return &___texCoords_1; }
	inline void set_texCoords_1(ByteU5BU5D_t4116647657* value)
	{
		___texCoords_1 = value;
		Il2CppCodeGenWriteBarrier((&___texCoords_1), value);
	}

	inline static int32_t get_offset_of_triIndices_2() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t3471745378, ___triIndices_2)); }
	inline ByteU5BU5D_t4116647657* get_triIndices_2() const { return ___triIndices_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_triIndices_2() { return &___triIndices_2; }
	inline void set_triIndices_2(ByteU5BU5D_t4116647657* value)
	{
		___triIndices_2 = value;
		Il2CppCodeGenWriteBarrier((&___triIndices_2), value);
	}

	inline static int32_t get_offset_of_boundaryVertices_3() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t3471745378, ___boundaryVertices_3)); }
	inline ByteU5BU5D_t4116647657* get_boundaryVertices_3() const { return ___boundaryVertices_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_boundaryVertices_3() { return &___boundaryVertices_3; }
	inline void set_boundaryVertices_3(ByteU5BU5D_t4116647657* value)
	{
		___boundaryVertices_3 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryVertices_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEPLANEGEOMETRY_T3471745378_H
#ifndef SERIALIZABLEPOINTCLOUD_T4241265545_H
#define SERIALIZABLEPOINTCLOUD_T4241265545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializablePointCloud
struct  serializablePointCloud_t4241265545  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePointCloud::pointCloudData
	ByteU5BU5D_t4116647657* ___pointCloudData_0;

public:
	inline static int32_t get_offset_of_pointCloudData_0() { return static_cast<int32_t>(offsetof(serializablePointCloud_t4241265545, ___pointCloudData_0)); }
	inline ByteU5BU5D_t4116647657* get_pointCloudData_0() const { return ___pointCloudData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_pointCloudData_0() { return &___pointCloudData_0; }
	inline void set_pointCloudData_0(ByteU5BU5D_t4116647657* value)
	{
		___pointCloudData_0 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEPOINTCLOUD_T4241265545_H
#ifndef SERIALIZABLESHC_T226029808_H
#define SERIALIZABLESHC_T226029808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableSHC
struct  serializableSHC_t226029808  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableSHC::shcData
	ByteU5BU5D_t4116647657* ___shcData_0;

public:
	inline static int32_t get_offset_of_shcData_0() { return static_cast<int32_t>(offsetof(serializableSHC_t226029808, ___shcData_0)); }
	inline ByteU5BU5D_t4116647657* get_shcData_0() const { return ___shcData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_shcData_0() { return &___shcData_0; }
	inline void set_shcData_0(ByteU5BU5D_t4116647657* value)
	{
		___shcData_0 = value;
		Il2CppCodeGenWriteBarrier((&___shcData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLESHC_T226029808_H
#ifndef SERIALIZABLEUNITYARFACEANCHOR_T1413500457_H
#define SERIALIZABLEUNITYARFACEANCHOR_T1413500457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor
struct  serializableUnityARFaceAnchor_t1413500457  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor::worldTransform
	serializableUnityARMatrix4x4_t255097097 * ___worldTransform_0;
	// UnityEngine.XR.iOS.Utils.serializableFaceGeometry UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor::faceGeometry
	serializableFaceGeometry_t1893768467 * ___faceGeometry_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor::arBlendShapes
	Dictionary_2_t1182523073 * ___arBlendShapes_2;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableUnityARFaceAnchor::identifierStr
	ByteU5BU5D_t4116647657* ___identifierStr_3;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t1413500457, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t255097097 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t255097097 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t255097097 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_faceGeometry_1() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t1413500457, ___faceGeometry_1)); }
	inline serializableFaceGeometry_t1893768467 * get_faceGeometry_1() const { return ___faceGeometry_1; }
	inline serializableFaceGeometry_t1893768467 ** get_address_of_faceGeometry_1() { return &___faceGeometry_1; }
	inline void set_faceGeometry_1(serializableFaceGeometry_t1893768467 * value)
	{
		___faceGeometry_1 = value;
		Il2CppCodeGenWriteBarrier((&___faceGeometry_1), value);
	}

	inline static int32_t get_offset_of_arBlendShapes_2() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t1413500457, ___arBlendShapes_2)); }
	inline Dictionary_2_t1182523073 * get_arBlendShapes_2() const { return ___arBlendShapes_2; }
	inline Dictionary_2_t1182523073 ** get_address_of_arBlendShapes_2() { return &___arBlendShapes_2; }
	inline void set_arBlendShapes_2(Dictionary_2_t1182523073 * value)
	{
		___arBlendShapes_2 = value;
		Il2CppCodeGenWriteBarrier((&___arBlendShapes_2), value);
	}

	inline static int32_t get_offset_of_identifierStr_3() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t1413500457, ___identifierStr_3)); }
	inline ByteU5BU5D_t4116647657* get_identifierStr_3() const { return ___identifierStr_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_identifierStr_3() { return &___identifierStr_3; }
	inline void set_identifierStr_3(ByteU5BU5D_t4116647657* value)
	{
		___identifierStr_3 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARFACEANCHOR_T1413500457_H
#ifndef SERIALIZABLEUNITYARMATRIX4X4_T255097097_H
#define SERIALIZABLEUNITYARMATRIX4X4_T255097097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_t255097097  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_t2739337940 * ___column0_0;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_t2739337940 * ___column1_1;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_t2739337940 * ___column2_2;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_t2739337940 * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t255097097, ___column0_0)); }
	inline SerializableVector4_t2739337940 * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_t2739337940 ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_t2739337940 * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((&___column0_0), value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t255097097, ___column1_1)); }
	inline SerializableVector4_t2739337940 * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_t2739337940 ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_t2739337940 * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((&___column1_1), value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t255097097, ___column2_2)); }
	inline SerializableVector4_t2739337940 * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_t2739337940 ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_t2739337940 * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((&___column2_2), value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t255097097, ___column3_3)); }
	inline SerializableVector4_t2739337940 * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_t2739337940 ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_t2739337940 * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((&___column3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARMATRIX4X4_T255097097_H
#ifndef MAPMETADATA_T326242838_H
#define MAPMETADATA_T326242838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/MapMetadata
struct  MapMetadata_t326242838  : public MapMetadataSettable_t1435536628
{
public:
	// System.Int64 LibPlacenote/MapMetadata::created
	int64_t ___created_3;

public:
	inline static int32_t get_offset_of_created_3() { return static_cast<int32_t>(offsetof(MapMetadata_t326242838, ___created_3)); }
	inline int64_t get_created_3() const { return ___created_3; }
	inline int64_t* get_address_of_created_3() { return &___created_3; }
	inline void set_created_3(int64_t value)
	{
		___created_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPMETADATA_T326242838_H
#ifndef PNCALLBACKRESULTUNITY_T545882037_H
#define PNCALLBACKRESULTUNITY_T545882037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/PNCallbackResultUnity
struct  PNCallbackResultUnity_t545882037 
{
public:
	// System.Boolean LibPlacenote/PNCallbackResultUnity::success
	bool ___success_0;
	// System.String LibPlacenote/PNCallbackResultUnity::msg
	String_t* ___msg_1;

public:
	inline static int32_t get_offset_of_success_0() { return static_cast<int32_t>(offsetof(PNCallbackResultUnity_t545882037, ___success_0)); }
	inline bool get_success_0() const { return ___success_0; }
	inline bool* get_address_of_success_0() { return &___success_0; }
	inline void set_success_0(bool value)
	{
		___success_0 = value;
	}

	inline static int32_t get_offset_of_msg_1() { return static_cast<int32_t>(offsetof(PNCallbackResultUnity_t545882037, ___msg_1)); }
	inline String_t* get_msg_1() const { return ___msg_1; }
	inline String_t** get_address_of_msg_1() { return &___msg_1; }
	inline void set_msg_1(String_t* value)
	{
		___msg_1 = value;
		Il2CppCodeGenWriteBarrier((&___msg_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LibPlacenote/PNCallbackResultUnity
struct PNCallbackResultUnity_t545882037_marshaled_pinvoke
{
	int8_t ___success_0;
	char* ___msg_1;
};
// Native definition for COM marshalling of LibPlacenote/PNCallbackResultUnity
struct PNCallbackResultUnity_t545882037_marshaled_com
{
	int8_t ___success_0;
	char* ___msg_1;
};
#endif // PNCALLBACKRESULTUNITY_T545882037_H
#ifndef PNQUATERNIONUNITY_T3719227612_H
#define PNQUATERNIONUNITY_T3719227612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/PNQuaternionUnity
struct  PNQuaternionUnity_t3719227612 
{
public:
	// System.Single LibPlacenote/PNQuaternionUnity::x
	float ___x_0;
	// System.Single LibPlacenote/PNQuaternionUnity::y
	float ___y_1;
	// System.Single LibPlacenote/PNQuaternionUnity::z
	float ___z_2;
	// System.Single LibPlacenote/PNQuaternionUnity::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(PNQuaternionUnity_t3719227612, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(PNQuaternionUnity_t3719227612, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(PNQuaternionUnity_t3719227612, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(PNQuaternionUnity_t3719227612, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PNQUATERNIONUNITY_T3719227612_H
#ifndef PNTRANSFERSTATUSUNITY_T570742751_H
#define PNTRANSFERSTATUSUNITY_T570742751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/PNTransferStatusUnity
struct  PNTransferStatusUnity_t570742751 
{
public:
	// System.String LibPlacenote/PNTransferStatusUnity::mapId
	String_t* ___mapId_0;
	// System.Boolean LibPlacenote/PNTransferStatusUnity::completed
	bool ___completed_1;
	// System.Boolean LibPlacenote/PNTransferStatusUnity::faulted
	bool ___faulted_2;
	// System.Int32 LibPlacenote/PNTransferStatusUnity::bytesTransferred
	int32_t ___bytesTransferred_3;
	// System.Int32 LibPlacenote/PNTransferStatusUnity::bytesTotal
	int32_t ___bytesTotal_4;

public:
	inline static int32_t get_offset_of_mapId_0() { return static_cast<int32_t>(offsetof(PNTransferStatusUnity_t570742751, ___mapId_0)); }
	inline String_t* get_mapId_0() const { return ___mapId_0; }
	inline String_t** get_address_of_mapId_0() { return &___mapId_0; }
	inline void set_mapId_0(String_t* value)
	{
		___mapId_0 = value;
		Il2CppCodeGenWriteBarrier((&___mapId_0), value);
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(PNTransferStatusUnity_t570742751, ___completed_1)); }
	inline bool get_completed_1() const { return ___completed_1; }
	inline bool* get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(bool value)
	{
		___completed_1 = value;
	}

	inline static int32_t get_offset_of_faulted_2() { return static_cast<int32_t>(offsetof(PNTransferStatusUnity_t570742751, ___faulted_2)); }
	inline bool get_faulted_2() const { return ___faulted_2; }
	inline bool* get_address_of_faulted_2() { return &___faulted_2; }
	inline void set_faulted_2(bool value)
	{
		___faulted_2 = value;
	}

	inline static int32_t get_offset_of_bytesTransferred_3() { return static_cast<int32_t>(offsetof(PNTransferStatusUnity_t570742751, ___bytesTransferred_3)); }
	inline int32_t get_bytesTransferred_3() const { return ___bytesTransferred_3; }
	inline int32_t* get_address_of_bytesTransferred_3() { return &___bytesTransferred_3; }
	inline void set_bytesTransferred_3(int32_t value)
	{
		___bytesTransferred_3 = value;
	}

	inline static int32_t get_offset_of_bytesTotal_4() { return static_cast<int32_t>(offsetof(PNTransferStatusUnity_t570742751, ___bytesTotal_4)); }
	inline int32_t get_bytesTotal_4() const { return ___bytesTotal_4; }
	inline int32_t* get_address_of_bytesTotal_4() { return &___bytesTotal_4; }
	inline void set_bytesTotal_4(int32_t value)
	{
		___bytesTotal_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LibPlacenote/PNTransferStatusUnity
struct PNTransferStatusUnity_t570742751_marshaled_pinvoke
{
	char* ___mapId_0;
	int8_t ___completed_1;
	int8_t ___faulted_2;
	int32_t ___bytesTransferred_3;
	int32_t ___bytesTotal_4;
};
// Native definition for COM marshalling of LibPlacenote/PNTransferStatusUnity
struct PNTransferStatusUnity_t570742751_marshaled_com
{
	char* ___mapId_0;
	int8_t ___completed_1;
	int8_t ___faulted_2;
	int32_t ___bytesTransferred_3;
	int32_t ___bytesTotal_4;
};
#endif // PNTRANSFERSTATUSUNITY_T570742751_H
#ifndef PNVECTOR3UNITY_T457607669_H
#define PNVECTOR3UNITY_T457607669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/PNVector3Unity
struct  PNVector3Unity_t457607669 
{
public:
	// System.Single LibPlacenote/PNVector3Unity::x
	float ___x_0;
	// System.Single LibPlacenote/PNVector3Unity::y
	float ___y_1;
	// System.Single LibPlacenote/PNVector3Unity::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(PNVector3Unity_t457607669, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(PNVector3Unity_t457607669, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(PNVector3Unity_t457607669, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PNVECTOR3UNITY_T457607669_H
#ifndef SIMCAMERAPOSES_T1111907249_H
#define SIMCAMERAPOSES_T1111907249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/SimCameraPoses
struct  SimCameraPoses_t1111907249 
{
public:
	// System.Collections.Generic.List`1<LibPlacenote/PNTransformUnity> LibPlacenote/SimCameraPoses::cameraPoses
	List_1_t2932871760 * ___cameraPoses_0;

public:
	inline static int32_t get_offset_of_cameraPoses_0() { return static_cast<int32_t>(offsetof(SimCameraPoses_t1111907249, ___cameraPoses_0)); }
	inline List_1_t2932871760 * get_cameraPoses_0() const { return ___cameraPoses_0; }
	inline List_1_t2932871760 ** get_address_of_cameraPoses_0() { return &___cameraPoses_0; }
	inline void set_cameraPoses_0(List_1_t2932871760 * value)
	{
		___cameraPoses_0 = value;
		Il2CppCodeGenWriteBarrier((&___cameraPoses_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LibPlacenote/SimCameraPoses
struct SimCameraPoses_t1111907249_marshaled_pinvoke
{
	List_1_t2932871760 * ___cameraPoses_0;
};
// Native definition for COM marshalling of LibPlacenote/SimCameraPoses
struct SimCameraPoses_t1111907249_marshaled_com
{
	List_1_t2932871760 * ___cameraPoses_0;
};
#endif // SIMCAMERAPOSES_T1111907249_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef SPHERICALHARMONICSL2_T3220866195_H
#define SPHERICALHARMONICSL2_T3220866195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.SphericalHarmonicsL2
struct  SphericalHarmonicsL2_t3220866195 
{
public:
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;

public:
	inline static int32_t get_offset_of_shr0_0() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shr0_0)); }
	inline float get_shr0_0() const { return ___shr0_0; }
	inline float* get_address_of_shr0_0() { return &___shr0_0; }
	inline void set_shr0_0(float value)
	{
		___shr0_0 = value;
	}

	inline static int32_t get_offset_of_shr1_1() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shr1_1)); }
	inline float get_shr1_1() const { return ___shr1_1; }
	inline float* get_address_of_shr1_1() { return &___shr1_1; }
	inline void set_shr1_1(float value)
	{
		___shr1_1 = value;
	}

	inline static int32_t get_offset_of_shr2_2() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shr2_2)); }
	inline float get_shr2_2() const { return ___shr2_2; }
	inline float* get_address_of_shr2_2() { return &___shr2_2; }
	inline void set_shr2_2(float value)
	{
		___shr2_2 = value;
	}

	inline static int32_t get_offset_of_shr3_3() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shr3_3)); }
	inline float get_shr3_3() const { return ___shr3_3; }
	inline float* get_address_of_shr3_3() { return &___shr3_3; }
	inline void set_shr3_3(float value)
	{
		___shr3_3 = value;
	}

	inline static int32_t get_offset_of_shr4_4() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shr4_4)); }
	inline float get_shr4_4() const { return ___shr4_4; }
	inline float* get_address_of_shr4_4() { return &___shr4_4; }
	inline void set_shr4_4(float value)
	{
		___shr4_4 = value;
	}

	inline static int32_t get_offset_of_shr5_5() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shr5_5)); }
	inline float get_shr5_5() const { return ___shr5_5; }
	inline float* get_address_of_shr5_5() { return &___shr5_5; }
	inline void set_shr5_5(float value)
	{
		___shr5_5 = value;
	}

	inline static int32_t get_offset_of_shr6_6() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shr6_6)); }
	inline float get_shr6_6() const { return ___shr6_6; }
	inline float* get_address_of_shr6_6() { return &___shr6_6; }
	inline void set_shr6_6(float value)
	{
		___shr6_6 = value;
	}

	inline static int32_t get_offset_of_shr7_7() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shr7_7)); }
	inline float get_shr7_7() const { return ___shr7_7; }
	inline float* get_address_of_shr7_7() { return &___shr7_7; }
	inline void set_shr7_7(float value)
	{
		___shr7_7 = value;
	}

	inline static int32_t get_offset_of_shr8_8() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shr8_8)); }
	inline float get_shr8_8() const { return ___shr8_8; }
	inline float* get_address_of_shr8_8() { return &___shr8_8; }
	inline void set_shr8_8(float value)
	{
		___shr8_8 = value;
	}

	inline static int32_t get_offset_of_shg0_9() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shg0_9)); }
	inline float get_shg0_9() const { return ___shg0_9; }
	inline float* get_address_of_shg0_9() { return &___shg0_9; }
	inline void set_shg0_9(float value)
	{
		___shg0_9 = value;
	}

	inline static int32_t get_offset_of_shg1_10() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shg1_10)); }
	inline float get_shg1_10() const { return ___shg1_10; }
	inline float* get_address_of_shg1_10() { return &___shg1_10; }
	inline void set_shg1_10(float value)
	{
		___shg1_10 = value;
	}

	inline static int32_t get_offset_of_shg2_11() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shg2_11)); }
	inline float get_shg2_11() const { return ___shg2_11; }
	inline float* get_address_of_shg2_11() { return &___shg2_11; }
	inline void set_shg2_11(float value)
	{
		___shg2_11 = value;
	}

	inline static int32_t get_offset_of_shg3_12() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shg3_12)); }
	inline float get_shg3_12() const { return ___shg3_12; }
	inline float* get_address_of_shg3_12() { return &___shg3_12; }
	inline void set_shg3_12(float value)
	{
		___shg3_12 = value;
	}

	inline static int32_t get_offset_of_shg4_13() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shg4_13)); }
	inline float get_shg4_13() const { return ___shg4_13; }
	inline float* get_address_of_shg4_13() { return &___shg4_13; }
	inline void set_shg4_13(float value)
	{
		___shg4_13 = value;
	}

	inline static int32_t get_offset_of_shg5_14() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shg5_14)); }
	inline float get_shg5_14() const { return ___shg5_14; }
	inline float* get_address_of_shg5_14() { return &___shg5_14; }
	inline void set_shg5_14(float value)
	{
		___shg5_14 = value;
	}

	inline static int32_t get_offset_of_shg6_15() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shg6_15)); }
	inline float get_shg6_15() const { return ___shg6_15; }
	inline float* get_address_of_shg6_15() { return &___shg6_15; }
	inline void set_shg6_15(float value)
	{
		___shg6_15 = value;
	}

	inline static int32_t get_offset_of_shg7_16() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shg7_16)); }
	inline float get_shg7_16() const { return ___shg7_16; }
	inline float* get_address_of_shg7_16() { return &___shg7_16; }
	inline void set_shg7_16(float value)
	{
		___shg7_16 = value;
	}

	inline static int32_t get_offset_of_shg8_17() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shg8_17)); }
	inline float get_shg8_17() const { return ___shg8_17; }
	inline float* get_address_of_shg8_17() { return &___shg8_17; }
	inline void set_shg8_17(float value)
	{
		___shg8_17 = value;
	}

	inline static int32_t get_offset_of_shb0_18() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shb0_18)); }
	inline float get_shb0_18() const { return ___shb0_18; }
	inline float* get_address_of_shb0_18() { return &___shb0_18; }
	inline void set_shb0_18(float value)
	{
		___shb0_18 = value;
	}

	inline static int32_t get_offset_of_shb1_19() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shb1_19)); }
	inline float get_shb1_19() const { return ___shb1_19; }
	inline float* get_address_of_shb1_19() { return &___shb1_19; }
	inline void set_shb1_19(float value)
	{
		___shb1_19 = value;
	}

	inline static int32_t get_offset_of_shb2_20() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shb2_20)); }
	inline float get_shb2_20() const { return ___shb2_20; }
	inline float* get_address_of_shb2_20() { return &___shb2_20; }
	inline void set_shb2_20(float value)
	{
		___shb2_20 = value;
	}

	inline static int32_t get_offset_of_shb3_21() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shb3_21)); }
	inline float get_shb3_21() const { return ___shb3_21; }
	inline float* get_address_of_shb3_21() { return &___shb3_21; }
	inline void set_shb3_21(float value)
	{
		___shb3_21 = value;
	}

	inline static int32_t get_offset_of_shb4_22() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shb4_22)); }
	inline float get_shb4_22() const { return ___shb4_22; }
	inline float* get_address_of_shb4_22() { return &___shb4_22; }
	inline void set_shb4_22(float value)
	{
		___shb4_22 = value;
	}

	inline static int32_t get_offset_of_shb5_23() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shb5_23)); }
	inline float get_shb5_23() const { return ___shb5_23; }
	inline float* get_address_of_shb5_23() { return &___shb5_23; }
	inline void set_shb5_23(float value)
	{
		___shb5_23 = value;
	}

	inline static int32_t get_offset_of_shb6_24() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shb6_24)); }
	inline float get_shb6_24() const { return ___shb6_24; }
	inline float* get_address_of_shb6_24() { return &___shb6_24; }
	inline void set_shb6_24(float value)
	{
		___shb6_24 = value;
	}

	inline static int32_t get_offset_of_shb7_25() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shb7_25)); }
	inline float get_shb7_25() const { return ___shb7_25; }
	inline float* get_address_of_shb7_25() { return &___shb7_25; }
	inline void set_shb7_25(float value)
	{
		___shb7_25 = value;
	}

	inline static int32_t get_offset_of_shb8_26() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_t3220866195, ___shb8_26)); }
	inline float get_shb8_26() const { return ___shb8_26; }
	inline float* get_address_of_shb8_26() { return &___shb8_26; }
	inline void set_shb8_26(float value)
	{
		___shb8_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERICALHARMONICSL2_T3220866195_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef ARLIGHTESTIMATE_T644539166_H
#define ARLIGHTESTIMATE_T644539166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARLightEstimate
struct  ARLightEstimate_t644539166 
{
public:
	// System.Single UnityEngine.XR.iOS.ARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(ARLightEstimate_t644539166, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARLIGHTESTIMATE_T644539166_H
#ifndef ARPOINT_T499615819_H
#define ARPOINT_T499615819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPoint
struct  ARPoint_t499615819 
{
public:
	// System.Double UnityEngine.XR.iOS.ARPoint::x
	double ___x_0;
	// System.Double UnityEngine.XR.iOS.ARPoint::y
	double ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ARPoint_t499615819, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ARPoint_t499615819, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPOINT_T499615819_H
#ifndef ARSIZE_T208719028_H
#define ARSIZE_T208719028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARSize
struct  ARSize_t208719028 
{
public:
	// System.Double UnityEngine.XR.iOS.ARSize::width
	double ___width_0;
	// System.Double UnityEngine.XR.iOS.ARSize::height
	double ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(ARSize_t208719028, ___width_0)); }
	inline double get_width_0() const { return ___width_0; }
	inline double* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(double value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(ARSize_t208719028, ___height_1)); }
	inline double get_height_1() const { return ___height_1; }
	inline double* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(double value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSIZE_T208719028_H
#ifndef UNITYARLIGHTESTIMATE_T1498306117_H
#define UNITYARLIGHTESTIMATE_T1498306117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t1498306117 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1498306117, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1498306117, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_T1498306117_H
#ifndef U3CONDATASETUPLOADU3EC__ANONSTOREY2_T306898241_H
#define U3CONDATASETUPLOADU3EC__ANONSTOREY2_T306898241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/<OnDatasetUpload>c__AnonStorey2
struct  U3COnDatasetUploadU3Ec__AnonStorey2_t306898241  : public RuntimeObject
{
public:
	// LibPlacenote/PNTransferStatusUnity LibPlacenote/<OnDatasetUpload>c__AnonStorey2::statusClone
	PNTransferStatusUnity_t570742751  ___statusClone_0;
	// System.Action`3<System.Boolean,System.Boolean,System.Single> LibPlacenote/<OnDatasetUpload>c__AnonStorey2::uploadProgressCb
	Action_3_t1496896439 * ___uploadProgressCb_1;
	// System.Runtime.InteropServices.GCHandle LibPlacenote/<OnDatasetUpload>c__AnonStorey2::handle
	GCHandle_t3351438187  ___handle_2;

public:
	inline static int32_t get_offset_of_statusClone_0() { return static_cast<int32_t>(offsetof(U3COnDatasetUploadU3Ec__AnonStorey2_t306898241, ___statusClone_0)); }
	inline PNTransferStatusUnity_t570742751  get_statusClone_0() const { return ___statusClone_0; }
	inline PNTransferStatusUnity_t570742751 * get_address_of_statusClone_0() { return &___statusClone_0; }
	inline void set_statusClone_0(PNTransferStatusUnity_t570742751  value)
	{
		___statusClone_0 = value;
	}

	inline static int32_t get_offset_of_uploadProgressCb_1() { return static_cast<int32_t>(offsetof(U3COnDatasetUploadU3Ec__AnonStorey2_t306898241, ___uploadProgressCb_1)); }
	inline Action_3_t1496896439 * get_uploadProgressCb_1() const { return ___uploadProgressCb_1; }
	inline Action_3_t1496896439 ** get_address_of_uploadProgressCb_1() { return &___uploadProgressCb_1; }
	inline void set_uploadProgressCb_1(Action_3_t1496896439 * value)
	{
		___uploadProgressCb_1 = value;
		Il2CppCodeGenWriteBarrier((&___uploadProgressCb_1), value);
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(U3COnDatasetUploadU3Ec__AnonStorey2_t306898241, ___handle_2)); }
	inline GCHandle_t3351438187  get_handle_2() const { return ___handle_2; }
	inline GCHandle_t3351438187 * get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(GCHandle_t3351438187  value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONDATASETUPLOADU3EC__ANONSTOREY2_T306898241_H
#ifndef U3CONGETMETADATAU3EC__ANONSTOREY3_T4135193145_H
#define U3CONGETMETADATAU3EC__ANONSTOREY3_T4135193145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/<OnGetMetadata>c__AnonStorey3
struct  U3COnGetMetadataU3Ec__AnonStorey3_t4135193145  : public RuntimeObject
{
public:
	// LibPlacenote/PNCallbackResultUnity LibPlacenote/<OnGetMetadata>c__AnonStorey3::resultClone
	PNCallbackResultUnity_t545882037  ___resultClone_0;
	// System.Action`1<LibPlacenote/MapMetadata> LibPlacenote/<OnGetMetadata>c__AnonStorey3::metadataCb
	Action_1_t498710433 * ___metadataCb_1;
	// System.Runtime.InteropServices.GCHandle LibPlacenote/<OnGetMetadata>c__AnonStorey3::handle
	GCHandle_t3351438187  ___handle_2;

public:
	inline static int32_t get_offset_of_resultClone_0() { return static_cast<int32_t>(offsetof(U3COnGetMetadataU3Ec__AnonStorey3_t4135193145, ___resultClone_0)); }
	inline PNCallbackResultUnity_t545882037  get_resultClone_0() const { return ___resultClone_0; }
	inline PNCallbackResultUnity_t545882037 * get_address_of_resultClone_0() { return &___resultClone_0; }
	inline void set_resultClone_0(PNCallbackResultUnity_t545882037  value)
	{
		___resultClone_0 = value;
	}

	inline static int32_t get_offset_of_metadataCb_1() { return static_cast<int32_t>(offsetof(U3COnGetMetadataU3Ec__AnonStorey3_t4135193145, ___metadataCb_1)); }
	inline Action_1_t498710433 * get_metadataCb_1() const { return ___metadataCb_1; }
	inline Action_1_t498710433 ** get_address_of_metadataCb_1() { return &___metadataCb_1; }
	inline void set_metadataCb_1(Action_1_t498710433 * value)
	{
		___metadataCb_1 = value;
		Il2CppCodeGenWriteBarrier((&___metadataCb_1), value);
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(U3COnGetMetadataU3Ec__AnonStorey3_t4135193145, ___handle_2)); }
	inline GCHandle_t3351438187  get_handle_2() const { return ___handle_2; }
	inline GCHandle_t3351438187 * get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(GCHandle_t3351438187  value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONGETMETADATAU3EC__ANONSTOREY3_T4135193145_H
#ifndef U3CONMAPDELETEDU3EC__ANONSTOREY8_T2781276340_H
#define U3CONMAPDELETEDU3EC__ANONSTOREY8_T2781276340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/<OnMapDeleted>c__AnonStorey8
struct  U3COnMapDeletedU3Ec__AnonStorey8_t2781276340  : public RuntimeObject
{
public:
	// System.Boolean LibPlacenote/<OnMapDeleted>c__AnonStorey8::deleted
	bool ___deleted_0;
	// System.Action`2<System.Boolean,System.String> LibPlacenote/<OnMapDeleted>c__AnonStorey8::deletedCb
	Action_2_t1290832230 * ___deletedCb_1;
	// System.String LibPlacenote/<OnMapDeleted>c__AnonStorey8::errorMsg
	String_t* ___errorMsg_2;
	// System.Runtime.InteropServices.GCHandle LibPlacenote/<OnMapDeleted>c__AnonStorey8::handle
	GCHandle_t3351438187  ___handle_3;

public:
	inline static int32_t get_offset_of_deleted_0() { return static_cast<int32_t>(offsetof(U3COnMapDeletedU3Ec__AnonStorey8_t2781276340, ___deleted_0)); }
	inline bool get_deleted_0() const { return ___deleted_0; }
	inline bool* get_address_of_deleted_0() { return &___deleted_0; }
	inline void set_deleted_0(bool value)
	{
		___deleted_0 = value;
	}

	inline static int32_t get_offset_of_deletedCb_1() { return static_cast<int32_t>(offsetof(U3COnMapDeletedU3Ec__AnonStorey8_t2781276340, ___deletedCb_1)); }
	inline Action_2_t1290832230 * get_deletedCb_1() const { return ___deletedCb_1; }
	inline Action_2_t1290832230 ** get_address_of_deletedCb_1() { return &___deletedCb_1; }
	inline void set_deletedCb_1(Action_2_t1290832230 * value)
	{
		___deletedCb_1 = value;
		Il2CppCodeGenWriteBarrier((&___deletedCb_1), value);
	}

	inline static int32_t get_offset_of_errorMsg_2() { return static_cast<int32_t>(offsetof(U3COnMapDeletedU3Ec__AnonStorey8_t2781276340, ___errorMsg_2)); }
	inline String_t* get_errorMsg_2() const { return ___errorMsg_2; }
	inline String_t** get_address_of_errorMsg_2() { return &___errorMsg_2; }
	inline void set_errorMsg_2(String_t* value)
	{
		___errorMsg_2 = value;
		Il2CppCodeGenWriteBarrier((&___errorMsg_2), value);
	}

	inline static int32_t get_offset_of_handle_3() { return static_cast<int32_t>(offsetof(U3COnMapDeletedU3Ec__AnonStorey8_t2781276340, ___handle_3)); }
	inline GCHandle_t3351438187  get_handle_3() const { return ___handle_3; }
	inline GCHandle_t3351438187 * get_address_of_handle_3() { return &___handle_3; }
	inline void set_handle_3(GCHandle_t3351438187  value)
	{
		___handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONMAPDELETEDU3EC__ANONSTOREY8_T2781276340_H
#ifndef U3CONMAPLISTU3EC__ANONSTOREY4_T1897725485_H
#define U3CONMAPLISTU3EC__ANONSTOREY4_T1897725485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/<OnMapList>c__AnonStorey4
struct  U3COnMapListU3Ec__AnonStorey4_t1897725485  : public RuntimeObject
{
public:
	// LibPlacenote/PNCallbackResultUnity LibPlacenote/<OnMapList>c__AnonStorey4::resultClone
	PNCallbackResultUnity_t545882037  ___resultClone_0;
	// System.Action`1<LibPlacenote/MapInfo[]> LibPlacenote/<OnMapList>c__AnonStorey4::listCb
	Action_1_t216655412 * ___listCb_1;
	// System.Runtime.InteropServices.GCHandle LibPlacenote/<OnMapList>c__AnonStorey4::handle
	GCHandle_t3351438187  ___handle_2;

public:
	inline static int32_t get_offset_of_resultClone_0() { return static_cast<int32_t>(offsetof(U3COnMapListU3Ec__AnonStorey4_t1897725485, ___resultClone_0)); }
	inline PNCallbackResultUnity_t545882037  get_resultClone_0() const { return ___resultClone_0; }
	inline PNCallbackResultUnity_t545882037 * get_address_of_resultClone_0() { return &___resultClone_0; }
	inline void set_resultClone_0(PNCallbackResultUnity_t545882037  value)
	{
		___resultClone_0 = value;
	}

	inline static int32_t get_offset_of_listCb_1() { return static_cast<int32_t>(offsetof(U3COnMapListU3Ec__AnonStorey4_t1897725485, ___listCb_1)); }
	inline Action_1_t216655412 * get_listCb_1() const { return ___listCb_1; }
	inline Action_1_t216655412 ** get_address_of_listCb_1() { return &___listCb_1; }
	inline void set_listCb_1(Action_1_t216655412 * value)
	{
		___listCb_1 = value;
		Il2CppCodeGenWriteBarrier((&___listCb_1), value);
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(U3COnMapListU3Ec__AnonStorey4_t1897725485, ___handle_2)); }
	inline GCHandle_t3351438187  get_handle_2() const { return ___handle_2; }
	inline GCHandle_t3351438187 * get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(GCHandle_t3351438187  value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONMAPLISTU3EC__ANONSTOREY4_T1897725485_H
#ifndef U3CONMAPLOADEDU3EC__ANONSTOREY7_T2844660228_H
#define U3CONMAPLOADEDU3EC__ANONSTOREY7_T2844660228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/<OnMapLoaded>c__AnonStorey7
struct  U3COnMapLoadedU3Ec__AnonStorey7_t2844660228  : public RuntimeObject
{
public:
	// LibPlacenote/PNTransferStatusUnity LibPlacenote/<OnMapLoaded>c__AnonStorey7::statusClone
	PNTransferStatusUnity_t570742751  ___statusClone_0;
	// System.Action`3<System.Boolean,System.Boolean,System.Single> LibPlacenote/<OnMapLoaded>c__AnonStorey7::loadProgressCb
	Action_3_t1496896439 * ___loadProgressCb_1;
	// System.Runtime.InteropServices.GCHandle LibPlacenote/<OnMapLoaded>c__AnonStorey7::handle
	GCHandle_t3351438187  ___handle_2;

public:
	inline static int32_t get_offset_of_statusClone_0() { return static_cast<int32_t>(offsetof(U3COnMapLoadedU3Ec__AnonStorey7_t2844660228, ___statusClone_0)); }
	inline PNTransferStatusUnity_t570742751  get_statusClone_0() const { return ___statusClone_0; }
	inline PNTransferStatusUnity_t570742751 * get_address_of_statusClone_0() { return &___statusClone_0; }
	inline void set_statusClone_0(PNTransferStatusUnity_t570742751  value)
	{
		___statusClone_0 = value;
	}

	inline static int32_t get_offset_of_loadProgressCb_1() { return static_cast<int32_t>(offsetof(U3COnMapLoadedU3Ec__AnonStorey7_t2844660228, ___loadProgressCb_1)); }
	inline Action_3_t1496896439 * get_loadProgressCb_1() const { return ___loadProgressCb_1; }
	inline Action_3_t1496896439 ** get_address_of_loadProgressCb_1() { return &___loadProgressCb_1; }
	inline void set_loadProgressCb_1(Action_3_t1496896439 * value)
	{
		___loadProgressCb_1 = value;
		Il2CppCodeGenWriteBarrier((&___loadProgressCb_1), value);
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(U3COnMapLoadedU3Ec__AnonStorey7_t2844660228, ___handle_2)); }
	inline GCHandle_t3351438187  get_handle_2() const { return ___handle_2; }
	inline GCHandle_t3351438187 * get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(GCHandle_t3351438187  value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONMAPLOADEDU3EC__ANONSTOREY7_T2844660228_H
#ifndef U3CONMAPSAVEDU3EC__ANONSTOREY6_T446161732_H
#define U3CONMAPSAVEDU3EC__ANONSTOREY6_T446161732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/<OnMapSaved>c__AnonStorey6
struct  U3COnMapSavedU3Ec__AnonStorey6_t446161732  : public RuntimeObject
{
public:
	// LibPlacenote/PNCallbackResultUnity LibPlacenote/<OnMapSaved>c__AnonStorey6::resultClone
	PNCallbackResultUnity_t545882037  ___resultClone_0;
	// System.IntPtr LibPlacenote/<OnMapSaved>c__AnonStorey6::contextPtr
	intptr_t ___contextPtr_1;
	// System.Action`1<System.String> LibPlacenote/<OnMapSaved>c__AnonStorey6::savedCb
	Action_1_t2019918284 * ___savedCb_2;
	// System.Runtime.InteropServices.GCHandle LibPlacenote/<OnMapSaved>c__AnonStorey6::handle
	GCHandle_t3351438187  ___handle_3;

public:
	inline static int32_t get_offset_of_resultClone_0() { return static_cast<int32_t>(offsetof(U3COnMapSavedU3Ec__AnonStorey6_t446161732, ___resultClone_0)); }
	inline PNCallbackResultUnity_t545882037  get_resultClone_0() const { return ___resultClone_0; }
	inline PNCallbackResultUnity_t545882037 * get_address_of_resultClone_0() { return &___resultClone_0; }
	inline void set_resultClone_0(PNCallbackResultUnity_t545882037  value)
	{
		___resultClone_0 = value;
	}

	inline static int32_t get_offset_of_contextPtr_1() { return static_cast<int32_t>(offsetof(U3COnMapSavedU3Ec__AnonStorey6_t446161732, ___contextPtr_1)); }
	inline intptr_t get_contextPtr_1() const { return ___contextPtr_1; }
	inline intptr_t* get_address_of_contextPtr_1() { return &___contextPtr_1; }
	inline void set_contextPtr_1(intptr_t value)
	{
		___contextPtr_1 = value;
	}

	inline static int32_t get_offset_of_savedCb_2() { return static_cast<int32_t>(offsetof(U3COnMapSavedU3Ec__AnonStorey6_t446161732, ___savedCb_2)); }
	inline Action_1_t2019918284 * get_savedCb_2() const { return ___savedCb_2; }
	inline Action_1_t2019918284 ** get_address_of_savedCb_2() { return &___savedCb_2; }
	inline void set_savedCb_2(Action_1_t2019918284 * value)
	{
		___savedCb_2 = value;
		Il2CppCodeGenWriteBarrier((&___savedCb_2), value);
	}

	inline static int32_t get_offset_of_handle_3() { return static_cast<int32_t>(offsetof(U3COnMapSavedU3Ec__AnonStorey6_t446161732, ___handle_3)); }
	inline GCHandle_t3351438187  get_handle_3() const { return ___handle_3; }
	inline GCHandle_t3351438187 * get_address_of_handle_3() { return &___handle_3; }
	inline void set_handle_3(GCHandle_t3351438187  value)
	{
		___handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONMAPSAVEDU3EC__ANONSTOREY6_T446161732_H
#ifndef U3CONMAPUPLOADEDU3EC__ANONSTOREY5_T1760840464_H
#define U3CONMAPUPLOADEDU3EC__ANONSTOREY5_T1760840464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/<OnMapUploaded>c__AnonStorey5
struct  U3COnMapUploadedU3Ec__AnonStorey5_t1760840464  : public RuntimeObject
{
public:
	// LibPlacenote/PNTransferStatusUnity LibPlacenote/<OnMapUploaded>c__AnonStorey5::statusClone
	PNTransferStatusUnity_t570742751  ___statusClone_0;
	// System.Action`3<System.Boolean,System.Boolean,System.Single> LibPlacenote/<OnMapUploaded>c__AnonStorey5::progressCb
	Action_3_t1496896439 * ___progressCb_1;
	// System.Runtime.InteropServices.GCHandle LibPlacenote/<OnMapUploaded>c__AnonStorey5::handle
	GCHandle_t3351438187  ___handle_2;

public:
	inline static int32_t get_offset_of_statusClone_0() { return static_cast<int32_t>(offsetof(U3COnMapUploadedU3Ec__AnonStorey5_t1760840464, ___statusClone_0)); }
	inline PNTransferStatusUnity_t570742751  get_statusClone_0() const { return ___statusClone_0; }
	inline PNTransferStatusUnity_t570742751 * get_address_of_statusClone_0() { return &___statusClone_0; }
	inline void set_statusClone_0(PNTransferStatusUnity_t570742751  value)
	{
		___statusClone_0 = value;
	}

	inline static int32_t get_offset_of_progressCb_1() { return static_cast<int32_t>(offsetof(U3COnMapUploadedU3Ec__AnonStorey5_t1760840464, ___progressCb_1)); }
	inline Action_3_t1496896439 * get_progressCb_1() const { return ___progressCb_1; }
	inline Action_3_t1496896439 ** get_address_of_progressCb_1() { return &___progressCb_1; }
	inline void set_progressCb_1(Action_3_t1496896439 * value)
	{
		___progressCb_1 = value;
		Il2CppCodeGenWriteBarrier((&___progressCb_1), value);
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(U3COnMapUploadedU3Ec__AnonStorey5_t1760840464, ___handle_2)); }
	inline GCHandle_t3351438187  get_handle_2() const { return ___handle_2; }
	inline GCHandle_t3351438187 * get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(GCHandle_t3351438187  value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONMAPUPLOADEDU3EC__ANONSTOREY5_T1760840464_H
#ifndef MAPPINGSTATUS_T742489899_H
#define MAPPINGSTATUS_T742489899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/MappingStatus
struct  MappingStatus_t742489899 
{
public:
	// System.Int32 LibPlacenote/MappingStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingStatus_t742489899, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPPINGSTATUS_T742489899_H
#ifndef PNTRANSFORMUNITY_T1460797018_H
#define PNTRANSFORMUNITY_T1460797018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/PNTransformUnity
struct  PNTransformUnity_t1460797018 
{
public:
	// LibPlacenote/PNVector3Unity LibPlacenote/PNTransformUnity::position
	PNVector3Unity_t457607669  ___position_0;
	// LibPlacenote/PNQuaternionUnity LibPlacenote/PNTransformUnity::rotation
	PNQuaternionUnity_t3719227612  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PNTransformUnity_t1460797018, ___position_0)); }
	inline PNVector3Unity_t457607669  get_position_0() const { return ___position_0; }
	inline PNVector3Unity_t457607669 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(PNVector3Unity_t457607669  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(PNTransformUnity_t1460797018, ___rotation_1)); }
	inline PNQuaternionUnity_t3719227612  get_rotation_1() const { return ___rotation_1; }
	inline PNQuaternionUnity_t3719227612 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(PNQuaternionUnity_t3719227612  value)
	{
		___rotation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PNTRANSFORMUNITY_T1460797018_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef ARANCHOR_T362826948_H
#define ARANCHOR_T362826948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARAnchor
struct  ARAnchor_t362826948 
{
public:
	// System.String UnityEngine.XR.iOS.ARAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARAnchor::transform
	Matrix4x4_t1817901843  ___transform_1;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARAnchor_t362826948, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARAnchor_t362826948, ___transform_1)); }
	inline Matrix4x4_t1817901843  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t1817901843 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t1817901843  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARAnchor
struct ARAnchor_t362826948_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t1817901843  ___transform_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARAnchor
struct ARAnchor_t362826948_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t1817901843  ___transform_1;
};
#endif // ARANCHOR_T362826948_H
#ifndef ARERRORCODE_T1180871917_H
#define ARERRORCODE_T1180871917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARErrorCode
struct  ARErrorCode_t1180871917 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARErrorCode::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARErrorCode_t1180871917, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARERRORCODE_T1180871917_H
#ifndef ARHITTESTRESULTTYPE_T475323638_H
#define ARHITTESTRESULTTYPE_T475323638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResultType
struct  ARHitTestResultType_t475323638 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARHitTestResultType::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARHitTestResultType_t475323638, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARHITTESTRESULTTYPE_T475323638_H
#ifndef ARPLANEANCHORALIGNMENT_T2311256121_H
#define ARPLANEANCHORALIGNMENT_T2311256121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t2311256121 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t2311256121, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T2311256121_H
#ifndef ARRECT_T1366620727_H
#define ARRECT_T1366620727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARRect
struct  ARRect_t1366620727 
{
public:
	// UnityEngine.XR.iOS.ARPoint UnityEngine.XR.iOS.ARRect::origin
	ARPoint_t499615819  ___origin_0;
	// UnityEngine.XR.iOS.ARSize UnityEngine.XR.iOS.ARRect::size
	ARSize_t208719028  ___size_1;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(ARRect_t1366620727, ___origin_0)); }
	inline ARPoint_t499615819  get_origin_0() const { return ___origin_0; }
	inline ARPoint_t499615819 * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(ARPoint_t499615819  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(ARRect_t1366620727, ___size_1)); }
	inline ARSize_t208719028  get_size_1() const { return ___size_1; }
	inline ARSize_t208719028 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(ARSize_t208719028  value)
	{
		___size_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRECT_T1366620727_H
#ifndef ARTEXTUREHANDLES_T852411561_H
#define ARTEXTUREHANDLES_T852411561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTextureHandles
struct  ARTextureHandles_t852411561 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureY
	intptr_t ___textureY_0;
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureCbCr
	intptr_t ___textureCbCr_1;

public:
	inline static int32_t get_offset_of_textureY_0() { return static_cast<int32_t>(offsetof(ARTextureHandles_t852411561, ___textureY_0)); }
	inline intptr_t get_textureY_0() const { return ___textureY_0; }
	inline intptr_t* get_address_of_textureY_0() { return &___textureY_0; }
	inline void set_textureY_0(intptr_t value)
	{
		___textureY_0 = value;
	}

	inline static int32_t get_offset_of_textureCbCr_1() { return static_cast<int32_t>(offsetof(ARTextureHandles_t852411561, ___textureCbCr_1)); }
	inline intptr_t get_textureCbCr_1() const { return ___textureCbCr_1; }
	inline intptr_t* get_address_of_textureCbCr_1() { return &___textureCbCr_1; }
	inline void set_textureCbCr_1(intptr_t value)
	{
		___textureCbCr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTEXTUREHANDLES_T852411561_H
#ifndef ARTRACKINGQUALITY_T1229573376_H
#define ARTRACKINGQUALITY_T1229573376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingQuality
struct  ARTrackingQuality_t1229573376 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARTrackingQuality::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingQuality_t1229573376, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGQUALITY_T1229573376_H
#ifndef ARTRACKINGSTATE_T3182235352_H
#define ARTRACKINGSTATE_T3182235352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t3182235352 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t3182235352, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATE_T3182235352_H
#ifndef ARTRACKINGSTATEREASON_T2348933773_H
#define ARTRACKINGSTATEREASON_T2348933773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t2348933773 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t2348933773, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATEREASON_T2348933773_H
#ifndef ARUSERANCHOR_T1406831531_H
#define ARUSERANCHOR_T1406831531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARUserAnchor
struct  ARUserAnchor_t1406831531 
{
public:
	// System.String UnityEngine.XR.iOS.ARUserAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARUserAnchor::transform
	Matrix4x4_t1817901843  ___transform_1;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARUserAnchor_t1406831531, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARUserAnchor_t1406831531, ___transform_1)); }
	inline Matrix4x4_t1817901843  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t1817901843 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t1817901843  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t1406831531_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t1817901843  ___transform_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t1406831531_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t1817901843  ___transform_1;
};
#endif // ARUSERANCHOR_T1406831531_H
#ifndef LIGHTDATATYPE_T2323651587_H
#define LIGHTDATATYPE_T2323651587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.LightDataType
struct  LightDataType_t2323651587 
{
public:
	// System.Int32 UnityEngine.XR.iOS.LightDataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LightDataType_t2323651587, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTDATATYPE_T2323651587_H
#ifndef MARSHALDIRECTIONALLIGHTESTIMATE_T3803901471_H
#define MARSHALDIRECTIONALLIGHTESTIMATE_T3803901471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate
struct  MarshalDirectionalLightEstimate_t3803901471 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::primaryDirAndIntensity
	Vector4_t3319028937  ___primaryDirAndIntensity_0;
	// System.IntPtr UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::sphericalHarmonicCoefficientsPtr
	intptr_t ___sphericalHarmonicCoefficientsPtr_1;

public:
	inline static int32_t get_offset_of_primaryDirAndIntensity_0() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t3803901471, ___primaryDirAndIntensity_0)); }
	inline Vector4_t3319028937  get_primaryDirAndIntensity_0() const { return ___primaryDirAndIntensity_0; }
	inline Vector4_t3319028937 * get_address_of_primaryDirAndIntensity_0() { return &___primaryDirAndIntensity_0; }
	inline void set_primaryDirAndIntensity_0(Vector4_t3319028937  value)
	{
		___primaryDirAndIntensity_0 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicCoefficientsPtr_1() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t3803901471, ___sphericalHarmonicCoefficientsPtr_1)); }
	inline intptr_t get_sphericalHarmonicCoefficientsPtr_1() const { return ___sphericalHarmonicCoefficientsPtr_1; }
	inline intptr_t* get_address_of_sphericalHarmonicCoefficientsPtr_1() { return &___sphericalHarmonicCoefficientsPtr_1; }
	inline void set_sphericalHarmonicCoefficientsPtr_1(intptr_t value)
	{
		___sphericalHarmonicCoefficientsPtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIONALLIGHTESTIMATE_T3803901471_H
#ifndef UNITYARALIGNMENT_T3792119710_H
#define UNITYARALIGNMENT_T3792119710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_t3792119710 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARAlignment_t3792119710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARALIGNMENT_T3792119710_H
#ifndef UNITYARDIRECTIONALLIGHTESTIMATE_T2924556994_H
#define UNITYARDIRECTIONALLIGHTESTIMATE_T2924556994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct  UnityARDirectionalLightEstimate_t2924556994  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightDirection
	Vector3_t3722313464  ___primaryLightDirection_0;
	// System.Single UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightIntensity
	float ___primaryLightIntensity_1;
	// System.Single[] UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::sphericalHarmonicsCoefficients
	SingleU5BU5D_t1444911251* ___sphericalHarmonicsCoefficients_2;

public:
	inline static int32_t get_offset_of_primaryLightDirection_0() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2924556994, ___primaryLightDirection_0)); }
	inline Vector3_t3722313464  get_primaryLightDirection_0() const { return ___primaryLightDirection_0; }
	inline Vector3_t3722313464 * get_address_of_primaryLightDirection_0() { return &___primaryLightDirection_0; }
	inline void set_primaryLightDirection_0(Vector3_t3722313464  value)
	{
		___primaryLightDirection_0 = value;
	}

	inline static int32_t get_offset_of_primaryLightIntensity_1() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2924556994, ___primaryLightIntensity_1)); }
	inline float get_primaryLightIntensity_1() const { return ___primaryLightIntensity_1; }
	inline float* get_address_of_primaryLightIntensity_1() { return &___primaryLightIntensity_1; }
	inline void set_primaryLightIntensity_1(float value)
	{
		___primaryLightIntensity_1 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicsCoefficients_2() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_t2924556994, ___sphericalHarmonicsCoefficients_2)); }
	inline SingleU5BU5D_t1444911251* get_sphericalHarmonicsCoefficients_2() const { return ___sphericalHarmonicsCoefficients_2; }
	inline SingleU5BU5D_t1444911251** get_address_of_sphericalHarmonicsCoefficients_2() { return &___sphericalHarmonicsCoefficients_2; }
	inline void set_sphericalHarmonicsCoefficients_2(SingleU5BU5D_t1444911251* value)
	{
		___sphericalHarmonicsCoefficients_2 = value;
		Il2CppCodeGenWriteBarrier((&___sphericalHarmonicsCoefficients_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARDIRECTIONALLIGHTESTIMATE_T2924556994_H
#ifndef UNITYARFACEGEOMETRY_T4178775532_H
#define UNITYARFACEGEOMETRY_T4178775532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARFaceGeometry
struct  UnityARFaceGeometry_t4178775532 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::vertexCount
	int32_t ___vertexCount_0;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::vertices
	intptr_t ___vertices_1;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinateCount
	int32_t ___textureCoordinateCount_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinates
	intptr_t ___textureCoordinates_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::triangleCount
	int32_t ___triangleCount_4;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::triangleIndices
	intptr_t ___triangleIndices_5;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___vertices_1)); }
	inline intptr_t get_vertices_1() const { return ___vertices_1; }
	inline intptr_t* get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(intptr_t value)
	{
		___vertices_1 = value;
	}

	inline static int32_t get_offset_of_textureCoordinateCount_2() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___textureCoordinateCount_2)); }
	inline int32_t get_textureCoordinateCount_2() const { return ___textureCoordinateCount_2; }
	inline int32_t* get_address_of_textureCoordinateCount_2() { return &___textureCoordinateCount_2; }
	inline void set_textureCoordinateCount_2(int32_t value)
	{
		___textureCoordinateCount_2 = value;
	}

	inline static int32_t get_offset_of_textureCoordinates_3() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___textureCoordinates_3)); }
	inline intptr_t get_textureCoordinates_3() const { return ___textureCoordinates_3; }
	inline intptr_t* get_address_of_textureCoordinates_3() { return &___textureCoordinates_3; }
	inline void set_textureCoordinates_3(intptr_t value)
	{
		___textureCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_triangleIndices_5() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t4178775532, ___triangleIndices_5)); }
	inline intptr_t get_triangleIndices_5() const { return ___triangleIndices_5; }
	inline intptr_t* get_address_of_triangleIndices_5() { return &___triangleIndices_5; }
	inline void set_triangleIndices_5(intptr_t value)
	{
		___triangleIndices_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARFACEGEOMETRY_T4178775532_H
#ifndef UNITYARMATRIX4X4_T4073345847_H
#define UNITYARMATRIX4X4_T4073345847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t4073345847 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t3319028937  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t3319028937  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t3319028937  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t3319028937  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column0_0)); }
	inline Vector4_t3319028937  get_column0_0() const { return ___column0_0; }
	inline Vector4_t3319028937 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t3319028937  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column1_1)); }
	inline Vector4_t3319028937  get_column1_1() const { return ___column1_1; }
	inline Vector4_t3319028937 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t3319028937  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column2_2)); }
	inline Vector4_t3319028937  get_column2_2() const { return ___column2_2; }
	inline Vector4_t3319028937 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t3319028937  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column3_3)); }
	inline Vector4_t3319028937  get_column3_3() const { return ___column3_3; }
	inline Vector4_t3319028937 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t3319028937  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T4073345847_H
#ifndef UNITYARPLANEDETECTION_T1367733575_H
#define UNITYARPLANEDETECTION_T1367733575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t1367733575 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t1367733575, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARPLANEDETECTION_T1367733575_H
#ifndef UNITYARPLANEGEOMETRY_T1646881137_H
#define UNITYARPLANEGEOMETRY_T1646881137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneGeometry
struct  UnityARPlaneGeometry_t1646881137 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::vertexCount
	int32_t ___vertexCount_0;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::vertices
	intptr_t ___vertices_1;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::textureCoordinateCount
	int32_t ___textureCoordinateCount_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::textureCoordinates
	intptr_t ___textureCoordinates_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::triangleCount
	int32_t ___triangleCount_4;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::triangleIndices
	intptr_t ___triangleIndices_5;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::boundaryVertexCount
	int32_t ___boundaryVertexCount_6;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::boundaryVertices
	intptr_t ___boundaryVertices_7;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___vertices_1)); }
	inline intptr_t get_vertices_1() const { return ___vertices_1; }
	inline intptr_t* get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(intptr_t value)
	{
		___vertices_1 = value;
	}

	inline static int32_t get_offset_of_textureCoordinateCount_2() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___textureCoordinateCount_2)); }
	inline int32_t get_textureCoordinateCount_2() const { return ___textureCoordinateCount_2; }
	inline int32_t* get_address_of_textureCoordinateCount_2() { return &___textureCoordinateCount_2; }
	inline void set_textureCoordinateCount_2(int32_t value)
	{
		___textureCoordinateCount_2 = value;
	}

	inline static int32_t get_offset_of_textureCoordinates_3() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___textureCoordinates_3)); }
	inline intptr_t get_textureCoordinates_3() const { return ___textureCoordinates_3; }
	inline intptr_t* get_address_of_textureCoordinates_3() { return &___textureCoordinates_3; }
	inline void set_textureCoordinates_3(intptr_t value)
	{
		___textureCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_triangleIndices_5() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___triangleIndices_5)); }
	inline intptr_t get_triangleIndices_5() const { return ___triangleIndices_5; }
	inline intptr_t* get_address_of_triangleIndices_5() { return &___triangleIndices_5; }
	inline void set_triangleIndices_5(intptr_t value)
	{
		___triangleIndices_5 = value;
	}

	inline static int32_t get_offset_of_boundaryVertexCount_6() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___boundaryVertexCount_6)); }
	inline int32_t get_boundaryVertexCount_6() const { return ___boundaryVertexCount_6; }
	inline int32_t* get_address_of_boundaryVertexCount_6() { return &___boundaryVertexCount_6; }
	inline void set_boundaryVertexCount_6(int32_t value)
	{
		___boundaryVertexCount_6 = value;
	}

	inline static int32_t get_offset_of_boundaryVertices_7() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t1646881137, ___boundaryVertices_7)); }
	inline intptr_t get_boundaryVertices_7() const { return ___boundaryVertices_7; }
	inline intptr_t* get_address_of_boundaryVertices_7() { return &___boundaryVertices_7; }
	inline void set_boundaryVertices_7(intptr_t value)
	{
		___boundaryVertices_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARPLANEGEOMETRY_T1646881137_H
#ifndef UNITYARSESSIONRUNOPTION_T942967030_H
#define UNITYARSESSIONRUNOPTION_T942967030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t942967030 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t942967030, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONRUNOPTION_T942967030_H
#ifndef UNITYARVIDEOFORMAT_T1944454781_H
#define UNITYARVIDEOFORMAT_T1944454781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideoFormat
struct  UnityARVideoFormat_t1944454781 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatPtr
	intptr_t ___videoFormatPtr_0;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionWidth
	float ___imageResolutionWidth_1;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionHeight
	float ___imageResolutionHeight_2;
	// System.Int32 UnityEngine.XR.iOS.UnityARVideoFormat::framesPerSecond
	int32_t ___framesPerSecond_3;

public:
	inline static int32_t get_offset_of_videoFormatPtr_0() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___videoFormatPtr_0)); }
	inline intptr_t get_videoFormatPtr_0() const { return ___videoFormatPtr_0; }
	inline intptr_t* get_address_of_videoFormatPtr_0() { return &___videoFormatPtr_0; }
	inline void set_videoFormatPtr_0(intptr_t value)
	{
		___videoFormatPtr_0 = value;
	}

	inline static int32_t get_offset_of_imageResolutionWidth_1() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___imageResolutionWidth_1)); }
	inline float get_imageResolutionWidth_1() const { return ___imageResolutionWidth_1; }
	inline float* get_address_of_imageResolutionWidth_1() { return &___imageResolutionWidth_1; }
	inline void set_imageResolutionWidth_1(float value)
	{
		___imageResolutionWidth_1 = value;
	}

	inline static int32_t get_offset_of_imageResolutionHeight_2() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___imageResolutionHeight_2)); }
	inline float get_imageResolutionHeight_2() const { return ___imageResolutionHeight_2; }
	inline float* get_address_of_imageResolutionHeight_2() { return &___imageResolutionHeight_2; }
	inline void set_imageResolutionHeight_2(float value)
	{
		___imageResolutionHeight_2 = value;
	}

	inline static int32_t get_offset_of_framesPerSecond_3() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___framesPerSecond_3)); }
	inline int32_t get_framesPerSecond_3() const { return ___framesPerSecond_3; }
	inline int32_t* get_address_of_framesPerSecond_3() { return &___framesPerSecond_3; }
	inline void set_framesPerSecond_3(int32_t value)
	{
		___framesPerSecond_3 = value;
	}
};

struct UnityARVideoFormat_t1944454781_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat> UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatsList
	List_1_t3416529523 * ___videoFormatsList_4;
	// UnityEngine.XR.iOS.VideoFormatEnumerator UnityEngine.XR.iOS.UnityARVideoFormat::<>f__mg$cache0
	VideoFormatEnumerator_t3131638505 * ___U3CU3Ef__mgU24cache0_5;

public:
	inline static int32_t get_offset_of_videoFormatsList_4() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781_StaticFields, ___videoFormatsList_4)); }
	inline List_1_t3416529523 * get_videoFormatsList_4() const { return ___videoFormatsList_4; }
	inline List_1_t3416529523 ** get_address_of_videoFormatsList_4() { return &___videoFormatsList_4; }
	inline void set_videoFormatsList_4(List_1_t3416529523 * value)
	{
		___videoFormatsList_4 = value;
		Il2CppCodeGenWriteBarrier((&___videoFormatsList_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline VideoFormatEnumerator_t3131638505 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline VideoFormatEnumerator_t3131638505 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(VideoFormatEnumerator_t3131638505 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARVIDEOFORMAT_T1944454781_H
#ifndef UNITYVIDEOPARAMS_T4155354995_H
#define UNITYVIDEOPARAMS_T4155354995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t4155354995 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T4155354995_H
#ifndef SERIALIZABLEFROMEDITORMESSAGE_T2731251371_H
#define SERIALIZABLEFROMEDITORMESSAGE_T2731251371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableFromEditorMessage
struct  serializableFromEditorMessage_t2731251371  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.XR.iOS.Utils.serializableFromEditorMessage::subMessageId
	Guid_t  ___subMessageId_0;
	// UnityEngine.XR.iOS.Utils.serializableARKitInit UnityEngine.XR.iOS.Utils.serializableFromEditorMessage::arkitConfigMsg
	serializableARKitInit_t3839227232 * ___arkitConfigMsg_1;

public:
	inline static int32_t get_offset_of_subMessageId_0() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t2731251371, ___subMessageId_0)); }
	inline Guid_t  get_subMessageId_0() const { return ___subMessageId_0; }
	inline Guid_t * get_address_of_subMessageId_0() { return &___subMessageId_0; }
	inline void set_subMessageId_0(Guid_t  value)
	{
		___subMessageId_0 = value;
	}

	inline static int32_t get_offset_of_arkitConfigMsg_1() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t2731251371, ___arkitConfigMsg_1)); }
	inline serializableARKitInit_t3839227232 * get_arkitConfigMsg_1() const { return ___arkitConfigMsg_1; }
	inline serializableARKitInit_t3839227232 ** get_address_of_arkitConfigMsg_1() { return &___arkitConfigMsg_1; }
	inline void set_arkitConfigMsg_1(serializableARKitInit_t3839227232 * value)
	{
		___arkitConfigMsg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arkitConfigMsg_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEFROMEDITORMESSAGE_T2731251371_H
#ifndef U3CONPOSEU3EC__ANONSTOREY1_T1901961347_H
#define U3CONPOSEU3EC__ANONSTOREY1_T1901961347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/<OnPose>c__AnonStorey1
struct  U3COnPoseU3Ec__AnonStorey1_t1901961347  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<PlacenoteListener> LibPlacenote/<OnPose>c__AnonStorey1::listeners
	List_1_t4244818851 * ___listeners_0;
	// UnityEngine.Matrix4x4 LibPlacenote/<OnPose>c__AnonStorey1::outputPoseMat
	Matrix4x4_t1817901843  ___outputPoseMat_1;
	// UnityEngine.Matrix4x4 LibPlacenote/<OnPose>c__AnonStorey1::arkitPoseMat
	Matrix4x4_t1817901843  ___arkitPoseMat_2;
	// LibPlacenote/MappingStatus LibPlacenote/<OnPose>c__AnonStorey1::status
	int32_t ___status_3;

public:
	inline static int32_t get_offset_of_listeners_0() { return static_cast<int32_t>(offsetof(U3COnPoseU3Ec__AnonStorey1_t1901961347, ___listeners_0)); }
	inline List_1_t4244818851 * get_listeners_0() const { return ___listeners_0; }
	inline List_1_t4244818851 ** get_address_of_listeners_0() { return &___listeners_0; }
	inline void set_listeners_0(List_1_t4244818851 * value)
	{
		___listeners_0 = value;
		Il2CppCodeGenWriteBarrier((&___listeners_0), value);
	}

	inline static int32_t get_offset_of_outputPoseMat_1() { return static_cast<int32_t>(offsetof(U3COnPoseU3Ec__AnonStorey1_t1901961347, ___outputPoseMat_1)); }
	inline Matrix4x4_t1817901843  get_outputPoseMat_1() const { return ___outputPoseMat_1; }
	inline Matrix4x4_t1817901843 * get_address_of_outputPoseMat_1() { return &___outputPoseMat_1; }
	inline void set_outputPoseMat_1(Matrix4x4_t1817901843  value)
	{
		___outputPoseMat_1 = value;
	}

	inline static int32_t get_offset_of_arkitPoseMat_2() { return static_cast<int32_t>(offsetof(U3COnPoseU3Ec__AnonStorey1_t1901961347, ___arkitPoseMat_2)); }
	inline Matrix4x4_t1817901843  get_arkitPoseMat_2() const { return ___arkitPoseMat_2; }
	inline Matrix4x4_t1817901843 * get_address_of_arkitPoseMat_2() { return &___arkitPoseMat_2; }
	inline void set_arkitPoseMat_2(Matrix4x4_t1817901843  value)
	{
		___arkitPoseMat_2 = value;
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(U3COnPoseU3Ec__AnonStorey1_t1901961347, ___status_3)); }
	inline int32_t get_status_3() const { return ___status_3; }
	inline int32_t* get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(int32_t value)
	{
		___status_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONPOSEU3EC__ANONSTOREY1_T1901961347_H
#ifndef U3CONPOSEINVOKEREPEATU3EC__ITERATOR0_T1482259050_H
#define U3CONPOSEINVOKEREPEATU3EC__ITERATOR0_T1482259050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LibPlacenote/<OnPoseInvokeRepeat>c__Iterator0
struct  U3COnPoseInvokeRepeatU3Ec__Iterator0_t1482259050  : public RuntimeObject
{
public:
	// LibPlacenote/PNTransformUnity LibPlacenote/<OnPoseInvokeRepeat>c__Iterator0::<currCameraPose>__1
	PNTransformUnity_t1460797018  ___U3CcurrCameraPoseU3E__1_0;
	// LibPlacenote LibPlacenote/<OnPoseInvokeRepeat>c__Iterator0::$this
	LibPlacenote_t517300920 * ___U24this_1;
	// System.Object LibPlacenote/<OnPoseInvokeRepeat>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean LibPlacenote/<OnPoseInvokeRepeat>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 LibPlacenote/<OnPoseInvokeRepeat>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CcurrCameraPoseU3E__1_0() { return static_cast<int32_t>(offsetof(U3COnPoseInvokeRepeatU3Ec__Iterator0_t1482259050, ___U3CcurrCameraPoseU3E__1_0)); }
	inline PNTransformUnity_t1460797018  get_U3CcurrCameraPoseU3E__1_0() const { return ___U3CcurrCameraPoseU3E__1_0; }
	inline PNTransformUnity_t1460797018 * get_address_of_U3CcurrCameraPoseU3E__1_0() { return &___U3CcurrCameraPoseU3E__1_0; }
	inline void set_U3CcurrCameraPoseU3E__1_0(PNTransformUnity_t1460797018  value)
	{
		___U3CcurrCameraPoseU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3COnPoseInvokeRepeatU3Ec__Iterator0_t1482259050, ___U24this_1)); }
	inline LibPlacenote_t517300920 * get_U24this_1() const { return ___U24this_1; }
	inline LibPlacenote_t517300920 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(LibPlacenote_t517300920 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3COnPoseInvokeRepeatU3Ec__Iterator0_t1482259050, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3COnPoseInvokeRepeatU3Ec__Iterator0_t1482259050, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3COnPoseInvokeRepeatU3Ec__Iterator0_t1482259050, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONPOSEINVOKEREPEATU3EC__ITERATOR0_T1482259050_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef ARCAMERA_T2831687281_H
#define ARCAMERA_T2831687281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARCamera
struct  ARCamera_t2831687281 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARCamera::worldTransform
	Matrix4x4_t1817901843  ___worldTransform_0;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARCamera::eulerAngles
	Vector3_t3722313464  ___eulerAngles_1;
	// UnityEngine.XR.iOS.ARTrackingQuality UnityEngine.XR.iOS.ARCamera::trackingQuality
	int64_t ___trackingQuality_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARCamera::intrinsics_row1
	Vector3_t3722313464  ___intrinsics_row1_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARCamera::intrinsics_row2
	Vector3_t3722313464  ___intrinsics_row2_4;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARCamera::intrinsics_row3
	Vector3_t3722313464  ___intrinsics_row3_5;
	// UnityEngine.XR.iOS.ARSize UnityEngine.XR.iOS.ARCamera::imageResolution
	ARSize_t208719028  ___imageResolution_6;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(ARCamera_t2831687281, ___worldTransform_0)); }
	inline Matrix4x4_t1817901843  get_worldTransform_0() const { return ___worldTransform_0; }
	inline Matrix4x4_t1817901843 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(Matrix4x4_t1817901843  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_eulerAngles_1() { return static_cast<int32_t>(offsetof(ARCamera_t2831687281, ___eulerAngles_1)); }
	inline Vector3_t3722313464  get_eulerAngles_1() const { return ___eulerAngles_1; }
	inline Vector3_t3722313464 * get_address_of_eulerAngles_1() { return &___eulerAngles_1; }
	inline void set_eulerAngles_1(Vector3_t3722313464  value)
	{
		___eulerAngles_1 = value;
	}

	inline static int32_t get_offset_of_trackingQuality_2() { return static_cast<int32_t>(offsetof(ARCamera_t2831687281, ___trackingQuality_2)); }
	inline int64_t get_trackingQuality_2() const { return ___trackingQuality_2; }
	inline int64_t* get_address_of_trackingQuality_2() { return &___trackingQuality_2; }
	inline void set_trackingQuality_2(int64_t value)
	{
		___trackingQuality_2 = value;
	}

	inline static int32_t get_offset_of_intrinsics_row1_3() { return static_cast<int32_t>(offsetof(ARCamera_t2831687281, ___intrinsics_row1_3)); }
	inline Vector3_t3722313464  get_intrinsics_row1_3() const { return ___intrinsics_row1_3; }
	inline Vector3_t3722313464 * get_address_of_intrinsics_row1_3() { return &___intrinsics_row1_3; }
	inline void set_intrinsics_row1_3(Vector3_t3722313464  value)
	{
		___intrinsics_row1_3 = value;
	}

	inline static int32_t get_offset_of_intrinsics_row2_4() { return static_cast<int32_t>(offsetof(ARCamera_t2831687281, ___intrinsics_row2_4)); }
	inline Vector3_t3722313464  get_intrinsics_row2_4() const { return ___intrinsics_row2_4; }
	inline Vector3_t3722313464 * get_address_of_intrinsics_row2_4() { return &___intrinsics_row2_4; }
	inline void set_intrinsics_row2_4(Vector3_t3722313464  value)
	{
		___intrinsics_row2_4 = value;
	}

	inline static int32_t get_offset_of_intrinsics_row3_5() { return static_cast<int32_t>(offsetof(ARCamera_t2831687281, ___intrinsics_row3_5)); }
	inline Vector3_t3722313464  get_intrinsics_row3_5() const { return ___intrinsics_row3_5; }
	inline Vector3_t3722313464 * get_address_of_intrinsics_row3_5() { return &___intrinsics_row3_5; }
	inline void set_intrinsics_row3_5(Vector3_t3722313464  value)
	{
		___intrinsics_row3_5 = value;
	}

	inline static int32_t get_offset_of_imageResolution_6() { return static_cast<int32_t>(offsetof(ARCamera_t2831687281, ___imageResolution_6)); }
	inline ARSize_t208719028  get_imageResolution_6() const { return ___imageResolution_6; }
	inline ARSize_t208719028 * get_address_of_imageResolution_6() { return &___imageResolution_6; }
	inline void set_imageResolution_6(ARSize_t208719028  value)
	{
		___imageResolution_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCAMERA_T2831687281_H
#ifndef ARFACEGEOMETRY_T5139606_H
#define ARFACEGEOMETRY_T5139606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFaceGeometry
struct  ARFaceGeometry_t5139606  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARFaceGeometry UnityEngine.XR.iOS.ARFaceGeometry::uFaceGeometry
	UnityARFaceGeometry_t4178775532  ___uFaceGeometry_0;

public:
	inline static int32_t get_offset_of_uFaceGeometry_0() { return static_cast<int32_t>(offsetof(ARFaceGeometry_t5139606, ___uFaceGeometry_0)); }
	inline UnityARFaceGeometry_t4178775532  get_uFaceGeometry_0() const { return ___uFaceGeometry_0; }
	inline UnityARFaceGeometry_t4178775532 * get_address_of_uFaceGeometry_0() { return &___uFaceGeometry_0; }
	inline void set_uFaceGeometry_0(UnityARFaceGeometry_t4178775532  value)
	{
		___uFaceGeometry_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEGEOMETRY_T5139606_H
#ifndef ARHITTESTRESULT_T1279023930_H
#define ARHITTESTRESULT_T1279023930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResult
struct  ARHitTestResult_t1279023930 
{
public:
	// UnityEngine.XR.iOS.ARHitTestResultType UnityEngine.XR.iOS.ARHitTestResult::type
	int64_t ___type_0;
	// System.Double UnityEngine.XR.iOS.ARHitTestResult::distance
	double ___distance_1;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::localTransform
	Matrix4x4_t1817901843  ___localTransform_2;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::worldTransform
	Matrix4x4_t1817901843  ___worldTransform_3;
	// System.String UnityEngine.XR.iOS.ARHitTestResult::anchorIdentifier
	String_t* ___anchorIdentifier_4;
	// System.Boolean UnityEngine.XR.iOS.ARHitTestResult::isValid
	bool ___isValid_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1279023930, ___type_0)); }
	inline int64_t get_type_0() const { return ___type_0; }
	inline int64_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int64_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1279023930, ___distance_1)); }
	inline double get_distance_1() const { return ___distance_1; }
	inline double* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(double value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_localTransform_2() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1279023930, ___localTransform_2)); }
	inline Matrix4x4_t1817901843  get_localTransform_2() const { return ___localTransform_2; }
	inline Matrix4x4_t1817901843 * get_address_of_localTransform_2() { return &___localTransform_2; }
	inline void set_localTransform_2(Matrix4x4_t1817901843  value)
	{
		___localTransform_2 = value;
	}

	inline static int32_t get_offset_of_worldTransform_3() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1279023930, ___worldTransform_3)); }
	inline Matrix4x4_t1817901843  get_worldTransform_3() const { return ___worldTransform_3; }
	inline Matrix4x4_t1817901843 * get_address_of_worldTransform_3() { return &___worldTransform_3; }
	inline void set_worldTransform_3(Matrix4x4_t1817901843  value)
	{
		___worldTransform_3 = value;
	}

	inline static int32_t get_offset_of_anchorIdentifier_4() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1279023930, ___anchorIdentifier_4)); }
	inline String_t* get_anchorIdentifier_4() const { return ___anchorIdentifier_4; }
	inline String_t** get_address_of_anchorIdentifier_4() { return &___anchorIdentifier_4; }
	inline void set_anchorIdentifier_4(String_t* value)
	{
		___anchorIdentifier_4 = value;
		Il2CppCodeGenWriteBarrier((&___anchorIdentifier_4), value);
	}

	inline static int32_t get_offset_of_isValid_5() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1279023930, ___isValid_5)); }
	inline bool get_isValid_5() const { return ___isValid_5; }
	inline bool* get_address_of_isValid_5() { return &___isValid_5; }
	inline void set_isValid_5(bool value)
	{
		___isValid_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t1279023930_marshaled_pinvoke
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1817901843  ___localTransform_2;
	Matrix4x4_t1817901843  ___worldTransform_3;
	char* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t1279023930_marshaled_com
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1817901843  ___localTransform_2;
	Matrix4x4_t1817901843  ___worldTransform_3;
	Il2CppChar* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
#endif // ARHITTESTRESULT_T1279023930_H
#ifndef ARPLANEGEOMETRY_T1169415986_H
#define ARPLANEGEOMETRY_T1169415986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneGeometry
struct  ARPlaneGeometry_t1169415986  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARPlaneGeometry UnityEngine.XR.iOS.ARPlaneGeometry::uPlaneGeometry
	UnityARPlaneGeometry_t1646881137  ___uPlaneGeometry_0;

public:
	inline static int32_t get_offset_of_uPlaneGeometry_0() { return static_cast<int32_t>(offsetof(ARPlaneGeometry_t1169415986, ___uPlaneGeometry_0)); }
	inline UnityARPlaneGeometry_t1646881137  get_uPlaneGeometry_0() const { return ___uPlaneGeometry_0; }
	inline UnityARPlaneGeometry_t1646881137 * get_address_of_uPlaneGeometry_0() { return &___uPlaneGeometry_0; }
	inline void set_uPlaneGeometry_0(UnityARPlaneGeometry_t1646881137  value)
	{
		___uPlaneGeometry_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEGEOMETRY_T1169415986_H
#ifndef UNITYARANCHORDATA_T1157236668_H
#define UNITYARANCHORDATA_T1157236668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t1157236668 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_t3319028937  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_t3319028937  ___extent_4;
	// UnityEngine.XR.iOS.UnityARPlaneGeometry UnityEngine.XR.iOS.UnityARAnchorData::planeGeometry
	UnityARPlaneGeometry_t1646881137  ___planeGeometry_5;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___center_3)); }
	inline Vector4_t3319028937  get_center_3() const { return ___center_3; }
	inline Vector4_t3319028937 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_t3319028937  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___extent_4)); }
	inline Vector4_t3319028937  get_extent_4() const { return ___extent_4; }
	inline Vector4_t3319028937 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_t3319028937  value)
	{
		___extent_4 = value;
	}

	inline static int32_t get_offset_of_planeGeometry_5() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1157236668, ___planeGeometry_5)); }
	inline UnityARPlaneGeometry_t1646881137  get_planeGeometry_5() const { return ___planeGeometry_5; }
	inline UnityARPlaneGeometry_t1646881137 * get_address_of_planeGeometry_5() { return &___planeGeometry_5; }
	inline void set_planeGeometry_5(UnityARPlaneGeometry_t1646881137  value)
	{
		___planeGeometry_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORDATA_T1157236668_H
#ifndef UNITYARFACEANCHORDATA_T2028622935_H
#define UNITYARFACEANCHORDATA_T2028622935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARFaceAnchorData
struct  UnityARFaceAnchorData_t2028622935 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARFaceAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;
	// UnityEngine.XR.iOS.UnityARFaceGeometry UnityEngine.XR.iOS.UnityARFaceAnchorData::faceGeometry
	UnityARFaceGeometry_t4178775532  ___faceGeometry_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::blendShapes
	intptr_t ___blendShapes_3;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_faceGeometry_2() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___faceGeometry_2)); }
	inline UnityARFaceGeometry_t4178775532  get_faceGeometry_2() const { return ___faceGeometry_2; }
	inline UnityARFaceGeometry_t4178775532 * get_address_of_faceGeometry_2() { return &___faceGeometry_2; }
	inline void set_faceGeometry_2(UnityARFaceGeometry_t4178775532  value)
	{
		___faceGeometry_2 = value;
	}

	inline static int32_t get_offset_of_blendShapes_3() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t2028622935, ___blendShapes_3)); }
	inline intptr_t get_blendShapes_3() const { return ___blendShapes_3; }
	inline intptr_t* get_address_of_blendShapes_3() { return &___blendShapes_3; }
	inline void set_blendShapes_3(intptr_t value)
	{
		___blendShapes_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARFACEANCHORDATA_T2028622935_H
#ifndef UNITYARIMAGEANCHORDATA_T4182571716_H
#define UNITYARIMAGEANCHORDATA_T4182571716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARImageAnchorData
struct  UnityARImageAnchorData_t4182571716 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARImageAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARImageAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;
	// System.IntPtr UnityEngine.XR.iOS.UnityARImageAnchorData::referenceImageNamePtr
	intptr_t ___referenceImageNamePtr_2;
	// System.Single UnityEngine.XR.iOS.UnityARImageAnchorData::referenceImagePhysicalSize
	float ___referenceImagePhysicalSize_3;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARImageAnchorData_t4182571716, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARImageAnchorData_t4182571716, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_referenceImageNamePtr_2() { return static_cast<int32_t>(offsetof(UnityARImageAnchorData_t4182571716, ___referenceImageNamePtr_2)); }
	inline intptr_t get_referenceImageNamePtr_2() const { return ___referenceImageNamePtr_2; }
	inline intptr_t* get_address_of_referenceImageNamePtr_2() { return &___referenceImageNamePtr_2; }
	inline void set_referenceImageNamePtr_2(intptr_t value)
	{
		___referenceImageNamePtr_2 = value;
	}

	inline static int32_t get_offset_of_referenceImagePhysicalSize_3() { return static_cast<int32_t>(offsetof(UnityARImageAnchorData_t4182571716, ___referenceImagePhysicalSize_3)); }
	inline float get_referenceImagePhysicalSize_3() const { return ___referenceImagePhysicalSize_3; }
	inline float* get_address_of_referenceImagePhysicalSize_3() { return &___referenceImagePhysicalSize_3; }
	inline void set_referenceImagePhysicalSize_3(float value)
	{
		___referenceImagePhysicalSize_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARIMAGEANCHORDATA_T4182571716_H
#ifndef UNITYARLIGHTDATA_T2160616730_H
#define UNITYARLIGHTDATA_T2160616730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightData
struct  UnityARLightData_t2160616730 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityARLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARLightData::arLightEstimate
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate UnityEngine.XR.iOS.UnityARLightData::arDirectonalLightEstimate
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_t1498306117  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_t1498306117 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_t1498306117  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arDirectonalLightEstimate_2)); }
	inline UnityARDirectionalLightEstimate_t2924556994 * get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline UnityARDirectionalLightEstimate_t2924556994 ** get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(UnityARDirectionalLightEstimate_t2924556994 * value)
	{
		___arDirectonalLightEstimate_2 = value;
		Il2CppCodeGenWriteBarrier((&___arDirectonalLightEstimate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t2160616730_marshaled_pinvoke
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t2160616730_marshaled_com
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;
};
#endif // UNITYARLIGHTDATA_T2160616730_H
#ifndef UNITYMARSHALLIGHTDATA_T1623228070_H
#define UNITYMARSHALLIGHTDATA_T1623228070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityMarshalLightData
struct  UnityMarshalLightData_t1623228070 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityMarshalLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arLightEstimate
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arDirectonalLightEstimate
	MarshalDirectionalLightEstimate_t3803901471  ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_t1623228070, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_t1623228070, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_t1498306117  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_t1498306117 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_t1498306117  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_t1623228070, ___arDirectonalLightEstimate_2)); }
	inline MarshalDirectionalLightEstimate_t3803901471  get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline MarshalDirectionalLightEstimate_t3803901471 * get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(MarshalDirectionalLightEstimate_t3803901471  value)
	{
		___arDirectonalLightEstimate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYMARSHALLIGHTDATA_T1623228070_H
#ifndef SERIALIZABLEARKITINIT_T3839227232_H
#define SERIALIZABLEARKITINIT_T3839227232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableARKitInit
struct  serializableARKitInit_t3839227232  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration UnityEngine.XR.iOS.Utils.serializableARKitInit::config
	serializableARSessionConfiguration_t30565192 * ___config_0;
	// UnityEngine.XR.iOS.UnityARSessionRunOption UnityEngine.XR.iOS.Utils.serializableARKitInit::runOption
	int32_t ___runOption_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(serializableARKitInit_t3839227232, ___config_0)); }
	inline serializableARSessionConfiguration_t30565192 * get_config_0() const { return ___config_0; }
	inline serializableARSessionConfiguration_t30565192 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(serializableARSessionConfiguration_t30565192 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((&___config_0), value);
	}

	inline static int32_t get_offset_of_runOption_1() { return static_cast<int32_t>(offsetof(serializableARKitInit_t3839227232, ___runOption_1)); }
	inline int32_t get_runOption_1() const { return ___runOption_1; }
	inline int32_t* get_address_of_runOption_1() { return &___runOption_1; }
	inline void set_runOption_1(int32_t value)
	{
		___runOption_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARKITINIT_T3839227232_H
#ifndef SERIALIZABLEARSESSIONCONFIGURATION_T30565192_H
#define SERIALIZABLEARSESSIONCONFIGURATION_T30565192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration
struct  serializableARSessionConfiguration_t30565192  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;
	// System.Boolean UnityEngine.XR.iOS.Utils.serializableARSessionConfiguration::enableAutoFocus
	bool ___enableAutoFocus_4;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t30565192, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t30565192, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t30565192, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t30565192, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}

	inline static int32_t get_offset_of_enableAutoFocus_4() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t30565192, ___enableAutoFocus_4)); }
	inline bool get_enableAutoFocus_4() const { return ___enableAutoFocus_4; }
	inline bool* get_address_of_enableAutoFocus_4() { return &___enableAutoFocus_4; }
	inline void set_enableAutoFocus_4(bool value)
	{
		___enableAutoFocus_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARSESSIONCONFIGURATION_T30565192_H
#ifndef SERIALIZABLEUNITYARCAMERA_T1848993995_H
#define SERIALIZABLEUNITYARCAMERA_T1848993995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableUnityARCamera
struct  serializableUnityARCamera_t1848993995  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARCamera::worldTransform
	serializableUnityARMatrix4x4_t255097097 * ___worldTransform_0;
	// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARCamera::projectionMatrix
	serializableUnityARMatrix4x4_t255097097 * ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.Utils.serializableUnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.Utils.serializableUnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.Utils.serializableUnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.Utils.serializableUnityARLightData UnityEngine.XR.iOS.Utils.serializableUnityARCamera::lightData
	serializableUnityARLightData_t3029229948 * ___lightData_5;
	// UnityEngine.XR.iOS.Utils.serializablePointCloud UnityEngine.XR.iOS.Utils.serializableUnityARCamera::pointCloud
	serializablePointCloud_t4241265545 * ___pointCloud_6;
	// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARCamera::displayTransform
	serializableUnityARMatrix4x4_t255097097 * ___displayTransform_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t255097097 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t255097097 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t255097097 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___projectionMatrix_1)); }
	inline serializableUnityARMatrix4x4_t255097097 * get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline serializableUnityARMatrix4x4_t255097097 ** get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(serializableUnityARMatrix4x4_t255097097 * value)
	{
		___projectionMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___projectionMatrix_1), value);
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___lightData_5)); }
	inline serializableUnityARLightData_t3029229948 * get_lightData_5() const { return ___lightData_5; }
	inline serializableUnityARLightData_t3029229948 ** get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(serializableUnityARLightData_t3029229948 * value)
	{
		___lightData_5 = value;
		Il2CppCodeGenWriteBarrier((&___lightData_5), value);
	}

	inline static int32_t get_offset_of_pointCloud_6() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___pointCloud_6)); }
	inline serializablePointCloud_t4241265545 * get_pointCloud_6() const { return ___pointCloud_6; }
	inline serializablePointCloud_t4241265545 ** get_address_of_pointCloud_6() { return &___pointCloud_6; }
	inline void set_pointCloud_6(serializablePointCloud_t4241265545 * value)
	{
		___pointCloud_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloud_6), value);
	}

	inline static int32_t get_offset_of_displayTransform_7() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1848993995, ___displayTransform_7)); }
	inline serializableUnityARMatrix4x4_t255097097 * get_displayTransform_7() const { return ___displayTransform_7; }
	inline serializableUnityARMatrix4x4_t255097097 ** get_address_of_displayTransform_7() { return &___displayTransform_7; }
	inline void set_displayTransform_7(serializableUnityARMatrix4x4_t255097097 * value)
	{
		___displayTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___displayTransform_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARCAMERA_T1848993995_H
#ifndef SERIALIZABLEUNITYARLIGHTDATA_T3029229948_H
#define SERIALIZABLEUNITYARLIGHTDATA_T3029229948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableUnityARLightData
struct  serializableUnityARLightData_t3029229948  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.Utils.serializableUnityARLightData::whichLight
	int32_t ___whichLight_0;
	// UnityEngine.XR.iOS.Utils.serializableSHC UnityEngine.XR.iOS.Utils.serializableUnityARLightData::lightSHC
	serializableSHC_t226029808 * ___lightSHC_1;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARLightData::primaryLightDirAndIntensity
	SerializableVector4_t2739337940 * ___primaryLightDirAndIntensity_2;
	// System.Single UnityEngine.XR.iOS.Utils.serializableUnityARLightData::ambientIntensity
	float ___ambientIntensity_3;
	// System.Single UnityEngine.XR.iOS.Utils.serializableUnityARLightData::ambientColorTemperature
	float ___ambientColorTemperature_4;

public:
	inline static int32_t get_offset_of_whichLight_0() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3029229948, ___whichLight_0)); }
	inline int32_t get_whichLight_0() const { return ___whichLight_0; }
	inline int32_t* get_address_of_whichLight_0() { return &___whichLight_0; }
	inline void set_whichLight_0(int32_t value)
	{
		___whichLight_0 = value;
	}

	inline static int32_t get_offset_of_lightSHC_1() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3029229948, ___lightSHC_1)); }
	inline serializableSHC_t226029808 * get_lightSHC_1() const { return ___lightSHC_1; }
	inline serializableSHC_t226029808 ** get_address_of_lightSHC_1() { return &___lightSHC_1; }
	inline void set_lightSHC_1(serializableSHC_t226029808 * value)
	{
		___lightSHC_1 = value;
		Il2CppCodeGenWriteBarrier((&___lightSHC_1), value);
	}

	inline static int32_t get_offset_of_primaryLightDirAndIntensity_2() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3029229948, ___primaryLightDirAndIntensity_2)); }
	inline SerializableVector4_t2739337940 * get_primaryLightDirAndIntensity_2() const { return ___primaryLightDirAndIntensity_2; }
	inline SerializableVector4_t2739337940 ** get_address_of_primaryLightDirAndIntensity_2() { return &___primaryLightDirAndIntensity_2; }
	inline void set_primaryLightDirAndIntensity_2(SerializableVector4_t2739337940 * value)
	{
		___primaryLightDirAndIntensity_2 = value;
		Il2CppCodeGenWriteBarrier((&___primaryLightDirAndIntensity_2), value);
	}

	inline static int32_t get_offset_of_ambientIntensity_3() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3029229948, ___ambientIntensity_3)); }
	inline float get_ambientIntensity_3() const { return ___ambientIntensity_3; }
	inline float* get_address_of_ambientIntensity_3() { return &___ambientIntensity_3; }
	inline void set_ambientIntensity_3(float value)
	{
		___ambientIntensity_3 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_4() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t3029229948, ___ambientColorTemperature_4)); }
	inline float get_ambientColorTemperature_4() const { return ___ambientColorTemperature_4; }
	inline float* get_address_of_ambientColorTemperature_4() { return &___ambientColorTemperature_4; }
	inline void set_ambientColorTemperature_4(float value)
	{
		___ambientColorTemperature_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARLIGHTDATA_T3029229948_H
#ifndef SERIALIZABLEUNITYARPLANEANCHOR_T3965207599_H
#define SERIALIZABLEUNITYARPLANEANCHOR_T3965207599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t3965207599  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_t255097097 * ___worldTransform_0;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t2739337940 * ___center_1;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t2739337940 * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// UnityEngine.XR.iOS.Utils.serializablePlaneGeometry UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::planeGeometry
	serializablePlaneGeometry_t3471745378 * ___planeGeometry_4;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_t4116647657* ___identifierStr_5;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3965207599, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t255097097 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t255097097 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t255097097 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3965207599, ___center_1)); }
	inline SerializableVector4_t2739337940 * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t2739337940 ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t2739337940 * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((&___center_1), value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3965207599, ___extent_2)); }
	inline SerializableVector4_t2739337940 * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t2739337940 ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t2739337940 * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((&___extent_2), value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3965207599, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_planeGeometry_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3965207599, ___planeGeometry_4)); }
	inline serializablePlaneGeometry_t3471745378 * get_planeGeometry_4() const { return ___planeGeometry_4; }
	inline serializablePlaneGeometry_t3471745378 ** get_address_of_planeGeometry_4() { return &___planeGeometry_4; }
	inline void set_planeGeometry_4(serializablePlaneGeometry_t3471745378 * value)
	{
		___planeGeometry_4 = value;
		Il2CppCodeGenWriteBarrier((&___planeGeometry_4), value);
	}

	inline static int32_t get_offset_of_identifierStr_5() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3965207599, ___identifierStr_5)); }
	inline ByteU5BU5D_t4116647657* get_identifierStr_5() const { return ___identifierStr_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_identifierStr_5() { return &___identifierStr_5; }
	inline void set_identifierStr_5(ByteU5BU5D_t4116647657* value)
	{
		___identifierStr_5 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARPLANEANCHOR_T3965207599_H
#ifndef ARREFERENCEIMAGE_T2463148469_H
#define ARREFERENCEIMAGE_T2463148469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARReferenceImage
struct  ARReferenceImage_t2463148469  : public ScriptableObject_t2528358522
{
public:
	// System.String ARReferenceImage::imageName
	String_t* ___imageName_4;
	// UnityEngine.Texture2D ARReferenceImage::imageTexture
	Texture2D_t3840446185 * ___imageTexture_5;
	// System.Single ARReferenceImage::physicalSize
	float ___physicalSize_6;

public:
	inline static int32_t get_offset_of_imageName_4() { return static_cast<int32_t>(offsetof(ARReferenceImage_t2463148469, ___imageName_4)); }
	inline String_t* get_imageName_4() const { return ___imageName_4; }
	inline String_t** get_address_of_imageName_4() { return &___imageName_4; }
	inline void set_imageName_4(String_t* value)
	{
		___imageName_4 = value;
		Il2CppCodeGenWriteBarrier((&___imageName_4), value);
	}

	inline static int32_t get_offset_of_imageTexture_5() { return static_cast<int32_t>(offsetof(ARReferenceImage_t2463148469, ___imageTexture_5)); }
	inline Texture2D_t3840446185 * get_imageTexture_5() const { return ___imageTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_imageTexture_5() { return &___imageTexture_5; }
	inline void set_imageTexture_5(Texture2D_t3840446185 * value)
	{
		___imageTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___imageTexture_5), value);
	}

	inline static int32_t get_offset_of_physicalSize_6() { return static_cast<int32_t>(offsetof(ARReferenceImage_t2463148469, ___physicalSize_6)); }
	inline float get_physicalSize_6() const { return ___physicalSize_6; }
	inline float* get_address_of_physicalSize_6() { return &___physicalSize_6; }
	inline void set_physicalSize_6(float value)
	{
		___physicalSize_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARREFERENCEIMAGE_T2463148469_H
#ifndef ARREFERENCEIMAGESSET_T4271437859_H
#define ARREFERENCEIMAGESSET_T4271437859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARReferenceImagesSet
struct  ARReferenceImagesSet_t4271437859  : public ScriptableObject_t2528358522
{
public:
	// System.String ARReferenceImagesSet::resourceGroupName
	String_t* ___resourceGroupName_4;
	// ARReferenceImage[] ARReferenceImagesSet::referenceImages
	ARReferenceImageU5BU5D_t715634648* ___referenceImages_5;

public:
	inline static int32_t get_offset_of_resourceGroupName_4() { return static_cast<int32_t>(offsetof(ARReferenceImagesSet_t4271437859, ___resourceGroupName_4)); }
	inline String_t* get_resourceGroupName_4() const { return ___resourceGroupName_4; }
	inline String_t** get_address_of_resourceGroupName_4() { return &___resourceGroupName_4; }
	inline void set_resourceGroupName_4(String_t* value)
	{
		___resourceGroupName_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceGroupName_4), value);
	}

	inline static int32_t get_offset_of_referenceImages_5() { return static_cast<int32_t>(offsetof(ARReferenceImagesSet_t4271437859, ___referenceImages_5)); }
	inline ARReferenceImageU5BU5D_t715634648* get_referenceImages_5() const { return ___referenceImages_5; }
	inline ARReferenceImageU5BU5D_t715634648** get_address_of_referenceImages_5() { return &___referenceImages_5; }
	inline void set_referenceImages_5(ARReferenceImageU5BU5D_t715634648* value)
	{
		___referenceImages_5 = value;
		Il2CppCodeGenWriteBarrier((&___referenceImages_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARREFERENCEIMAGESSET_T4271437859_H
#ifndef DELEGATE_T3188908614_H
#define DELEGATE_T3188908614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainThreadTaskQueue/Delegate
struct  Delegate_t3188908614  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3188908614_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ARFACEANCHOR_T1844206636_H
#define ARFACEANCHOR_T1844206636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFaceAnchor
struct  ARFaceAnchor_t1844206636  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARFaceAnchorData UnityEngine.XR.iOS.ARFaceAnchor::faceAnchorData
	UnityARFaceAnchorData_t2028622935  ___faceAnchorData_0;

public:
	inline static int32_t get_offset_of_faceAnchorData_0() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636, ___faceAnchorData_0)); }
	inline UnityARFaceAnchorData_t2028622935  get_faceAnchorData_0() const { return ___faceAnchorData_0; }
	inline UnityARFaceAnchorData_t2028622935 * get_address_of_faceAnchorData_0() { return &___faceAnchorData_0; }
	inline void set_faceAnchorData_0(UnityARFaceAnchorData_t2028622935  value)
	{
		___faceAnchorData_0 = value;
	}
};

struct ARFaceAnchor_t1844206636_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> UnityEngine.XR.iOS.ARFaceAnchor::blendshapesDictionary
	Dictionary_2_t1182523073 * ___blendshapesDictionary_1;
	// UnityEngine.XR.iOS.ARFaceAnchor/DictionaryVisitorHandler UnityEngine.XR.iOS.ARFaceAnchor::<>f__mg$cache0
	DictionaryVisitorHandler_t414487210 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of_blendshapesDictionary_1() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636_StaticFields, ___blendshapesDictionary_1)); }
	inline Dictionary_2_t1182523073 * get_blendshapesDictionary_1() const { return ___blendshapesDictionary_1; }
	inline Dictionary_2_t1182523073 ** get_address_of_blendshapesDictionary_1() { return &___blendshapesDictionary_1; }
	inline void set_blendshapesDictionary_1(Dictionary_2_t1182523073 * value)
	{
		___blendshapesDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&___blendshapesDictionary_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t1844206636_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline DictionaryVisitorHandler_t414487210 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline DictionaryVisitorHandler_t414487210 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(DictionaryVisitorHandler_t414487210 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHOR_T1844206636_H
#ifndef DICTIONARYVISITORHANDLER_T414487210_H
#define DICTIONARYVISITORHANDLER_T414487210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFaceAnchor/DictionaryVisitorHandler
struct  DictionaryVisitorHandler_t414487210  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYVISITORHANDLER_T414487210_H
#ifndef ARFRAME_T4068331349_H
#define ARFRAME_T4068331349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFrame
struct  ARFrame_t4068331349 
{
public:
	// System.Double UnityEngine.XR.iOS.ARFrame::timestamp
	double ___timestamp_0;
	// System.IntPtr UnityEngine.XR.iOS.ARFrame::capturedImage
	intptr_t ___capturedImage_1;
	// UnityEngine.XR.iOS.ARCamera UnityEngine.XR.iOS.ARFrame::camera
	ARCamera_t2831687281  ___camera_2;
	// UnityEngine.XR.iOS.ARLightEstimate UnityEngine.XR.iOS.ARFrame::lightEstimate
	ARLightEstimate_t644539166  ___lightEstimate_3;

public:
	inline static int32_t get_offset_of_timestamp_0() { return static_cast<int32_t>(offsetof(ARFrame_t4068331349, ___timestamp_0)); }
	inline double get_timestamp_0() const { return ___timestamp_0; }
	inline double* get_address_of_timestamp_0() { return &___timestamp_0; }
	inline void set_timestamp_0(double value)
	{
		___timestamp_0 = value;
	}

	inline static int32_t get_offset_of_capturedImage_1() { return static_cast<int32_t>(offsetof(ARFrame_t4068331349, ___capturedImage_1)); }
	inline intptr_t get_capturedImage_1() const { return ___capturedImage_1; }
	inline intptr_t* get_address_of_capturedImage_1() { return &___capturedImage_1; }
	inline void set_capturedImage_1(intptr_t value)
	{
		___capturedImage_1 = value;
	}

	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(ARFrame_t4068331349, ___camera_2)); }
	inline ARCamera_t2831687281  get_camera_2() const { return ___camera_2; }
	inline ARCamera_t2831687281 * get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(ARCamera_t2831687281  value)
	{
		___camera_2 = value;
	}

	inline static int32_t get_offset_of_lightEstimate_3() { return static_cast<int32_t>(offsetof(ARFrame_t4068331349, ___lightEstimate_3)); }
	inline ARLightEstimate_t644539166  get_lightEstimate_3() const { return ___lightEstimate_3; }
	inline ARLightEstimate_t644539166 * get_address_of_lightEstimate_3() { return &___lightEstimate_3; }
	inline void set_lightEstimate_3(ARLightEstimate_t644539166  value)
	{
		___lightEstimate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFRAME_T4068331349_H
#ifndef ARIMAGEANCHOR_T3012563273_H
#define ARIMAGEANCHOR_T3012563273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARImageAnchor
struct  ARImageAnchor_t3012563273  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARImageAnchorData UnityEngine.XR.iOS.ARImageAnchor::imageAnchorData
	UnityARImageAnchorData_t4182571716  ___imageAnchorData_0;

public:
	inline static int32_t get_offset_of_imageAnchorData_0() { return static_cast<int32_t>(offsetof(ARImageAnchor_t3012563273, ___imageAnchorData_0)); }
	inline UnityARImageAnchorData_t4182571716  get_imageAnchorData_0() const { return ___imageAnchorData_0; }
	inline UnityARImageAnchorData_t4182571716 * get_address_of_imageAnchorData_0() { return &___imageAnchorData_0; }
	inline void set_imageAnchorData_0(UnityARImageAnchorData_t4182571716  value)
	{
		___imageAnchorData_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARIMAGEANCHOR_T3012563273_H
#ifndef ARPLANEANCHOR_T2049372221_H
#define ARPLANEANCHOR_T2049372221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t2049372221  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARAnchorData UnityEngine.XR.iOS.ARPlaneAnchor::planeAnchorData
	UnityARAnchorData_t1157236668  ___planeAnchorData_0;

public:
	inline static int32_t get_offset_of_planeAnchorData_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2049372221, ___planeAnchorData_0)); }
	inline UnityARAnchorData_t1157236668  get_planeAnchorData_0() const { return ___planeAnchorData_0; }
	inline UnityARAnchorData_t1157236668 * get_address_of_planeAnchorData_0() { return &___planeAnchorData_0; }
	inline void set_planeAnchorData_0(UnityARAnchorData_t1157236668  value)
	{
		___planeAnchorData_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHOR_T2049372221_H
#ifndef UNITYARCAMERA_T2069150450_H
#define UNITYARCAMERA_T2069150450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t2069150450 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityARCamera::lightData
	UnityARLightData_t2160616730  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t1718750761* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4073345847  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4073345847  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4073345847  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4073345847  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___lightData_5)); }
	inline UnityARLightData_t2160616730  get_lightData_5() const { return ___lightData_5; }
	inline UnityARLightData_t2160616730 * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityARLightData_t2160616730  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t4073345847  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t4073345847  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___pointCloudData_7)); }
	inline Vector3U5BU5D_t1718750761* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_t1718750761* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2069150450_marshaled_pinvoke
{
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t4155354995  ___videoParams_4;
	UnityARLightData_t2160616730_marshaled_pinvoke ___lightData_5;
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	Vector3_t3722313464 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2069150450_marshaled_com
{
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t4155354995  ___videoParams_4;
	UnityARLightData_t2160616730_marshaled_com ___lightData_5;
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	Vector3_t3722313464 * ___pointCloudData_7;
};
#endif // UNITYARCAMERA_T2069150450_H
#ifndef VIDEOFORMATENUMERATOR_T3131638505_H
#define VIDEOFORMATENUMERATOR_T3131638505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.VideoFormatEnumerator
struct  VideoFormatEnumerator_t3131638505  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATENUMERATOR_T3131638505_H
#ifndef INTERNAL_UNITYARCAMERA_T3920739388_H
#define INTERNAL_UNITYARCAMERA_T3920739388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t3920739388 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityMarshalLightData UnityEngine.XR.iOS.internal_UnityARCamera::lightData
	UnityMarshalLightData_t1623228070  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::displayTransform
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_7;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getLightEstimation
	uint32_t ___getLightEstimation_8;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4073345847  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4073345847  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4073345847  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4073345847  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___lightData_5)); }
	inline UnityMarshalLightData_t1623228070  get_lightData_5() const { return ___lightData_5; }
	inline UnityMarshalLightData_t1623228070 * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityMarshalLightData_t1623228070  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t4073345847  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t4073345847  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_7() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___getPointCloudData_7)); }
	inline uint32_t get_getPointCloudData_7() const { return ___getPointCloudData_7; }
	inline uint32_t* get_address_of_getPointCloudData_7() { return &___getPointCloudData_7; }
	inline void set_getPointCloudData_7(uint32_t value)
	{
		___getPointCloudData_7 = value;
	}

	inline static int32_t get_offset_of_getLightEstimation_8() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3920739388, ___getLightEstimation_8)); }
	inline uint32_t get_getLightEstimation_8() const { return ___getLightEstimation_8; }
	inline uint32_t* get_address_of_getLightEstimation_8() { return &___getLightEstimation_8; }
	inline void set_getLightEstimation_8(uint32_t value)
	{
		___getLightEstimation_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_UNITYARCAMERA_T3920739388_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef AR3DOFCAMERAMANAGER_T1160001149_H
#define AR3DOFCAMERAMANAGER_T1160001149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AR3DOFCameraManager
struct  AR3DOFCameraManager_t1160001149  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera AR3DOFCameraManager::m_camera
	Camera_t4157153871 * ___m_camera_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface AR3DOFCameraManager::m_session
	UnityARSessionNativeInterface_t3929719369 * ___m_session_5;
	// UnityEngine.Material AR3DOFCameraManager::savedClearMaterial
	Material_t340375123 * ___savedClearMaterial_6;

public:
	inline static int32_t get_offset_of_m_camera_4() { return static_cast<int32_t>(offsetof(AR3DOFCameraManager_t1160001149, ___m_camera_4)); }
	inline Camera_t4157153871 * get_m_camera_4() const { return ___m_camera_4; }
	inline Camera_t4157153871 ** get_address_of_m_camera_4() { return &___m_camera_4; }
	inline void set_m_camera_4(Camera_t4157153871 * value)
	{
		___m_camera_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_camera_4), value);
	}

	inline static int32_t get_offset_of_m_session_5() { return static_cast<int32_t>(offsetof(AR3DOFCameraManager_t1160001149, ___m_session_5)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_m_session_5() const { return ___m_session_5; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_m_session_5() { return &___m_session_5; }
	inline void set_m_session_5(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___m_session_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_5), value);
	}

	inline static int32_t get_offset_of_savedClearMaterial_6() { return static_cast<int32_t>(offsetof(AR3DOFCameraManager_t1160001149, ___savedClearMaterial_6)); }
	inline Material_t340375123 * get_savedClearMaterial_6() const { return ___savedClearMaterial_6; }
	inline Material_t340375123 ** get_address_of_savedClearMaterial_6() { return &___savedClearMaterial_6; }
	inline void set_savedClearMaterial_6(Material_t340375123 * value)
	{
		___savedClearMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((&___savedClearMaterial_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AR3DOFCAMERAMANAGER_T1160001149_H
#ifndef DONTDESTROYONLOAD_T1456007215_H
#define DONTDESTROYONLOAD_T1456007215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DontDestroyOnLoad
struct  DontDestroyOnLoad_t1456007215  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONTDESTROYONLOAD_T1456007215_H
#ifndef MAINTHREADTASKQUEUE_T1130532114_H
#define MAINTHREADTASKQUEUE_T1130532114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainThreadTaskQueue
struct  MainThreadTaskQueue_t1130532114  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<MainThreadTaskQueue/Delegate> MainThreadTaskQueue::delegates
	List_1_t366016060 * ___delegates_5;

public:
	inline static int32_t get_offset_of_delegates_5() { return static_cast<int32_t>(offsetof(MainThreadTaskQueue_t1130532114, ___delegates_5)); }
	inline List_1_t366016060 * get_delegates_5() const { return ___delegates_5; }
	inline List_1_t366016060 ** get_address_of_delegates_5() { return &___delegates_5; }
	inline void set_delegates_5(List_1_t366016060 * value)
	{
		___delegates_5 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_5), value);
	}
};

struct MainThreadTaskQueue_t1130532114_StaticFields
{
public:
	// MainThreadTaskQueue MainThreadTaskQueue::sInstance
	MainThreadTaskQueue_t1130532114 * ___sInstance_4;

public:
	inline static int32_t get_offset_of_sInstance_4() { return static_cast<int32_t>(offsetof(MainThreadTaskQueue_t1130532114_StaticFields, ___sInstance_4)); }
	inline MainThreadTaskQueue_t1130532114 * get_sInstance_4() const { return ___sInstance_4; }
	inline MainThreadTaskQueue_t1130532114 ** get_address_of_sInstance_4() { return &___sInstance_4; }
	inline void set_sInstance_4(MainThreadTaskQueue_t1130532114 * value)
	{
		___sInstance_4 = value;
		Il2CppCodeGenWriteBarrier((&___sInstance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINTHREADTASKQUEUE_T1130532114_H
#ifndef PLACENOTECAMERAMANAGER_T3054005330_H
#define PLACENOTECAMERAMANAGER_T3054005330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlacenoteCameraManager
struct  PlacenoteCameraManager_t3054005330  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera PlacenoteCameraManager::cameraChild
	Camera_t4157153871 * ___cameraChild_4;
	// UnityEngine.GameObject PlacenoteCameraManager::cameraParent
	GameObject_t1113636619 * ___cameraParent_5;

public:
	inline static int32_t get_offset_of_cameraChild_4() { return static_cast<int32_t>(offsetof(PlacenoteCameraManager_t3054005330, ___cameraChild_4)); }
	inline Camera_t4157153871 * get_cameraChild_4() const { return ___cameraChild_4; }
	inline Camera_t4157153871 ** get_address_of_cameraChild_4() { return &___cameraChild_4; }
	inline void set_cameraChild_4(Camera_t4157153871 * value)
	{
		___cameraChild_4 = value;
		Il2CppCodeGenWriteBarrier((&___cameraChild_4), value);
	}

	inline static int32_t get_offset_of_cameraParent_5() { return static_cast<int32_t>(offsetof(PlacenoteCameraManager_t3054005330, ___cameraParent_5)); }
	inline GameObject_t1113636619 * get_cameraParent_5() const { return ___cameraParent_5; }
	inline GameObject_t1113636619 ** get_address_of_cameraParent_5() { return &___cameraParent_5; }
	inline void set_cameraParent_5(GameObject_t1113636619 * value)
	{
		___cameraParent_5 = value;
		Il2CppCodeGenWriteBarrier((&___cameraParent_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLACENOTECAMERAMANAGER_T3054005330_H
#ifndef POINTCLOUDPARTICLEEXAMPLE_T182386800_H
#define POINTCLOUDPARTICLEEXAMPLE_T182386800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointCloudParticleExample
struct  PointCloudParticleExample_t182386800  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.ParticleSystem PointCloudParticleExample::pointCloudParticlePrefab
	ParticleSystem_t1800779281 * ___pointCloudParticlePrefab_4;
	// System.Int32 PointCloudParticleExample::maxPointsToShow
	int32_t ___maxPointsToShow_5;
	// System.Single PointCloudParticleExample::particleSize
	float ___particleSize_6;
	// UnityEngine.Vector3[] PointCloudParticleExample::m_PointCloudData
	Vector3U5BU5D_t1718750761* ___m_PointCloudData_7;
	// System.Boolean PointCloudParticleExample::frameUpdated
	bool ___frameUpdated_8;
	// UnityEngine.ParticleSystem PointCloudParticleExample::currentPS
	ParticleSystem_t1800779281 * ___currentPS_9;
	// UnityEngine.ParticleSystem/Particle[] PointCloudParticleExample::particles
	ParticleU5BU5D_t3069227754* ___particles_10;

public:
	inline static int32_t get_offset_of_pointCloudParticlePrefab_4() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t182386800, ___pointCloudParticlePrefab_4)); }
	inline ParticleSystem_t1800779281 * get_pointCloudParticlePrefab_4() const { return ___pointCloudParticlePrefab_4; }
	inline ParticleSystem_t1800779281 ** get_address_of_pointCloudParticlePrefab_4() { return &___pointCloudParticlePrefab_4; }
	inline void set_pointCloudParticlePrefab_4(ParticleSystem_t1800779281 * value)
	{
		___pointCloudParticlePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudParticlePrefab_4), value);
	}

	inline static int32_t get_offset_of_maxPointsToShow_5() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t182386800, ___maxPointsToShow_5)); }
	inline int32_t get_maxPointsToShow_5() const { return ___maxPointsToShow_5; }
	inline int32_t* get_address_of_maxPointsToShow_5() { return &___maxPointsToShow_5; }
	inline void set_maxPointsToShow_5(int32_t value)
	{
		___maxPointsToShow_5 = value;
	}

	inline static int32_t get_offset_of_particleSize_6() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t182386800, ___particleSize_6)); }
	inline float get_particleSize_6() const { return ___particleSize_6; }
	inline float* get_address_of_particleSize_6() { return &___particleSize_6; }
	inline void set_particleSize_6(float value)
	{
		___particleSize_6 = value;
	}

	inline static int32_t get_offset_of_m_PointCloudData_7() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t182386800, ___m_PointCloudData_7)); }
	inline Vector3U5BU5D_t1718750761* get_m_PointCloudData_7() const { return ___m_PointCloudData_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_PointCloudData_7() { return &___m_PointCloudData_7; }
	inline void set_m_PointCloudData_7(Vector3U5BU5D_t1718750761* value)
	{
		___m_PointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_7), value);
	}

	inline static int32_t get_offset_of_frameUpdated_8() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t182386800, ___frameUpdated_8)); }
	inline bool get_frameUpdated_8() const { return ___frameUpdated_8; }
	inline bool* get_address_of_frameUpdated_8() { return &___frameUpdated_8; }
	inline void set_frameUpdated_8(bool value)
	{
		___frameUpdated_8 = value;
	}

	inline static int32_t get_offset_of_currentPS_9() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t182386800, ___currentPS_9)); }
	inline ParticleSystem_t1800779281 * get_currentPS_9() const { return ___currentPS_9; }
	inline ParticleSystem_t1800779281 ** get_address_of_currentPS_9() { return &___currentPS_9; }
	inline void set_currentPS_9(ParticleSystem_t1800779281 * value)
	{
		___currentPS_9 = value;
		Il2CppCodeGenWriteBarrier((&___currentPS_9), value);
	}

	inline static int32_t get_offset_of_particles_10() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t182386800, ___particles_10)); }
	inline ParticleU5BU5D_t3069227754* get_particles_10() const { return ___particles_10; }
	inline ParticleU5BU5D_t3069227754** get_address_of_particles_10() { return &___particles_10; }
	inline void set_particles_10(ParticleU5BU5D_t3069227754* value)
	{
		___particles_10 = value;
		Il2CppCodeGenWriteBarrier((&___particles_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTCLOUDPARTICLEEXAMPLE_T182386800_H
#ifndef UNITYARCAMERAMANAGER_T4002280589_H
#define UNITYARCAMERAMANAGER_T4002280589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraManager
struct  UnityARCameraManager_t4002280589  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera UnityARCameraManager::m_camera
	Camera_t4157153871 * ___m_camera_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityARCameraManager::m_session
	UnityARSessionNativeInterface_t3929719369 * ___m_session_5;
	// UnityEngine.Material UnityARCameraManager::savedClearMaterial
	Material_t340375123 * ___savedClearMaterial_6;
	// UnityEngine.XR.iOS.UnityARAlignment UnityARCameraManager::startAlignment
	int32_t ___startAlignment_7;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityARCameraManager::planeDetection
	int32_t ___planeDetection_8;
	// ARReferenceImagesSet UnityARCameraManager::detectionImages
	ARReferenceImagesSet_t4271437859 * ___detectionImages_9;
	// System.Boolean UnityARCameraManager::getPointCloud
	bool ___getPointCloud_10;
	// System.Boolean UnityARCameraManager::enableLightEstimation
	bool ___enableLightEstimation_11;
	// System.Boolean UnityARCameraManager::enableAutoFocus
	bool ___enableAutoFocus_12;
	// System.Boolean UnityARCameraManager::sessionStarted
	bool ___sessionStarted_13;

public:
	inline static int32_t get_offset_of_m_camera_4() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___m_camera_4)); }
	inline Camera_t4157153871 * get_m_camera_4() const { return ___m_camera_4; }
	inline Camera_t4157153871 ** get_address_of_m_camera_4() { return &___m_camera_4; }
	inline void set_m_camera_4(Camera_t4157153871 * value)
	{
		___m_camera_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_camera_4), value);
	}

	inline static int32_t get_offset_of_m_session_5() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___m_session_5)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_m_session_5() const { return ___m_session_5; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_m_session_5() { return &___m_session_5; }
	inline void set_m_session_5(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___m_session_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_5), value);
	}

	inline static int32_t get_offset_of_savedClearMaterial_6() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___savedClearMaterial_6)); }
	inline Material_t340375123 * get_savedClearMaterial_6() const { return ___savedClearMaterial_6; }
	inline Material_t340375123 ** get_address_of_savedClearMaterial_6() { return &___savedClearMaterial_6; }
	inline void set_savedClearMaterial_6(Material_t340375123 * value)
	{
		___savedClearMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((&___savedClearMaterial_6), value);
	}

	inline static int32_t get_offset_of_startAlignment_7() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___startAlignment_7)); }
	inline int32_t get_startAlignment_7() const { return ___startAlignment_7; }
	inline int32_t* get_address_of_startAlignment_7() { return &___startAlignment_7; }
	inline void set_startAlignment_7(int32_t value)
	{
		___startAlignment_7 = value;
	}

	inline static int32_t get_offset_of_planeDetection_8() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___planeDetection_8)); }
	inline int32_t get_planeDetection_8() const { return ___planeDetection_8; }
	inline int32_t* get_address_of_planeDetection_8() { return &___planeDetection_8; }
	inline void set_planeDetection_8(int32_t value)
	{
		___planeDetection_8 = value;
	}

	inline static int32_t get_offset_of_detectionImages_9() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___detectionImages_9)); }
	inline ARReferenceImagesSet_t4271437859 * get_detectionImages_9() const { return ___detectionImages_9; }
	inline ARReferenceImagesSet_t4271437859 ** get_address_of_detectionImages_9() { return &___detectionImages_9; }
	inline void set_detectionImages_9(ARReferenceImagesSet_t4271437859 * value)
	{
		___detectionImages_9 = value;
		Il2CppCodeGenWriteBarrier((&___detectionImages_9), value);
	}

	inline static int32_t get_offset_of_getPointCloud_10() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___getPointCloud_10)); }
	inline bool get_getPointCloud_10() const { return ___getPointCloud_10; }
	inline bool* get_address_of_getPointCloud_10() { return &___getPointCloud_10; }
	inline void set_getPointCloud_10(bool value)
	{
		___getPointCloud_10 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_11() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___enableLightEstimation_11)); }
	inline bool get_enableLightEstimation_11() const { return ___enableLightEstimation_11; }
	inline bool* get_address_of_enableLightEstimation_11() { return &___enableLightEstimation_11; }
	inline void set_enableLightEstimation_11(bool value)
	{
		___enableLightEstimation_11 = value;
	}

	inline static int32_t get_offset_of_enableAutoFocus_12() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___enableAutoFocus_12)); }
	inline bool get_enableAutoFocus_12() const { return ___enableAutoFocus_12; }
	inline bool* get_address_of_enableAutoFocus_12() { return &___enableAutoFocus_12; }
	inline void set_enableAutoFocus_12(bool value)
	{
		___enableAutoFocus_12 = value;
	}

	inline static int32_t get_offset_of_sessionStarted_13() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t4002280589, ___sessionStarted_13)); }
	inline bool get_sessionStarted_13() const { return ___sessionStarted_13; }
	inline bool* get_address_of_sessionStarted_13() { return &___sessionStarted_13; }
	inline void set_sessionStarted_13(bool value)
	{
		___sessionStarted_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARCAMERAMANAGER_T4002280589_H
#ifndef UNITYARCAMERANEARFAR_T982368306_H
#define UNITYARCAMERANEARFAR_T982368306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraNearFar
struct  UnityARCameraNearFar_t982368306  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera UnityARCameraNearFar::attachedCamera
	Camera_t4157153871 * ___attachedCamera_4;
	// System.Single UnityARCameraNearFar::currentNearZ
	float ___currentNearZ_5;
	// System.Single UnityARCameraNearFar::currentFarZ
	float ___currentFarZ_6;

public:
	inline static int32_t get_offset_of_attachedCamera_4() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t982368306, ___attachedCamera_4)); }
	inline Camera_t4157153871 * get_attachedCamera_4() const { return ___attachedCamera_4; }
	inline Camera_t4157153871 ** get_address_of_attachedCamera_4() { return &___attachedCamera_4; }
	inline void set_attachedCamera_4(Camera_t4157153871 * value)
	{
		___attachedCamera_4 = value;
		Il2CppCodeGenWriteBarrier((&___attachedCamera_4), value);
	}

	inline static int32_t get_offset_of_currentNearZ_5() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t982368306, ___currentNearZ_5)); }
	inline float get_currentNearZ_5() const { return ___currentNearZ_5; }
	inline float* get_address_of_currentNearZ_5() { return &___currentNearZ_5; }
	inline void set_currentNearZ_5(float value)
	{
		___currentNearZ_5 = value;
	}

	inline static int32_t get_offset_of_currentFarZ_6() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t982368306, ___currentFarZ_6)); }
	inline float get_currentFarZ_6() const { return ___currentFarZ_6; }
	inline float* get_address_of_currentFarZ_6() { return &___currentFarZ_6; }
	inline void set_currentFarZ_6(float value)
	{
		___currentFarZ_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARCAMERANEARFAR_T982368306_H
#ifndef UNITYARKITLIGHTMANAGER_T380315540_H
#define UNITYARKITLIGHTMANAGER_T380315540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARKitLightManager
struct  UnityARKitLightManager_t380315540  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Light[] UnityARKitLightManager::lightsInScene
	LightU5BU5D_t3678959411* ___lightsInScene_4;
	// UnityEngine.Rendering.SphericalHarmonicsL2 UnityARKitLightManager::shl
	SphericalHarmonicsL2_t3220866195  ___shl_5;

public:
	inline static int32_t get_offset_of_lightsInScene_4() { return static_cast<int32_t>(offsetof(UnityARKitLightManager_t380315540, ___lightsInScene_4)); }
	inline LightU5BU5D_t3678959411* get_lightsInScene_4() const { return ___lightsInScene_4; }
	inline LightU5BU5D_t3678959411** get_address_of_lightsInScene_4() { return &___lightsInScene_4; }
	inline void set_lightsInScene_4(LightU5BU5D_t3678959411* value)
	{
		___lightsInScene_4 = value;
		Il2CppCodeGenWriteBarrier((&___lightsInScene_4), value);
	}

	inline static int32_t get_offset_of_shl_5() { return static_cast<int32_t>(offsetof(UnityARKitLightManager_t380315540, ___shl_5)); }
	inline SphericalHarmonicsL2_t3220866195  get_shl_5() const { return ___shl_5; }
	inline SphericalHarmonicsL2_t3220866195 * get_address_of_shl_5() { return &___shl_5; }
	inline void set_shl_5(SphericalHarmonicsL2_t3220866195  value)
	{
		___shl_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARKITLIGHTMANAGER_T380315540_H
#ifndef CONNECTTOEDITOR_T595742893_H
#define CONNECTTOEDITOR_T595742893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ConnectToEditor
struct  ConnectToEditor_t595742893  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.XR.iOS.ConnectToEditor::playerConnection
	PlayerConnection_t3081694049 * ___playerConnection_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.ConnectToEditor::m_session
	UnityARSessionNativeInterface_t3929719369 * ___m_session_5;
	// System.Int32 UnityEngine.XR.iOS.ConnectToEditor::editorID
	int32_t ___editorID_6;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.ConnectToEditor::frameBufferTex
	Texture2D_t3840446185 * ___frameBufferTex_7;

public:
	inline static int32_t get_offset_of_playerConnection_4() { return static_cast<int32_t>(offsetof(ConnectToEditor_t595742893, ___playerConnection_4)); }
	inline PlayerConnection_t3081694049 * get_playerConnection_4() const { return ___playerConnection_4; }
	inline PlayerConnection_t3081694049 ** get_address_of_playerConnection_4() { return &___playerConnection_4; }
	inline void set_playerConnection_4(PlayerConnection_t3081694049 * value)
	{
		___playerConnection_4 = value;
		Il2CppCodeGenWriteBarrier((&___playerConnection_4), value);
	}

	inline static int32_t get_offset_of_m_session_5() { return static_cast<int32_t>(offsetof(ConnectToEditor_t595742893, ___m_session_5)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_m_session_5() const { return ___m_session_5; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_m_session_5() { return &___m_session_5; }
	inline void set_m_session_5(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___m_session_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_5), value);
	}

	inline static int32_t get_offset_of_editorID_6() { return static_cast<int32_t>(offsetof(ConnectToEditor_t595742893, ___editorID_6)); }
	inline int32_t get_editorID_6() const { return ___editorID_6; }
	inline int32_t* get_address_of_editorID_6() { return &___editorID_6; }
	inline void set_editorID_6(int32_t value)
	{
		___editorID_6 = value;
	}

	inline static int32_t get_offset_of_frameBufferTex_7() { return static_cast<int32_t>(offsetof(ConnectToEditor_t595742893, ___frameBufferTex_7)); }
	inline Texture2D_t3840446185 * get_frameBufferTex_7() const { return ___frameBufferTex_7; }
	inline Texture2D_t3840446185 ** get_address_of_frameBufferTex_7() { return &___frameBufferTex_7; }
	inline void set_frameBufferTex_7(Texture2D_t3840446185 * value)
	{
		___frameBufferTex_7 = value;
		Il2CppCodeGenWriteBarrier((&___frameBufferTex_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTTOEDITOR_T595742893_H
#ifndef EDITORHITTEST_T1253817588_H
#define EDITORHITTEST_T1253817588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.EditorHitTest
struct  EditorHitTest_t1253817588  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.EditorHitTest::m_HitTransform
	Transform_t3600365921 * ___m_HitTransform_4;
	// System.Single UnityEngine.XR.iOS.EditorHitTest::maxRayDistance
	float ___maxRayDistance_5;
	// UnityEngine.LayerMask UnityEngine.XR.iOS.EditorHitTest::collisionLayerMask
	LayerMask_t3493934918  ___collisionLayerMask_6;

public:
	inline static int32_t get_offset_of_m_HitTransform_4() { return static_cast<int32_t>(offsetof(EditorHitTest_t1253817588, ___m_HitTransform_4)); }
	inline Transform_t3600365921 * get_m_HitTransform_4() const { return ___m_HitTransform_4; }
	inline Transform_t3600365921 ** get_address_of_m_HitTransform_4() { return &___m_HitTransform_4; }
	inline void set_m_HitTransform_4(Transform_t3600365921 * value)
	{
		___m_HitTransform_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_4), value);
	}

	inline static int32_t get_offset_of_maxRayDistance_5() { return static_cast<int32_t>(offsetof(EditorHitTest_t1253817588, ___maxRayDistance_5)); }
	inline float get_maxRayDistance_5() const { return ___maxRayDistance_5; }
	inline float* get_address_of_maxRayDistance_5() { return &___maxRayDistance_5; }
	inline void set_maxRayDistance_5(float value)
	{
		___maxRayDistance_5 = value;
	}

	inline static int32_t get_offset_of_collisionLayerMask_6() { return static_cast<int32_t>(offsetof(EditorHitTest_t1253817588, ___collisionLayerMask_6)); }
	inline LayerMask_t3493934918  get_collisionLayerMask_6() const { return ___collisionLayerMask_6; }
	inline LayerMask_t3493934918 * get_address_of_collisionLayerMask_6() { return &___collisionLayerMask_6; }
	inline void set_collisionLayerMask_6(LayerMask_t3493934918  value)
	{
		___collisionLayerMask_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORHITTEST_T1253817588_H
#ifndef UNITYARAMBIENT_T2710679068_H
#define UNITYARAMBIENT_T2710679068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAmbient
struct  UnityARAmbient_t2710679068  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Light UnityEngine.XR.iOS.UnityARAmbient::l
	Light_t3756812086 * ___l_4;

public:
	inline static int32_t get_offset_of_l_4() { return static_cast<int32_t>(offsetof(UnityARAmbient_t2710679068, ___l_4)); }
	inline Light_t3756812086 * get_l_4() const { return ___l_4; }
	inline Light_t3756812086 ** get_address_of_l_4() { return &___l_4; }
	inline void set_l_4(Light_t3756812086 * value)
	{
		___l_4 = value;
		Il2CppCodeGenWriteBarrier((&___l_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARAMBIENT_T2710679068_H
#ifndef UNITYARHITTESTEXAMPLE_T457226377_H
#define UNITYARHITTESTEXAMPLE_T457226377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestExample
struct  UnityARHitTestExample_t457226377  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.UnityARHitTestExample::m_HitTransform
	Transform_t3600365921 * ___m_HitTransform_4;
	// System.Single UnityEngine.XR.iOS.UnityARHitTestExample::maxRayDistance
	float ___maxRayDistance_5;
	// UnityEngine.LayerMask UnityEngine.XR.iOS.UnityARHitTestExample::collisionLayer
	LayerMask_t3493934918  ___collisionLayer_6;

public:
	inline static int32_t get_offset_of_m_HitTransform_4() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t457226377, ___m_HitTransform_4)); }
	inline Transform_t3600365921 * get_m_HitTransform_4() const { return ___m_HitTransform_4; }
	inline Transform_t3600365921 ** get_address_of_m_HitTransform_4() { return &___m_HitTransform_4; }
	inline void set_m_HitTransform_4(Transform_t3600365921 * value)
	{
		___m_HitTransform_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_4), value);
	}

	inline static int32_t get_offset_of_maxRayDistance_5() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t457226377, ___maxRayDistance_5)); }
	inline float get_maxRayDistance_5() const { return ___maxRayDistance_5; }
	inline float* get_address_of_maxRayDistance_5() { return &___maxRayDistance_5; }
	inline void set_maxRayDistance_5(float value)
	{
		___maxRayDistance_5 = value;
	}

	inline static int32_t get_offset_of_collisionLayer_6() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t457226377, ___collisionLayer_6)); }
	inline LayerMask_t3493934918  get_collisionLayer_6() const { return ___collisionLayer_6; }
	inline LayerMask_t3493934918 * get_address_of_collisionLayer_6() { return &___collisionLayer_6; }
	inline void set_collisionLayer_6(LayerMask_t3493934918  value)
	{
		___collisionLayer_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARHITTESTEXAMPLE_T457226377_H
#ifndef UNITYARKITCONTROL_T1358211756_H
#define UNITYARKITCONTROL_T1358211756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARKitControl
struct  UnityARKitControl_t1358211756  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.XR.iOS.UnityARSessionRunOption[] UnityEngine.XR.iOS.UnityARKitControl::runOptions
	UnityARSessionRunOptionU5BU5D_t4225291891* ___runOptions_4;
	// UnityEngine.XR.iOS.UnityARAlignment[] UnityEngine.XR.iOS.UnityARKitControl::alignmentOptions
	UnityARAlignmentU5BU5D_t3682394155* ___alignmentOptions_5;
	// UnityEngine.XR.iOS.UnityARPlaneDetection[] UnityEngine.XR.iOS.UnityARKitControl::planeOptions
	UnityARPlaneDetectionU5BU5D_t3458580926* ___planeOptions_6;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentOptionIndex
	int32_t ___currentOptionIndex_7;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentAlignmentIndex
	int32_t ___currentAlignmentIndex_8;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentPlaneIndex
	int32_t ___currentPlaneIndex_9;

public:
	inline static int32_t get_offset_of_runOptions_4() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1358211756, ___runOptions_4)); }
	inline UnityARSessionRunOptionU5BU5D_t4225291891* get_runOptions_4() const { return ___runOptions_4; }
	inline UnityARSessionRunOptionU5BU5D_t4225291891** get_address_of_runOptions_4() { return &___runOptions_4; }
	inline void set_runOptions_4(UnityARSessionRunOptionU5BU5D_t4225291891* value)
	{
		___runOptions_4 = value;
		Il2CppCodeGenWriteBarrier((&___runOptions_4), value);
	}

	inline static int32_t get_offset_of_alignmentOptions_5() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1358211756, ___alignmentOptions_5)); }
	inline UnityARAlignmentU5BU5D_t3682394155* get_alignmentOptions_5() const { return ___alignmentOptions_5; }
	inline UnityARAlignmentU5BU5D_t3682394155** get_address_of_alignmentOptions_5() { return &___alignmentOptions_5; }
	inline void set_alignmentOptions_5(UnityARAlignmentU5BU5D_t3682394155* value)
	{
		___alignmentOptions_5 = value;
		Il2CppCodeGenWriteBarrier((&___alignmentOptions_5), value);
	}

	inline static int32_t get_offset_of_planeOptions_6() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1358211756, ___planeOptions_6)); }
	inline UnityARPlaneDetectionU5BU5D_t3458580926* get_planeOptions_6() const { return ___planeOptions_6; }
	inline UnityARPlaneDetectionU5BU5D_t3458580926** get_address_of_planeOptions_6() { return &___planeOptions_6; }
	inline void set_planeOptions_6(UnityARPlaneDetectionU5BU5D_t3458580926* value)
	{
		___planeOptions_6 = value;
		Il2CppCodeGenWriteBarrier((&___planeOptions_6), value);
	}

	inline static int32_t get_offset_of_currentOptionIndex_7() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1358211756, ___currentOptionIndex_7)); }
	inline int32_t get_currentOptionIndex_7() const { return ___currentOptionIndex_7; }
	inline int32_t* get_address_of_currentOptionIndex_7() { return &___currentOptionIndex_7; }
	inline void set_currentOptionIndex_7(int32_t value)
	{
		___currentOptionIndex_7 = value;
	}

	inline static int32_t get_offset_of_currentAlignmentIndex_8() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1358211756, ___currentAlignmentIndex_8)); }
	inline int32_t get_currentAlignmentIndex_8() const { return ___currentAlignmentIndex_8; }
	inline int32_t* get_address_of_currentAlignmentIndex_8() { return &___currentAlignmentIndex_8; }
	inline void set_currentAlignmentIndex_8(int32_t value)
	{
		___currentAlignmentIndex_8 = value;
	}

	inline static int32_t get_offset_of_currentPlaneIndex_9() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1358211756, ___currentPlaneIndex_9)); }
	inline int32_t get_currentPlaneIndex_9() const { return ___currentPlaneIndex_9; }
	inline int32_t* get_address_of_currentPlaneIndex_9() { return &___currentPlaneIndex_9; }
	inline void set_currentPlaneIndex_9(int32_t value)
	{
		___currentPlaneIndex_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARKITCONTROL_T1358211756_H
#ifndef UNITYARUSERANCHORCOMPONENT_T969893952_H
#define UNITYARUSERANCHORCOMPONENT_T969893952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorComponent
struct  UnityARUserAnchorComponent_t969893952  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityEngine.XR.iOS.UnityARUserAnchorComponent::m_AnchorId
	String_t* ___m_AnchorId_4;

public:
	inline static int32_t get_offset_of_m_AnchorId_4() { return static_cast<int32_t>(offsetof(UnityARUserAnchorComponent_t969893952, ___m_AnchorId_4)); }
	inline String_t* get_m_AnchorId_4() const { return ___m_AnchorId_4; }
	inline String_t** get_address_of_m_AnchorId_4() { return &___m_AnchorId_4; }
	inline void set_m_AnchorId_4(String_t* value)
	{
		___m_AnchorId_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnchorId_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORCOMPONENT_T969893952_H
#ifndef UNITYARVIDEO_T1146951207_H
#define UNITYARVIDEO_T1146951207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideo
struct  UnityARVideo_t1146951207  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material UnityEngine.XR.iOS.UnityARVideo::m_ClearMaterial
	Material_t340375123 * ___m_ClearMaterial_4;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.iOS.UnityARVideo::m_VideoCommandBuffer
	CommandBuffer_t2206337031 * ___m_VideoCommandBuffer_5;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureY
	Texture2D_t3840446185 * ____videoTextureY_6;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureCbCr
	Texture2D_t3840446185 * ____videoTextureCbCr_7;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARVideo::_displayTransform
	Matrix4x4_t1817901843  ____displayTransform_8;
	// System.Boolean UnityEngine.XR.iOS.UnityARVideo::bCommandBufferInitialized
	bool ___bCommandBufferInitialized_9;

public:
	inline static int32_t get_offset_of_m_ClearMaterial_4() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ___m_ClearMaterial_4)); }
	inline Material_t340375123 * get_m_ClearMaterial_4() const { return ___m_ClearMaterial_4; }
	inline Material_t340375123 ** get_address_of_m_ClearMaterial_4() { return &___m_ClearMaterial_4; }
	inline void set_m_ClearMaterial_4(Material_t340375123 * value)
	{
		___m_ClearMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClearMaterial_4), value);
	}

	inline static int32_t get_offset_of_m_VideoCommandBuffer_5() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ___m_VideoCommandBuffer_5)); }
	inline CommandBuffer_t2206337031 * get_m_VideoCommandBuffer_5() const { return ___m_VideoCommandBuffer_5; }
	inline CommandBuffer_t2206337031 ** get_address_of_m_VideoCommandBuffer_5() { return &___m_VideoCommandBuffer_5; }
	inline void set_m_VideoCommandBuffer_5(CommandBuffer_t2206337031 * value)
	{
		___m_VideoCommandBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoCommandBuffer_5), value);
	}

	inline static int32_t get_offset_of__videoTextureY_6() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ____videoTextureY_6)); }
	inline Texture2D_t3840446185 * get__videoTextureY_6() const { return ____videoTextureY_6; }
	inline Texture2D_t3840446185 ** get_address_of__videoTextureY_6() { return &____videoTextureY_6; }
	inline void set__videoTextureY_6(Texture2D_t3840446185 * value)
	{
		____videoTextureY_6 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureY_6), value);
	}

	inline static int32_t get_offset_of__videoTextureCbCr_7() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ____videoTextureCbCr_7)); }
	inline Texture2D_t3840446185 * get__videoTextureCbCr_7() const { return ____videoTextureCbCr_7; }
	inline Texture2D_t3840446185 ** get_address_of__videoTextureCbCr_7() { return &____videoTextureCbCr_7; }
	inline void set__videoTextureCbCr_7(Texture2D_t3840446185 * value)
	{
		____videoTextureCbCr_7 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureCbCr_7), value);
	}

	inline static int32_t get_offset_of__displayTransform_8() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ____displayTransform_8)); }
	inline Matrix4x4_t1817901843  get__displayTransform_8() const { return ____displayTransform_8; }
	inline Matrix4x4_t1817901843 * get_address_of__displayTransform_8() { return &____displayTransform_8; }
	inline void set__displayTransform_8(Matrix4x4_t1817901843  value)
	{
		____displayTransform_8 = value;
	}

	inline static int32_t get_offset_of_bCommandBufferInitialized_9() { return static_cast<int32_t>(offsetof(UnityARVideo_t1146951207, ___bCommandBufferInitialized_9)); }
	inline bool get_bCommandBufferInitialized_9() const { return ___bCommandBufferInitialized_9; }
	inline bool* get_address_of_bCommandBufferInitialized_9() { return &___bCommandBufferInitialized_9; }
	inline void set_bCommandBufferInitialized_9(bool value)
	{
		___bCommandBufferInitialized_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARVIDEO_T1146951207_H
#ifndef UNITYREMOTEVIDEO_T705138647_H
#define UNITYREMOTEVIDEO_T705138647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityRemoteVideo
struct  UnityRemoteVideo_t705138647  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.XR.iOS.ConnectToEditor UnityEngine.XR.iOS.UnityRemoteVideo::connectToEditor
	ConnectToEditor_t595742893 * ___connectToEditor_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityRemoteVideo::m_Session
	UnityARSessionNativeInterface_t3929719369 * ___m_Session_5;
	// System.Boolean UnityEngine.XR.iOS.UnityRemoteVideo::bTexturesInitialized
	bool ___bTexturesInitialized_6;
	// System.Int32 UnityEngine.XR.iOS.UnityRemoteVideo::currentFrameIndex
	int32_t ___currentFrameIndex_7;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes
	ByteU5BU5D_t4116647657* ___m_textureYBytes_8;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes
	ByteU5BU5D_t4116647657* ___m_textureUVBytes_9;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes2
	ByteU5BU5D_t4116647657* ___m_textureYBytes2_10;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes2
	ByteU5BU5D_t4116647657* ___m_textureUVBytes2_11;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedYArray
	GCHandle_t3351438187  ___m_pinnedYArray_12;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedUVArray
	GCHandle_t3351438187  ___m_pinnedUVArray_13;

public:
	inline static int32_t get_offset_of_connectToEditor_4() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___connectToEditor_4)); }
	inline ConnectToEditor_t595742893 * get_connectToEditor_4() const { return ___connectToEditor_4; }
	inline ConnectToEditor_t595742893 ** get_address_of_connectToEditor_4() { return &___connectToEditor_4; }
	inline void set_connectToEditor_4(ConnectToEditor_t595742893 * value)
	{
		___connectToEditor_4 = value;
		Il2CppCodeGenWriteBarrier((&___connectToEditor_4), value);
	}

	inline static int32_t get_offset_of_m_Session_5() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_Session_5)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_m_Session_5() const { return ___m_Session_5; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_m_Session_5() { return &___m_Session_5; }
	inline void set_m_Session_5(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___m_Session_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Session_5), value);
	}

	inline static int32_t get_offset_of_bTexturesInitialized_6() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___bTexturesInitialized_6)); }
	inline bool get_bTexturesInitialized_6() const { return ___bTexturesInitialized_6; }
	inline bool* get_address_of_bTexturesInitialized_6() { return &___bTexturesInitialized_6; }
	inline void set_bTexturesInitialized_6(bool value)
	{
		___bTexturesInitialized_6 = value;
	}

	inline static int32_t get_offset_of_currentFrameIndex_7() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___currentFrameIndex_7)); }
	inline int32_t get_currentFrameIndex_7() const { return ___currentFrameIndex_7; }
	inline int32_t* get_address_of_currentFrameIndex_7() { return &___currentFrameIndex_7; }
	inline void set_currentFrameIndex_7(int32_t value)
	{
		___currentFrameIndex_7 = value;
	}

	inline static int32_t get_offset_of_m_textureYBytes_8() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_textureYBytes_8)); }
	inline ByteU5BU5D_t4116647657* get_m_textureYBytes_8() const { return ___m_textureYBytes_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_textureYBytes_8() { return &___m_textureYBytes_8; }
	inline void set_m_textureYBytes_8(ByteU5BU5D_t4116647657* value)
	{
		___m_textureYBytes_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureYBytes_8), value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes_9() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_textureUVBytes_9)); }
	inline ByteU5BU5D_t4116647657* get_m_textureUVBytes_9() const { return ___m_textureUVBytes_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_textureUVBytes_9() { return &___m_textureUVBytes_9; }
	inline void set_m_textureUVBytes_9(ByteU5BU5D_t4116647657* value)
	{
		___m_textureUVBytes_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureUVBytes_9), value);
	}

	inline static int32_t get_offset_of_m_textureYBytes2_10() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_textureYBytes2_10)); }
	inline ByteU5BU5D_t4116647657* get_m_textureYBytes2_10() const { return ___m_textureYBytes2_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_textureYBytes2_10() { return &___m_textureYBytes2_10; }
	inline void set_m_textureYBytes2_10(ByteU5BU5D_t4116647657* value)
	{
		___m_textureYBytes2_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureYBytes2_10), value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes2_11() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_textureUVBytes2_11)); }
	inline ByteU5BU5D_t4116647657* get_m_textureUVBytes2_11() const { return ___m_textureUVBytes2_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_textureUVBytes2_11() { return &___m_textureUVBytes2_11; }
	inline void set_m_textureUVBytes2_11(ByteU5BU5D_t4116647657* value)
	{
		___m_textureUVBytes2_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureUVBytes2_11), value);
	}

	inline static int32_t get_offset_of_m_pinnedYArray_12() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_pinnedYArray_12)); }
	inline GCHandle_t3351438187  get_m_pinnedYArray_12() const { return ___m_pinnedYArray_12; }
	inline GCHandle_t3351438187 * get_address_of_m_pinnedYArray_12() { return &___m_pinnedYArray_12; }
	inline void set_m_pinnedYArray_12(GCHandle_t3351438187  value)
	{
		___m_pinnedYArray_12 = value;
	}

	inline static int32_t get_offset_of_m_pinnedUVArray_13() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t705138647, ___m_pinnedUVArray_13)); }
	inline GCHandle_t3351438187  get_m_pinnedUVArray_13() const { return ___m_pinnedUVArray_13; }
	inline GCHandle_t3351438187 * get_address_of_m_pinnedUVArray_13() { return &___m_pinnedUVArray_13; }
	inline void set_m_pinnedUVArray_13(GCHandle_t3351438187  value)
	{
		___m_pinnedUVArray_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYREMOTEVIDEO_T705138647_H
#ifndef UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#define UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityPointCloudExample
struct  UnityPointCloudExample_t3649008995  : public MonoBehaviour_t3962482529
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_4;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_t1113636619 * ___PointCloudPrefab_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_t2585711361 * ___pointCloudObjects_6;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_t1718750761* ___m_PointCloudData_7;

public:
	inline static int32_t get_offset_of_numPointsToShow_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___numPointsToShow_4)); }
	inline uint32_t get_numPointsToShow_4() const { return ___numPointsToShow_4; }
	inline uint32_t* get_address_of_numPointsToShow_4() { return &___numPointsToShow_4; }
	inline void set_numPointsToShow_4(uint32_t value)
	{
		___numPointsToShow_4 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___PointCloudPrefab_5)); }
	inline GameObject_t1113636619 * get_PointCloudPrefab_5() const { return ___PointCloudPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_PointCloudPrefab_5() { return &___PointCloudPrefab_5; }
	inline void set_PointCloudPrefab_5(GameObject_t1113636619 * value)
	{
		___PointCloudPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudPrefab_5), value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_6() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___pointCloudObjects_6)); }
	inline List_1_t2585711361 * get_pointCloudObjects_6() const { return ___pointCloudObjects_6; }
	inline List_1_t2585711361 ** get_address_of_pointCloudObjects_6() { return &___pointCloudObjects_6; }
	inline void set_pointCloudObjects_6(List_1_t2585711361 * value)
	{
		___pointCloudObjects_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudObjects_6), value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_7() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___m_PointCloudData_7)); }
	inline Vector3U5BU5D_t1718750761* get_m_PointCloudData_7() const { return ___m_PointCloudData_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_PointCloudData_7() { return &___m_PointCloudData_7; }
	inline void set_m_PointCloudData_7(Vector3U5BU5D_t1718750761* value)
	{
		___m_PointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPOINTCLOUDEXAMPLE_T3649008995_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (MapLocation_t2020070547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2500[3] = 
{
	MapLocation_t2020070547::get_offset_of_latitude_0(),
	MapLocation_t2020070547::get_offset_of_longitude_1(),
	MapLocation_t2020070547::get_offset_of_altitude_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (MapLocationSearch_t1466305414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2501[3] = 
{
	MapLocationSearch_t1466305414::get_offset_of_latitude_0(),
	MapLocationSearch_t1466305414::get_offset_of_longitude_1(),
	MapLocationSearch_t1466305414::get_offset_of_radius_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (MapMetadataSettable_t1435536628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2502[3] = 
{
	MapMetadataSettable_t1435536628::get_offset_of_name_0(),
	MapMetadataSettable_t1435536628::get_offset_of_location_1(),
	MapMetadataSettable_t1435536628::get_offset_of_userdata_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { sizeof (MapMetadata_t326242838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2503[1] = 
{
	MapMetadata_t326242838::get_offset_of_created_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { sizeof (MapInfo_t3246710392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2504[2] = 
{
	MapInfo_t3246710392::get_offset_of_placeId_0(),
	MapInfo_t3246710392::get_offset_of_metadata_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (MapList_t467530398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2505[1] = 
{
	MapList_t467530398::get_offset_of_places_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (MapSearch_t3662675896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2506[5] = 
{
	MapSearch_t3662675896::get_offset_of_name_0(),
	MapSearch_t3662675896::get_offset_of_location_1(),
	MapSearch_t3662675896::get_offset_of_newerThan_2(),
	MapSearch_t3662675896::get_offset_of_olderThan_3(),
	MapSearch_t3662675896::get_offset_of_userdataQuery_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (SimCameraPoses_t1111907249)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2507[1] = 
{
	SimCameraPoses_t1111907249::get_offset_of_cameraPoses_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { sizeof (SaveLoadContext_t2727061006), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2508[2] = 
{
	SaveLoadContext_t2727061006::get_offset_of_savedCb_0(),
	SaveLoadContext_t2727061006::get_offset_of_progressCb_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { sizeof (U3COnPoseU3Ec__AnonStorey1_t1901961347), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2509[4] = 
{
	U3COnPoseU3Ec__AnonStorey1_t1901961347::get_offset_of_listeners_0(),
	U3COnPoseU3Ec__AnonStorey1_t1901961347::get_offset_of_outputPoseMat_1(),
	U3COnPoseU3Ec__AnonStorey1_t1901961347::get_offset_of_arkitPoseMat_2(),
	U3COnPoseU3Ec__AnonStorey1_t1901961347::get_offset_of_status_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { sizeof (U3COnPoseInvokeRepeatU3Ec__Iterator0_t1482259050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2510[5] = 
{
	U3COnPoseInvokeRepeatU3Ec__Iterator0_t1482259050::get_offset_of_U3CcurrCameraPoseU3E__1_0(),
	U3COnPoseInvokeRepeatU3Ec__Iterator0_t1482259050::get_offset_of_U24this_1(),
	U3COnPoseInvokeRepeatU3Ec__Iterator0_t1482259050::get_offset_of_U24current_2(),
	U3COnPoseInvokeRepeatU3Ec__Iterator0_t1482259050::get_offset_of_U24disposing_3(),
	U3COnPoseInvokeRepeatU3Ec__Iterator0_t1482259050::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { sizeof (U3COnDatasetUploadU3Ec__AnonStorey2_t306898241), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2511[3] = 
{
	U3COnDatasetUploadU3Ec__AnonStorey2_t306898241::get_offset_of_statusClone_0(),
	U3COnDatasetUploadU3Ec__AnonStorey2_t306898241::get_offset_of_uploadProgressCb_1(),
	U3COnDatasetUploadU3Ec__AnonStorey2_t306898241::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (U3COnGetMetadataU3Ec__AnonStorey3_t4135193145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2512[3] = 
{
	U3COnGetMetadataU3Ec__AnonStorey3_t4135193145::get_offset_of_resultClone_0(),
	U3COnGetMetadataU3Ec__AnonStorey3_t4135193145::get_offset_of_metadataCb_1(),
	U3COnGetMetadataU3Ec__AnonStorey3_t4135193145::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { sizeof (U3COnMapListU3Ec__AnonStorey4_t1897725485), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2513[3] = 
{
	U3COnMapListU3Ec__AnonStorey4_t1897725485::get_offset_of_resultClone_0(),
	U3COnMapListU3Ec__AnonStorey4_t1897725485::get_offset_of_listCb_1(),
	U3COnMapListU3Ec__AnonStorey4_t1897725485::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { sizeof (U3COnMapUploadedU3Ec__AnonStorey5_t1760840464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2514[3] = 
{
	U3COnMapUploadedU3Ec__AnonStorey5_t1760840464::get_offset_of_statusClone_0(),
	U3COnMapUploadedU3Ec__AnonStorey5_t1760840464::get_offset_of_progressCb_1(),
	U3COnMapUploadedU3Ec__AnonStorey5_t1760840464::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { sizeof (U3COnMapSavedU3Ec__AnonStorey6_t446161732), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2515[4] = 
{
	U3COnMapSavedU3Ec__AnonStorey6_t446161732::get_offset_of_resultClone_0(),
	U3COnMapSavedU3Ec__AnonStorey6_t446161732::get_offset_of_contextPtr_1(),
	U3COnMapSavedU3Ec__AnonStorey6_t446161732::get_offset_of_savedCb_2(),
	U3COnMapSavedU3Ec__AnonStorey6_t446161732::get_offset_of_handle_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (U3COnMapLoadedU3Ec__AnonStorey7_t2844660228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2516[3] = 
{
	U3COnMapLoadedU3Ec__AnonStorey7_t2844660228::get_offset_of_statusClone_0(),
	U3COnMapLoadedU3Ec__AnonStorey7_t2844660228::get_offset_of_loadProgressCb_1(),
	U3COnMapLoadedU3Ec__AnonStorey7_t2844660228::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { sizeof (U3COnMapDeletedU3Ec__AnonStorey8_t2781276340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2517[4] = 
{
	U3COnMapDeletedU3Ec__AnonStorey8_t2781276340::get_offset_of_deleted_0(),
	U3COnMapDeletedU3Ec__AnonStorey8_t2781276340::get_offset_of_deletedCb_1(),
	U3COnMapDeletedU3Ec__AnonStorey8_t2781276340::get_offset_of_errorMsg_2(),
	U3COnMapDeletedU3Ec__AnonStorey8_t2781276340::get_offset_of_handle_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { sizeof (MainThreadTaskQueue_t1130532114), -1, sizeof(MainThreadTaskQueue_t1130532114_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2518[2] = 
{
	MainThreadTaskQueue_t1130532114_StaticFields::get_offset_of_sInstance_4(),
	MainThreadTaskQueue_t1130532114::get_offset_of_delegates_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2519 = { sizeof (Delegate_t3188908614), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2520 = { sizeof (PlacenoteCameraManager_t3054005330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2520[2] = 
{
	PlacenoteCameraManager_t3054005330::get_offset_of_cameraChild_4(),
	PlacenoteCameraManager_t3054005330::get_offset_of_cameraParent_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2521 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2522 = { sizeof (MatrixOps_t747228741), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2523 = { sizeof (ConnectionMessageIds_t1387126779), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2524 = { sizeof (SubMessageIds_t1008824323), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2525 = { sizeof (ConnectToEditor_t595742893), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2525[4] = 
{
	ConnectToEditor_t595742893::get_offset_of_playerConnection_4(),
	ConnectToEditor_t595742893::get_offset_of_m_session_5(),
	ConnectToEditor_t595742893::get_offset_of_editorID_6(),
	ConnectToEditor_t595742893::get_offset_of_frameBufferTex_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2526 = { sizeof (EditorHitTest_t1253817588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2526[3] = 
{
	EditorHitTest_t1253817588::get_offset_of_m_HitTransform_4(),
	EditorHitTest_t1253817588::get_offset_of_maxRayDistance_5(),
	EditorHitTest_t1253817588::get_offset_of_collisionLayerMask_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2527 = { sizeof (ObjectSerializationExtension_t1997214439), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2528 = { sizeof (SerializableVector4_t2739337940), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2528[4] = 
{
	SerializableVector4_t2739337940::get_offset_of_x_0(),
	SerializableVector4_t2739337940::get_offset_of_y_1(),
	SerializableVector4_t2739337940::get_offset_of_z_2(),
	SerializableVector4_t2739337940::get_offset_of_w_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2529 = { sizeof (serializableUnityARMatrix4x4_t255097097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2529[4] = 
{
	serializableUnityARMatrix4x4_t255097097::get_offset_of_column0_0(),
	serializableUnityARMatrix4x4_t255097097::get_offset_of_column1_1(),
	serializableUnityARMatrix4x4_t255097097::get_offset_of_column2_2(),
	serializableUnityARMatrix4x4_t255097097::get_offset_of_column3_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2530 = { sizeof (serializableSHC_t226029808), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2530[1] = 
{
	serializableSHC_t226029808::get_offset_of_shcData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2531 = { sizeof (serializableUnityARLightData_t3029229948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2531[5] = 
{
	serializableUnityARLightData_t3029229948::get_offset_of_whichLight_0(),
	serializableUnityARLightData_t3029229948::get_offset_of_lightSHC_1(),
	serializableUnityARLightData_t3029229948::get_offset_of_primaryLightDirAndIntensity_2(),
	serializableUnityARLightData_t3029229948::get_offset_of_ambientIntensity_3(),
	serializableUnityARLightData_t3029229948::get_offset_of_ambientColorTemperature_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2532 = { sizeof (serializableUnityARCamera_t1848993995), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2532[8] = 
{
	serializableUnityARCamera_t1848993995::get_offset_of_worldTransform_0(),
	serializableUnityARCamera_t1848993995::get_offset_of_projectionMatrix_1(),
	serializableUnityARCamera_t1848993995::get_offset_of_trackingState_2(),
	serializableUnityARCamera_t1848993995::get_offset_of_trackingReason_3(),
	serializableUnityARCamera_t1848993995::get_offset_of_videoParams_4(),
	serializableUnityARCamera_t1848993995::get_offset_of_lightData_5(),
	serializableUnityARCamera_t1848993995::get_offset_of_pointCloud_6(),
	serializableUnityARCamera_t1848993995::get_offset_of_displayTransform_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2533 = { sizeof (serializablePlaneGeometry_t3471745378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2533[4] = 
{
	serializablePlaneGeometry_t3471745378::get_offset_of_vertices_0(),
	serializablePlaneGeometry_t3471745378::get_offset_of_texCoords_1(),
	serializablePlaneGeometry_t3471745378::get_offset_of_triIndices_2(),
	serializablePlaneGeometry_t3471745378::get_offset_of_boundaryVertices_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2534 = { sizeof (serializableUnityARPlaneAnchor_t3965207599), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2534[6] = 
{
	serializableUnityARPlaneAnchor_t3965207599::get_offset_of_worldTransform_0(),
	serializableUnityARPlaneAnchor_t3965207599::get_offset_of_center_1(),
	serializableUnityARPlaneAnchor_t3965207599::get_offset_of_extent_2(),
	serializableUnityARPlaneAnchor_t3965207599::get_offset_of_planeAlignment_3(),
	serializableUnityARPlaneAnchor_t3965207599::get_offset_of_planeGeometry_4(),
	serializableUnityARPlaneAnchor_t3965207599::get_offset_of_identifierStr_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2535 = { sizeof (serializableFaceGeometry_t1893768467), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2535[3] = 
{
	serializableFaceGeometry_t1893768467::get_offset_of_vertices_0(),
	serializableFaceGeometry_t1893768467::get_offset_of_texCoords_1(),
	serializableFaceGeometry_t1893768467::get_offset_of_triIndices_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2536 = { sizeof (serializableUnityARFaceAnchor_t1413500457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2536[4] = 
{
	serializableUnityARFaceAnchor_t1413500457::get_offset_of_worldTransform_0(),
	serializableUnityARFaceAnchor_t1413500457::get_offset_of_faceGeometry_1(),
	serializableUnityARFaceAnchor_t1413500457::get_offset_of_arBlendShapes_2(),
	serializableUnityARFaceAnchor_t1413500457::get_offset_of_identifierStr_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2537 = { sizeof (serializablePointCloud_t4241265545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2537[1] = 
{
	serializablePointCloud_t4241265545::get_offset_of_pointCloudData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2538 = { sizeof (serializableARSessionConfiguration_t30565192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2538[5] = 
{
	serializableARSessionConfiguration_t30565192::get_offset_of_alignment_0(),
	serializableARSessionConfiguration_t30565192::get_offset_of_planeDetection_1(),
	serializableARSessionConfiguration_t30565192::get_offset_of_getPointCloudData_2(),
	serializableARSessionConfiguration_t30565192::get_offset_of_enableLightEstimation_3(),
	serializableARSessionConfiguration_t30565192::get_offset_of_enableAutoFocus_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2539 = { sizeof (serializableARKitInit_t3839227232), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2539[2] = 
{
	serializableARKitInit_t3839227232::get_offset_of_config_0(),
	serializableARKitInit_t3839227232::get_offset_of_runOption_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2540 = { sizeof (serializableFromEditorMessage_t2731251371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2540[2] = 
{
	serializableFromEditorMessage_t2731251371::get_offset_of_subMessageId_0(),
	serializableFromEditorMessage_t2731251371::get_offset_of_arkitConfigMsg_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2541 = { sizeof (UnityRemoteVideo_t705138647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2541[10] = 
{
	UnityRemoteVideo_t705138647::get_offset_of_connectToEditor_4(),
	UnityRemoteVideo_t705138647::get_offset_of_m_Session_5(),
	UnityRemoteVideo_t705138647::get_offset_of_bTexturesInitialized_6(),
	UnityRemoteVideo_t705138647::get_offset_of_currentFrameIndex_7(),
	UnityRemoteVideo_t705138647::get_offset_of_m_textureYBytes_8(),
	UnityRemoteVideo_t705138647::get_offset_of_m_textureUVBytes_9(),
	UnityRemoteVideo_t705138647::get_offset_of_m_textureYBytes2_10(),
	UnityRemoteVideo_t705138647::get_offset_of_m_textureUVBytes2_11(),
	UnityRemoteVideo_t705138647::get_offset_of_m_pinnedYArray_12(),
	UnityRemoteVideo_t705138647::get_offset_of_m_pinnedUVArray_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2542 = { sizeof (ARReferenceImage_t2463148469), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2542[3] = 
{
	ARReferenceImage_t2463148469::get_offset_of_imageName_4(),
	ARReferenceImage_t2463148469::get_offset_of_imageTexture_5(),
	ARReferenceImage_t2463148469::get_offset_of_physicalSize_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2543 = { sizeof (ARReferenceImagesSet_t4271437859), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2543[2] = 
{
	ARReferenceImagesSet_t4271437859::get_offset_of_resourceGroupName_4(),
	ARReferenceImagesSet_t4271437859::get_offset_of_referenceImages_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2544 = { sizeof (AR3DOFCameraManager_t1160001149), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2544[3] = 
{
	AR3DOFCameraManager_t1160001149::get_offset_of_m_camera_4(),
	AR3DOFCameraManager_t1160001149::get_offset_of_m_session_5(),
	AR3DOFCameraManager_t1160001149::get_offset_of_savedClearMaterial_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2545 = { sizeof (ARPlaneAnchorGameObject_t1947719815), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2545[2] = 
{
	ARPlaneAnchorGameObject_t1947719815::get_offset_of_gameObject_0(),
	ARPlaneAnchorGameObject_t1947719815::get_offset_of_planeAnchor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2546 = { sizeof (DontDestroyOnLoad_t1456007215), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2547 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2547[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2548 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2548[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2549 = { sizeof (PointCloudParticleExample_t182386800), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2549[7] = 
{
	PointCloudParticleExample_t182386800::get_offset_of_pointCloudParticlePrefab_4(),
	PointCloudParticleExample_t182386800::get_offset_of_maxPointsToShow_5(),
	PointCloudParticleExample_t182386800::get_offset_of_particleSize_6(),
	PointCloudParticleExample_t182386800::get_offset_of_m_PointCloudData_7(),
	PointCloudParticleExample_t182386800::get_offset_of_frameUpdated_8(),
	PointCloudParticleExample_t182386800::get_offset_of_currentPS_9(),
	PointCloudParticleExample_t182386800::get_offset_of_particles_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2550 = { sizeof (UnityARAmbient_t2710679068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2550[1] = 
{
	UnityARAmbient_t2710679068::get_offset_of_l_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2551 = { sizeof (UnityARCameraManager_t4002280589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2551[10] = 
{
	UnityARCameraManager_t4002280589::get_offset_of_m_camera_4(),
	UnityARCameraManager_t4002280589::get_offset_of_m_session_5(),
	UnityARCameraManager_t4002280589::get_offset_of_savedClearMaterial_6(),
	UnityARCameraManager_t4002280589::get_offset_of_startAlignment_7(),
	UnityARCameraManager_t4002280589::get_offset_of_planeDetection_8(),
	UnityARCameraManager_t4002280589::get_offset_of_detectionImages_9(),
	UnityARCameraManager_t4002280589::get_offset_of_getPointCloud_10(),
	UnityARCameraManager_t4002280589::get_offset_of_enableLightEstimation_11(),
	UnityARCameraManager_t4002280589::get_offset_of_enableAutoFocus_12(),
	UnityARCameraManager_t4002280589::get_offset_of_sessionStarted_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2552 = { sizeof (UnityARCameraNearFar_t982368306), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2552[3] = 
{
	UnityARCameraNearFar_t982368306::get_offset_of_attachedCamera_4(),
	UnityARCameraNearFar_t982368306::get_offset_of_currentNearZ_5(),
	UnityARCameraNearFar_t982368306::get_offset_of_currentFarZ_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2553 = { sizeof (UnityARHitTestExample_t457226377), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2553[3] = 
{
	UnityARHitTestExample_t457226377::get_offset_of_m_HitTransform_4(),
	UnityARHitTestExample_t457226377::get_offset_of_maxRayDistance_5(),
	UnityARHitTestExample_t457226377::get_offset_of_collisionLayer_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2554 = { sizeof (UnityARKitControl_t1358211756), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2554[6] = 
{
	UnityARKitControl_t1358211756::get_offset_of_runOptions_4(),
	UnityARKitControl_t1358211756::get_offset_of_alignmentOptions_5(),
	UnityARKitControl_t1358211756::get_offset_of_planeOptions_6(),
	UnityARKitControl_t1358211756::get_offset_of_currentOptionIndex_7(),
	UnityARKitControl_t1358211756::get_offset_of_currentAlignmentIndex_8(),
	UnityARKitControl_t1358211756::get_offset_of_currentPlaneIndex_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2555 = { sizeof (UnityARKitLightManager_t380315540), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2555[2] = 
{
	UnityARKitLightManager_t380315540::get_offset_of_lightsInScene_4(),
	UnityARKitLightManager_t380315540::get_offset_of_shl_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2556 = { sizeof (UnityARMatrixOps_t2790111267), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2557 = { sizeof (UnityARUserAnchorComponent_t969893952), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2557[1] = 
{
	UnityARUserAnchorComponent_t969893952::get_offset_of_m_AnchorId_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2558 = { sizeof (UnityARVideo_t1146951207), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2558[6] = 
{
	UnityARVideo_t1146951207::get_offset_of_m_ClearMaterial_4(),
	UnityARVideo_t1146951207::get_offset_of_m_VideoCommandBuffer_5(),
	UnityARVideo_t1146951207::get_offset_of__videoTextureY_6(),
	UnityARVideo_t1146951207::get_offset_of__videoTextureCbCr_7(),
	UnityARVideo_t1146951207::get_offset_of__displayTransform_8(),
	UnityARVideo_t1146951207::get_offset_of_bCommandBufferInitialized_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2559 = { sizeof (UnityPointCloudExample_t3649008995), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2559[4] = 
{
	UnityPointCloudExample_t3649008995::get_offset_of_numPointsToShow_4(),
	UnityPointCloudExample_t3649008995::get_offset_of_PointCloudPrefab_5(),
	UnityPointCloudExample_t3649008995::get_offset_of_pointCloudObjects_6(),
	UnityPointCloudExample_t3649008995::get_offset_of_m_PointCloudData_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2560 = { sizeof (ARAnchor_t362826948)+ sizeof (RuntimeObject), sizeof(ARAnchor_t362826948_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2560[2] = 
{
	ARAnchor_t362826948::get_offset_of_identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARAnchor_t362826948::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2561 = { sizeof (ARCamera_t2831687281)+ sizeof (RuntimeObject), sizeof(ARCamera_t2831687281 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2561[7] = 
{
	ARCamera_t2831687281::get_offset_of_worldTransform_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARCamera_t2831687281::get_offset_of_eulerAngles_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARCamera_t2831687281::get_offset_of_trackingQuality_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARCamera_t2831687281::get_offset_of_intrinsics_row1_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARCamera_t2831687281::get_offset_of_intrinsics_row2_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARCamera_t2831687281::get_offset_of_intrinsics_row3_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARCamera_t2831687281::get_offset_of_imageResolution_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2562 = { sizeof (ARErrorCode_t1180871917)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2562[5] = 
{
	ARErrorCode_t1180871917::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2563 = { sizeof (ARBlendShapeLocation_t2653069299), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2563[51] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2564 = { sizeof (UnityARFaceGeometry_t4178775532)+ sizeof (RuntimeObject), sizeof(UnityARFaceGeometry_t4178775532 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2564[6] = 
{
	UnityARFaceGeometry_t4178775532::get_offset_of_vertexCount_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARFaceGeometry_t4178775532::get_offset_of_vertices_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARFaceGeometry_t4178775532::get_offset_of_textureCoordinateCount_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARFaceGeometry_t4178775532::get_offset_of_textureCoordinates_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARFaceGeometry_t4178775532::get_offset_of_triangleCount_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARFaceGeometry_t4178775532::get_offset_of_triangleIndices_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2565 = { sizeof (UnityARFaceAnchorData_t2028622935)+ sizeof (RuntimeObject), sizeof(UnityARFaceAnchorData_t2028622935 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2565[4] = 
{
	UnityARFaceAnchorData_t2028622935::get_offset_of_ptrIdentifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARFaceAnchorData_t2028622935::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARFaceAnchorData_t2028622935::get_offset_of_faceGeometry_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARFaceAnchorData_t2028622935::get_offset_of_blendShapes_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2566 = { sizeof (ARFaceGeometry_t5139606), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2566[1] = 
{
	ARFaceGeometry_t5139606::get_offset_of_uFaceGeometry_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2567 = { sizeof (ARFaceAnchor_t1844206636), -1, sizeof(ARFaceAnchor_t1844206636_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2567[3] = 
{
	ARFaceAnchor_t1844206636::get_offset_of_faceAnchorData_0(),
	ARFaceAnchor_t1844206636_StaticFields::get_offset_of_blendshapesDictionary_1(),
	ARFaceAnchor_t1844206636_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2568 = { sizeof (DictionaryVisitorHandler_t414487210), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2569 = { sizeof (ARFrame_t4068331349)+ sizeof (RuntimeObject), sizeof(ARFrame_t4068331349 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2569[4] = 
{
	ARFrame_t4068331349::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARFrame_t4068331349::get_offset_of_capturedImage_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARFrame_t4068331349::get_offset_of_camera_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARFrame_t4068331349::get_offset_of_lightEstimate_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2570 = { sizeof (ARHitTestResult_t1279023930)+ sizeof (RuntimeObject), sizeof(ARHitTestResult_t1279023930_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2570[6] = 
{
	ARHitTestResult_t1279023930::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARHitTestResult_t1279023930::get_offset_of_distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARHitTestResult_t1279023930::get_offset_of_localTransform_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARHitTestResult_t1279023930::get_offset_of_worldTransform_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARHitTestResult_t1279023930::get_offset_of_anchorIdentifier_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARHitTestResult_t1279023930::get_offset_of_isValid_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2571 = { sizeof (ARHitTestResultType_t475323638)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2571[7] = 
{
	ARHitTestResultType_t475323638::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2572 = { sizeof (UnityARImageAnchorData_t4182571716)+ sizeof (RuntimeObject), sizeof(UnityARImageAnchorData_t4182571716 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2572[4] = 
{
	UnityARImageAnchorData_t4182571716::get_offset_of_ptrIdentifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARImageAnchorData_t4182571716::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARImageAnchorData_t4182571716::get_offset_of_referenceImageNamePtr_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARImageAnchorData_t4182571716::get_offset_of_referenceImagePhysicalSize_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2573 = { sizeof (ARImageAnchor_t3012563273), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2573[1] = 
{
	ARImageAnchor_t3012563273::get_offset_of_imageAnchorData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2574 = { sizeof (ARLightEstimate_t644539166)+ sizeof (RuntimeObject), sizeof(ARLightEstimate_t644539166 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2574[1] = 
{
	ARLightEstimate_t644539166::get_offset_of_ambientIntensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2575 = { sizeof (UnityARLightEstimate_t1498306117)+ sizeof (RuntimeObject), sizeof(UnityARLightEstimate_t1498306117 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2575[2] = 
{
	UnityARLightEstimate_t1498306117::get_offset_of_ambientIntensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARLightEstimate_t1498306117::get_offset_of_ambientColorTemperature_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2576 = { sizeof (MarshalDirectionalLightEstimate_t3803901471)+ sizeof (RuntimeObject), sizeof(MarshalDirectionalLightEstimate_t3803901471 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2576[2] = 
{
	MarshalDirectionalLightEstimate_t3803901471::get_offset_of_primaryDirAndIntensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MarshalDirectionalLightEstimate_t3803901471::get_offset_of_sphericalHarmonicCoefficientsPtr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2577 = { sizeof (UnityARDirectionalLightEstimate_t2924556994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2577[3] = 
{
	UnityARDirectionalLightEstimate_t2924556994::get_offset_of_primaryLightDirection_0(),
	UnityARDirectionalLightEstimate_t2924556994::get_offset_of_primaryLightIntensity_1(),
	UnityARDirectionalLightEstimate_t2924556994::get_offset_of_sphericalHarmonicsCoefficients_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2578 = { sizeof (LightDataType_t2323651587)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2578[3] = 
{
	LightDataType_t2323651587::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2579 = { sizeof (UnityMarshalLightData_t1623228070)+ sizeof (RuntimeObject), sizeof(UnityMarshalLightData_t1623228070 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2579[3] = 
{
	UnityMarshalLightData_t1623228070::get_offset_of_arLightingType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityMarshalLightData_t1623228070::get_offset_of_arLightEstimate_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityMarshalLightData_t1623228070::get_offset_of_arDirectonalLightEstimate_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2580 = { sizeof (UnityARLightData_t2160616730)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2580[3] = 
{
	UnityARLightData_t2160616730::get_offset_of_arLightingType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARLightData_t2160616730::get_offset_of_arLightEstimate_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARLightData_t2160616730::get_offset_of_arDirectonalLightEstimate_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2581 = { sizeof (UnityARPlaneGeometry_t1646881137)+ sizeof (RuntimeObject), sizeof(UnityARPlaneGeometry_t1646881137 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2581[8] = 
{
	UnityARPlaneGeometry_t1646881137::get_offset_of_vertexCount_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARPlaneGeometry_t1646881137::get_offset_of_vertices_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARPlaneGeometry_t1646881137::get_offset_of_textureCoordinateCount_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARPlaneGeometry_t1646881137::get_offset_of_textureCoordinates_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARPlaneGeometry_t1646881137::get_offset_of_triangleCount_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARPlaneGeometry_t1646881137::get_offset_of_triangleIndices_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARPlaneGeometry_t1646881137::get_offset_of_boundaryVertexCount_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARPlaneGeometry_t1646881137::get_offset_of_boundaryVertices_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2582 = { sizeof (UnityARAnchorData_t1157236668)+ sizeof (RuntimeObject), sizeof(UnityARAnchorData_t1157236668 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2582[6] = 
{
	UnityARAnchorData_t1157236668::get_offset_of_ptrIdentifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t1157236668::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t1157236668::get_offset_of_alignment_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t1157236668::get_offset_of_center_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t1157236668::get_offset_of_extent_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t1157236668::get_offset_of_planeGeometry_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2583 = { sizeof (ARPlaneGeometry_t1169415986), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2583[1] = 
{
	ARPlaneGeometry_t1169415986::get_offset_of_uPlaneGeometry_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2584 = { sizeof (ARPlaneAnchor_t2049372221), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2584[1] = 
{
	ARPlaneAnchor_t2049372221::get_offset_of_planeAnchorData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2585 = { sizeof (ARPlaneAnchorAlignment_t2311256121)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2585[3] = 
{
	ARPlaneAnchorAlignment_t2311256121::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2586 = { sizeof (ARPoint_t499615819)+ sizeof (RuntimeObject), sizeof(ARPoint_t499615819 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2586[2] = 
{
	ARPoint_t499615819::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARPoint_t499615819::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2587 = { sizeof (ARRect_t1366620727)+ sizeof (RuntimeObject), sizeof(ARRect_t1366620727 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2587[2] = 
{
	ARRect_t1366620727::get_offset_of_origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARRect_t1366620727::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2588 = { sizeof (ARSize_t208719028)+ sizeof (RuntimeObject), sizeof(ARSize_t208719028 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2588[2] = 
{
	ARSize_t208719028::get_offset_of_width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARSize_t208719028::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2589 = { sizeof (ARTextureHandles_t852411561)+ sizeof (RuntimeObject), sizeof(ARTextureHandles_t852411561 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2589[2] = 
{
	ARTextureHandles_t852411561::get_offset_of_textureY_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARTextureHandles_t852411561::get_offset_of_textureCbCr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2590 = { sizeof (ARTrackingQuality_t1229573376)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2590[5] = 
{
	ARTrackingQuality_t1229573376::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2591 = { sizeof (ARTrackingState_t3182235352)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2591[4] = 
{
	ARTrackingState_t3182235352::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2592 = { sizeof (ARTrackingStateReason_t2348933773)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2592[6] = 
{
	ARTrackingStateReason_t2348933773::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2593 = { sizeof (ARUserAnchor_t1406831531)+ sizeof (RuntimeObject), sizeof(ARUserAnchor_t1406831531_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2593[2] = 
{
	ARUserAnchor_t1406831531::get_offset_of_identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARUserAnchor_t1406831531::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2594 = { sizeof (UnityARVideoFormat_t1944454781)+ sizeof (RuntimeObject), sizeof(UnityARVideoFormat_t1944454781 ), sizeof(UnityARVideoFormat_t1944454781_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2594[6] = 
{
	UnityARVideoFormat_t1944454781::get_offset_of_videoFormatPtr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARVideoFormat_t1944454781::get_offset_of_imageResolutionWidth_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARVideoFormat_t1944454781::get_offset_of_imageResolutionHeight_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARVideoFormat_t1944454781::get_offset_of_framesPerSecond_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARVideoFormat_t1944454781_StaticFields::get_offset_of_videoFormatsList_4(),
	UnityARVideoFormat_t1944454781_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2595 = { sizeof (VideoFormatEnumerator_t3131638505), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2596 = { sizeof (UnityARMatrix4x4_t4073345847)+ sizeof (RuntimeObject), sizeof(UnityARMatrix4x4_t4073345847 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2596[4] = 
{
	UnityARMatrix4x4_t4073345847::get_offset_of_column0_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARMatrix4x4_t4073345847::get_offset_of_column1_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARMatrix4x4_t4073345847::get_offset_of_column2_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARMatrix4x4_t4073345847::get_offset_of_column3_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2597 = { sizeof (UnityVideoParams_t4155354995)+ sizeof (RuntimeObject), sizeof(UnityVideoParams_t4155354995 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2597[5] = 
{
	UnityVideoParams_t4155354995::get_offset_of_yWidth_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t4155354995::get_offset_of_yHeight_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t4155354995::get_offset_of_screenOrientation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t4155354995::get_offset_of_texCoordScale_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t4155354995::get_offset_of_cvPixelBufferPtr_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2598 = { sizeof (internal_UnityARCamera_t3920739388)+ sizeof (RuntimeObject), sizeof(internal_UnityARCamera_t3920739388 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2598[9] = 
{
	internal_UnityARCamera_t3920739388::get_offset_of_worldTransform_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t3920739388::get_offset_of_projectionMatrix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t3920739388::get_offset_of_trackingState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t3920739388::get_offset_of_trackingReason_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t3920739388::get_offset_of_videoParams_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t3920739388::get_offset_of_lightData_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t3920739388::get_offset_of_displayTransform_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t3920739388::get_offset_of_getPointCloudData_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t3920739388::get_offset_of_getLightEstimation_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2599 = { sizeof (UnityARCamera_t2069150450)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2599[8] = 
{
	UnityARCamera_t2069150450::get_offset_of_worldTransform_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t2069150450::get_offset_of_projectionMatrix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t2069150450::get_offset_of_trackingState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t2069150450::get_offset_of_trackingReason_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t2069150450::get_offset_of_videoParams_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t2069150450::get_offset_of_lightData_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t2069150450::get_offset_of_displayTransform_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t2069150450::get_offset_of_pointCloudData_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

Helpers:

Canvas Spawn Buttons 
    UI which has buttons to instantiate each of the prefabs

Camera Lasers 
    Detect screen taps and fire a "laser" from the camera, which is an object with a line renderer and a
    raycast script to detect collisions and give damage to any Damage Receiver.
    Includes a Crosshair and info text which will read DESTRUCTIBLE when user hovers over an object with
    DamageReceiver script.

Dog Group: 
    Spawns some "dogs" (an animal-esque ship) with a trail renderer (for easy location in the scene) which
    start at the Main Camera and fan out, encouraging the user to look and walk throughout the room to 
    destroy them.

Flying Onion:
    Spawns a single flying ship which has three states:
        1 - Moves in a pre-determined cross pattern starting from the main camera
        2 - Moves to the highest scored point cloud cluster, using OnionLocationHelper, which leverages 
            PlaceNote's FeaturesVisualizer.
        3 - Moves to the nearest Plane detected by Placenote

Six Sided Dish
    Spawns a dish above a random PlaceNote.FeaturesVisaulizer plane in the scene. Has six sides and must be
    walked around to destroy each of the sides, allowing PlaceNote to generate a dense point cloud from
    multiple angles.

Item Popup Info Group:
    When active, can label objects in the scene with UI to let the player know what to do. Labels pop up When
    the camera hovers over the object.
    NOTE: Requires Crosshair, which is included in Camera Lasers, to be active.

Draw Circle:
    Asks the user to draw a "circle" (though it could be anything) and tracks the PointCloud changes from 
    FeaturesVisualizer until enough green points are mapped. Distance is also accounted for, and the average
    point distance must be above a threshhold to complete the circle drawing session. After one session the
    user is asked to move a minimum distance away and begin another session, which encourages walking through-
    out the space they're in and mapping from multiple angles.


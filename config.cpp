class CfgPatches {
    class FernandimTeste {
        units[] = {"barraco_01","barraco_02"}; // Add "barraco_02" to the list of units
        weapons[] = {};
        requiredAddons[] = {};
        fileName = "addons\favela_props.pbo";
    };
};

class CfgFactionClasses {
    class Empty { // Define the custom faction class
        displayName = "Props Favela";
        author = "Fernandim";
        //icon = "Directory to faction Icon"; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
        priority = 2;
        side = 7; // Empty
    };
};

class CfgVehicleClasses {
    class Objects {
        displayName = "Objects"; // Default vehicle class for your objects
    };
    
    class Barracos { // Define the custom unit class
        displayName = "Barracos"; // Rename to what you want the sub-group of the faction will be.
    };
};

class CfgVehicles {
    class All {};
    class Static: All {};
    class Building: Static{};
    class NonStrategic: Building {};
    class TargetTraining: NonStrategic {};
    class TargetGrenade: TargetTraining {};

    class cubo: TargetGrenade {
        scope = 2; // 2 means it's available in the editor
        displayName = "barraco_01";
        model = "favela_props\barraco_01.p3d"; // Path to your model
        //hiddenSelections[] = {"cubo"}; // Replace with your texture selection name
        faction = "Empty"; // Assign it to the custom faction "Empty"
        vehicleClass = "Barracos"; // Assign it to the custom unit class "Barracos"
        armor = 20000;
    };

    class barraco_02: cubo { // Define the new vehicle class barraco_02 based on cubo
        displayName = "barraco_02";
        model = "favela_props\barraco_02.p3d"; // Path to your new model
    };

    class barraco_03: cubo { // Define the new vehicle class barraco_03 based on cubo
    displayName = "barraco_03";
    model = "favela_props\barraco_03.p3d"; // Path to your new model
    };

    class barraco_3: cubo { // Define the new vehicle class barraco_3 based on cubo
    displayName = "barraco_3";
    model = "favela_props\barraco_3.p3d"; // Path to your new model
    };

    class barraco_04: cubo { // Define the new vehicle class barraco_04 based on cubo
    displayName = "barraco_04";
    model = "favela_props\barraco_04.p3d"; // Path to your new model
    };

    class barraco_4: cubo { // Define the new vehicle class barraco_4 based on cubo
    displayName = "barraco_4";
    model = "favela_props\barraco_4.p3d"; // Path to your new model
    };

    class barraco_05: cubo { // Define the new vehicle class barraco_05 based on cubo
    displayName = "barraco_05";
    model = "favela_props\barraco_05.p3d"; // Path to your new model
    };

    class barraco_5: cubo { // Define the new vehicle class barraco_5 based on cubo
    displayName = "barraco_5";
    model = "favela_props\barraco_5.p3d"; // Path to your new model
    };

    class barraco_06: cubo { // Define the new vehicle class barraco_06 based on cubo
    displayName = "barraco_06";
    model = "favela_props\barraco_06.p3d"; // Path to your new model
    };

    class barraco_6: cubo { // Define the new vehicle class barraco_6 based on cubo
    displayName = "barraco_6";
    model = "favela_props\barraco_6.p3d"; // Path to your new model
    };

    class barraco_11: cubo { // Define the new vehicle class barraco_11 based on cubo
    displayName = "barraco_11";
    model = "favela_props\barraco_11.p3d"; // Path to your new model
    };

    class barraco_12: cubo { // Define the new vehicle class barraco_12 based on cubo
    displayName = "barraco_12";
    model = "favela_props\barraco_12.p3d"; // Path to your new model
    };

    class barraco_13: cubo { // Define the new vehicle class barraco_13 based on cubo
    displayName = "barraco_13";
    model = "favela_props\barraco_13.p3d"; // Path to your new model
    };

    class barraco_14: cubo { // Define the new vehicle class barraco_14 based on cubo
    displayName = "barraco_14";
    model = "favela_props\barraco_14.p3d"; // Path to your new model
    };

    class barraco_15: cubo { // Define the new vehicle class barraco_15 based on cubo
    displayName = "barraco_15";
    model = "favela_props\barraco_15.p3d"; // Path to your new model
    };

    class barraco_17: cubo { // Define the new vehicle class barraco_17 based on cubo
    displayName = "barraco_17";
    model = "favela_props\barraco_17.p3d"; // Path to your new model
    };
};

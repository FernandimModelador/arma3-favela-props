class CfgPatches {
    class FernandimTeste {
        units[] = {"barraco_01","barraco_02"}; // Add "barraco_02" to the list of units
        weapons[] = {};
        requiredAddons[] = {};
        fileName = "addons\favela_props.pbo";
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

class CfgEditorCategories
{
    class FavelaProps
    {
        displayName = "Favela Props";
    };
};

class CfgEditorSubcategories
{
    class Barracos // Category class, you point to it in editorSubcategory property
    {
        displayName = "Barracos"; // Name visible in the list
    };
        class ExtrasFavela // Category class, you point to it in editorSubcategory property
    {
        displayName = "Props da Favela"; // Name visible in the list
    };
        class RuasFavela // Category class, you point to it in editorSubcategory property
    {
        displayName = "Ruas"; // Name visible in the list
    };
        class GrafitesFavelas // Category class, you point to it in editorSubcategory property
    {
        displayName = "Grafites"; // Name visible in the list
    };
};


class CfgVehicles {
    class All {};
    class Static: All {};
    class Building: Static{};
    class House:Building{};

    class cubo: House {
        scope = 2; // 2 means it's available in the editor
        displayName = "barraco_01";
        model = "favela_props\barraco_01.p3d"; // Path to your model
        //hiddenSelections[] = {"cubo"}; // Replace with your texture selection name
        faction = "Empty"; // Assign it to the custom faction "Empty"
        vehicleClass = "Barracos"; // Assign it to the custom unit class "Barracos"
        armor = 20000;
        editorCategory = "FavelaProps";
        editorSubcategory = "Barracos";
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

    class barraco_18: cubo { // Define the new vehicle class barraco_17 based on cubo
    displayName = "barraco_18";
    model = "favela_props\barraco_18.p3d"; // Path to your new model
    };

    class barraco_19: cubo { // Define the new vehicle class barraco_17 based on cubo
    displayName = "barraco_19";
    model = "favela_props\barraco_19.p3d"; // Path to your new model
    };

    class barraco_20: cubo { // Define the new vehicle class barraco_17 based on cubo
    displayName = "barraco_20";
    model = "favela_props\barraco_20.p3d"; // Path to your new model
    };

    class barraco_21: cubo { // Define the new vehicle class barraco_17 based on cubo
    displayName = "barraco_21";
    model = "favela_props\barraco_21.p3d"; // Path to your new model
    };

    class barraco_22: cubo { // Define the new vehicle class barraco_17 based on cubo
    displayName = "barraco_22";
    model = "favela_props\barraco_22.p3d"; // Path to your new model
    };


//Casas França favela
    class casa1: cubo { // Define the new vehicle class barraco_17 based on cubo
    displayName = "casa1";
    model = "favela_props\casa1.p3d"; // Path to your new model
    };


//GN Modelagens convertidas
    class GN_barraco01: cubo { // Define the new vehicle class barraco_17 based on cubo
    displayName = "GN_barraco01";
    model = "favela_props\GN_barraco01.p3d"; // Path to your new model
    };

    class GN_barraco02: cubo { // Define the new vehicle class barraco_17 based on cubo
    displayName = "GN_barraco02";
    model = "favela_props\GN_barraco02.p3d"; // Path to your new model
    };

//GN Modelagens Convertidas termino
    class escada1: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "escada1";
    model = "favela_props\escada1.p3d"; // Path to your new model
    editorSubcategory = "ExtrasFavela"
    };
    class escada2: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "escada2";
    model = "favela_props\escada2.p3d"; // Path to your new model
    editorSubcategory = "ExtrasFavela";
    };
    class escada3: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "escada3";
    model = "favela_props\escada3.p3d"; // Path to your new model
    editorSubcategory = "ExtrasFavela";
    };
    class escada4: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "escada4";
    model = "favela_props\escada4.p3d"; // Path to your new model
    editorSubcategory = "ExtrasFavela";
    };
    class escada5: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "escada5";
    model = "favela_props\escada5.p3d"; // Path to your new model
    editorSubcategory = "ExtrasFavela";
    };
    class escada6: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "escada6";
    model = "favela_props\escada6.p3d"; // Path to your new model
    editorSubcategory = "ExtrasFavela";
    };
    class escada7: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "escada7";
    model = "favela_props\escada7.p3d"; // Path to your new model
    editorSubcategory = "ExtrasFavela";
    };

     class caixadagua: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "caixadagua";
    model = "favela_props\caixadagua.p3d"; // Path to your new model
    editorSubcategory = "ExtrasFavela";
    };

     class telhado: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "telhado";
    model = "favela_props\telhado.p3d"; // Path to your new model
    editorSubcategory = "ExtrasFavela";
    };

     class orelhao: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "orelhao";
    model = "favela_props\orelhao.p3d"; // Path to your new model
    editorSubcategory = "ExtrasFavela";
    };

    class calcada: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "calcada";
    model = "favela_props\calcada.p3d"; // Path to your new model
    editorSubcategory = "RuasFavela";
    };

    class curva: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "curva";
    model = "favela_props\curva.p3d"; // Path to your new model
    editorSubcategory = "RuasFavela";
    };

    class morro: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "morro";
    model = "favela_props\morro.p3d"; // Path to your new model
    editorSubcategory = "RuasFavela";
    };

    class rampa: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "rampa";
    model = "favela_props\rampa.p3d"; // Path to your new model
    editorSubcategory = "RuasFavela";
    };

    class ruareta: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "Rua Reta";
    model = "favela_props\ruareta.p3d"; // Path to your new model
    editorSubcategory = "RuasFavela";
    };

    class lombada: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "lombada";
    model = "favela_props\lombada.p3d"; // Path to your new model
    editorSubcategory = "RuasFavela";
    };

    class grafite01: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite01";
    model = "favela_props\grafite01.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite02: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite02";
    model = "favela_props\grafite02.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite03: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite03";
    model = "favela_props\grafite03.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite04: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite04";
    model = "favela_props\grafite04.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite05: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite05";
    model = "favela_props\grafite05.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite07: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite07";
    model = "favela_props\grafite07.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite08: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite08";
    model = "favela_props\grafite08.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite09: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite09";
    model = "favela_props\grafite09.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite10: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite10";
    model = "favela_props\grafite10.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite11: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite11";
    model = "favela_props\grafite11.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite12: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite12";
    model = "favela_props\grafite12.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite13: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite13";
    model = "favela_props\grafite13.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite14: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite14";
    model = "favela_props\grafite14.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite15: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite15";
    model = "favela_props\grafite15.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite16: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite16";
    model = "favela_props\grafite16.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };
    class grafite17: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite17";
    model = "favela_props\grafite17.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };
    class grafite18: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite18";
    model = "favela_props\grafite18.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };
    class grafite19: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite19";
    model = "favela_props\grafite19.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite20: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite20";
    model = "favela_props\grafite20.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite21: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite21";
    model = "favela_props\grafite21.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite22: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite22";
    model = "favela_props\grafite22.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite23: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite23";
    model = "favela_props\grafite23.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite24: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite24";
    model = "favela_props\grafite24.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite25: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite25";
    model = "favela_props\grafite25.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite26: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite26";
    model = "favela_props\grafite26.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite27: cubo { // Define the new vehicle class escada1 based on cubo
    displayName = "grafite27";
    model = "favela_props\grafite27.p3d"; // Path to your new model
    editorSubcategory = "GrafitesFavelas";
    };

};

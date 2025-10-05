class CfgPatches {
    class FernandimTeste {
        units[] = {}; // Add "barraco_02" to the list of units
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
    class Thing; 
    class House_F;

    class prop: House_F {
        scope = 2; // 2 means it's available in the editor
        displayName = "barraco_01";
        model = "favela_props\models\barraco_01.p3d"; // Path to your model
        //hiddenSelections[] = {"prop"}; // Replace with your texture selection name
        //faction = "Empty"; // Assign it to the custom faction "Empty"
        vehicleClass = "Barracos"; // Assign it to the custom unit class "Barracos"
        armor = 20000;
        editorCategory = "FavelaProps";
        editorSubcategory = "Barracos";
    };

    class barraco_02: prop { 
        displayName = "barraco_02";
        model = "favela_props\models\barraco_02.p3d"; 
    };

    class barraco_03: prop { 
    displayName = "barraco_03";
    model = "favela_props\models\barraco_03.p3d"; 
    };

    class barraco_3: prop { 
    displayName = "barraco_3";
    model = "favela_props\models\barraco_3.p3d"; 
    };

    class barraco_04: prop { 
    displayName = "barraco_04";
    model = "favela_props\models\barraco_04.p3d"; 
    };

    class barraco_4: prop { 
    displayName = "barraco_4";
    model = "favela_props\models\barraco_4.p3d"; 
    };

    class barraco_05: prop { 
    displayName = "barraco_05";
    model = "favela_props\models\barraco_05.p3d"; 
    };

    class barraco_5: prop { 
    displayName = "barraco_5";
    model = "favela_props\models\barraco_5.p3d"; 
    };

    class barraco_06: prop { 
    displayName = "barraco_06";
    model = "favela_props\models\barraco_06.p3d"; 
    };

    class barraco_6: prop { 
    displayName = "barraco_6";
    model = "favela_props\models\barraco_6.p3d"; 
    };

    class barraco_11: prop { 
    displayName = "barraco_11";
    model = "favela_props\models\barraco_11.p3d"; 
    };

    class barraco_12: prop {
    displayName = "barraco_12";
    model = "favela_props\models\barraco_12.p3d"; 
    };

    class barraco_13: prop { 
    displayName = "barraco_13";
    model = "favela_props\models\barraco_13.p3d"; 
    };

    class barraco_14: prop { 
    displayName = "barraco_14";
    model = "favela_props\models\barraco_14.p3d"; 
    };

    class barraco_15: prop { 
    displayName = "barraco_15";
    model = "favela_props\models\barraco_15.p3d"; 
    };

    class barraco_17: prop { 
    displayName = "barraco_17";
    model = "favela_props\models\barraco_17.p3d"; 
    };

    class barraco_18: prop { 
    displayName = "barraco_18";
    model = "favela_props\models\barraco_18.p3d"; 
    };

    class barraco_19: prop { 
    displayName = "barraco_19";
    model = "favela_props\models\barraco_19.p3d"; 
    };

    class barraco_20: prop { 
    displayName = "barraco_20";
    model = "favela_props\models\barraco_20.p3d"; 
    };

    class barraco_21: prop { 
    displayName = "barraco_21";
    model = "favela_props\models\barraco_21.p3d"; 
    };

    class barraco_22: prop { 
    displayName = "barraco_22";
    model = "favela_props\models\barraco_22.p3d"; 
    };

    class upp: prop { 
    displayName = "upp";
    model = "favela_props\models\upp.p3d"; 
    };


//Casas Novas
class casa_1: prop { 
    displayName = "casa_1";
    model = "favela_props\models\casa_1.p3d"; 
    };

    class casa_2: prop { 
        displayName = "casa_2";
        model = "favela_props\models\casa_2.p3d"; 
        };
        class casa_3: prop { 
            displayName = "casa_3";
            model = "favela_props\models\casa_3.p3d"; 
            };
            class casa_4: prop { 
                displayName = "casa_4";
                model = "favela_props\models\casa_4.p3d"; 
                };

                class casa_5: prop { 
                    displayName = "casa_5";
                    model = "favela_props\models\casa_5.p3d"; 
                    };

                    class casa_6: prop { 
                        displayName = "casa_6";
                        model = "favela_props\models\casa_6.p3d"; 
                        };
                        
                        class casa_7: prop { 
                            displayName = "casa_7";
                            model = "favela_props\models\casa_7.p3d"; 
                            };


//Casas França favela
    class casa1: prop { 
    displayName = "casa1";
    model = "favela_props\models\casa1.p3d"; 
    };

//Casas França favela
    class antenacda: prop { 
    displayName = "antenacda";
    model = "favela_props\models\antenacda.p3d"; 
    };

//Casas França favela
    class prediocda: prop { 
    displayName = "prediocda";
    model = "favela_props\models\prediocda.p3d"; 
    };


//GN Modelagens convertidas
    class GN_barraco01: prop { 
    displayName = "GN_barraco01";
    model = "favela_props\models\GN_barraco01.p3d"; 
    };

    class GN_barraco02: prop { 
    displayName = "GN_barraco02";
    model = "favela_props\models\GN_barraco02.p3d"; 
    };

//GN Modelagens Convertidas termino
    class escada1: prop { 
    displayName = "escada1";
    model = "favela_props\models\escada1.p3d"; 
    editorSubcategory = "ExtrasFavela"
    };
    class escada2: prop { 
    displayName = "escada2";
    model = "favela_props\models\escada2.p3d"; 
    editorSubcategory = "ExtrasFavela";
    };
    class escada3: prop { 
    displayName = "escada3";
    model = "favela_props\models\escada3.p3d"; 
    editorSubcategory = "ExtrasFavela";
    };
    class escada4: prop { 
    displayName = "escada4";
    model = "favela_props\models\escada4.p3d"; 
    editorSubcategory = "ExtrasFavela";
    };
    class escada5: prop { 
    displayName = "escada5";
    model = "favela_props\models\escada5.p3d"; 
    editorSubcategory = "ExtrasFavela";
    };
    class escada6: prop { 
    displayName = "escada6";
    model = "favela_props\models\escada6.p3d"; 
    editorSubcategory = "ExtrasFavela";
    };
    class escada7: prop { 
    displayName = "escada7";
    model = "favela_props\models\escada7.p3d"; 
    editorSubcategory = "ExtrasFavela";
    };

     class caixadagua: prop { 
    displayName = "caixadagua";
    model = "favela_props\models\caixadagua.p3d"; 
    editorSubcategory = "ExtrasFavela";
    };

     class telhado: prop { 
    displayName = "telhado";
    model = "favela_props\models\telhado.p3d"; 
    editorSubcategory = "ExtrasFavela";
    };

     class orelhao: prop { 
    displayName = "orelhao";
    model = "favela_props\models\orelhao.p3d"; 
    editorSubcategory = "ExtrasFavela";
    };

     class ar15: prop { 
    displayName = "ar15";
    model = "favela_props\models\ar15.p3d"; 
    editorSubcategory = "ExtrasFavela";
    };

     class maconha: prop { 
    displayName = "maconhahao";
    model = "favela_props\models\maconha.p3d"; 
    editorSubcategory = "ExtrasFavela";
    };

    class calcada: prop { 
    displayName = "calcada";
    model = "favela_props\models\calcada.p3d"; 
    editorSubcategory = "RuasFavela";
    };

    class curva: prop { 
    displayName = "curva";
    model = "favela_props\models\curva.p3d"; 
    editorSubcategory = "RuasFavela";
    };

    class morro: prop { 
    displayName = "morro";
    model = "favela_props\models\morro.p3d"; 
    editorSubcategory = "RuasFavela";
    };

    class rampa: prop { 
    displayName = "rampa";
    model = "favela_props\models\rampa.p3d"; 
    editorSubcategory = "RuasFavela";
    };

    class ruareta: prop { 
    displayName = "Rua Reta";
    model = "favela_props\models\ruareta.p3d"; 
    editorSubcategory = "RuasFavela";
    };

    class lombada: prop { 
    displayName = "lombada";
    model = "favela_props\models\lombada.p3d"; 
    editorSubcategory = "RuasFavela";
    };

    class grafite01: prop { 
    displayName = "grafite01";
    model = "favela_props\models\grafite01.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite02: prop { 
    displayName = "grafite02";
    model = "favela_props\models\grafite02.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite03: prop { 
    displayName = "grafite03";
    model = "favela_props\models\grafite03.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite04: prop { 
    displayName = "grafite04";
    model = "favela_props\models\grafite04.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite05: prop { 
    displayName = "grafite05";
    model = "favela_props\models\grafite05.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite07: prop { 
    displayName = "grafite07";
    model = "favela_props\models\grafite07.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite08: prop { 
    displayName = "grafite08";
    model = "favela_props\models\grafite08.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite09: prop { 
    displayName = "grafite09";
    model = "favela_props\models\grafite09.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite10: prop { 
    displayName = "grafite10";
    model = "favela_props\models\grafite10.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite11: prop { 
    displayName = "grafite11";
    model = "favela_props\models\grafite11.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite12: prop { 
    displayName = "grafite12";
    model = "favela_props\models\grafite12.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite13: prop { 
    displayName = "grafite13";
    model = "favela_props\models\grafite13.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite14: prop { 
    displayName = "grafite14";
    model = "favela_props\models\grafite14.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite15: prop { 
    displayName = "grafite15";
    model = "favela_props\models\grafite15.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite16: prop { 
    displayName = "grafite16";
    model = "favela_props\models\grafite16.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };
    class grafite17: prop { 
    displayName = "grafite17";
    model = "favela_props\models\grafite17.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };
    class grafite18: prop { 
    displayName = "grafite18";
    model = "favela_props\models\grafite18.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };
    class grafite19: prop { 
    displayName = "grafite19";
    model = "favela_props\models\grafite19.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite20: prop { 
    displayName = "grafite20";
    model = "favela_props\models\grafite20.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite21: prop { 
    displayName = "grafite21";
    model = "favela_props\models\grafite21.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite22: prop { 
    displayName = "grafite22";
    model = "favela_props\models\grafite22.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite23: prop { 
    displayName = "grafite23";
    model = "favela_props\models\grafite23.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite24: prop { 
    displayName = "grafite24";
    model = "favela_props\models\grafite24.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite25: prop { 
    displayName = "grafite25";
    model = "favela_props\models\grafite25.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite26: prop { 
    displayName = "grafite26";
    model = "favela_props\models\grafite26.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

    class grafite27: prop { 
    displayName = "grafite27";
    model = "favela_props\models\grafite27.p3d"; 
    editorSubcategory = "GrafitesFavelas";
    };

};

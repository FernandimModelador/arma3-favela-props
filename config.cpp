class CfgPatches {
    class FernandimTeste {
        units[] = {"prop", "barraco_02", "barraco_03", "barraco_3", "barraco_04", "barraco_4", "barraco_05", "barraco_5", "barraco_06", "barraco_6", "barraco_11", "barraco_12", "barraco_13", "barraco_14", "barraco_15", "barraco_17", "barraco_18", "barraco_19", "barraco_20", "barraco_21", "barraco_22", "upp", "casa_1", "casa_2", "casa_3", "casa_4", "casa_5", "casa_6", "casa_7", "casa1", "antenacda", "prediocda", "GN_barraco01", "GN_barraco02", "escada1", "escada2", "escada3", "escada4", "escada5", "escada6", "escada7", "caixadagua", "telhado", "orelhao", "ar15", "maconha", "calcada", "curva", "morro", "rampa", "ruareta", "lombada", "grafite01", "grafite02", "grafite03", "grafite04", "grafite05", "grafite07", "grafite08", "grafite09", "grafite10", "grafite11", "grafite12", "grafite13", "grafite14", "grafite15", "grafite16", "grafite17", "grafite18",  "grafite19",  "grafite20",  "grafite21",  "grafite22",  "grafite23",  "grafite24",  "grafite25",  "grafite26",  "grafite27"};
        weapons[] = {};
        requiredAddons[] = {};
        fileName = "addons\favela_props.pbo";
    };
/*
    class Traficantes_Mod
    {
        units[] = {"Traficante_1_Unit", "Traficante_2_Unit"};
        weapons[] = {"Traficante_1_Uniform", "Traficante_2_Uniform"};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F_Civil"};
    };
*/
};


class CfgVehicleClasses {
    class Objects {
        displayName = "Objects"; // Default vehicle class for your objects
    };
    
    class Barracos { // Define the custom unit class
        displayName = "Barracos"; // Rename to what you want the sub-group of the faction will be.
    };
};

/*
class CfgWeapons
{
    class ItemCore;
    class UniformItem;
    class Uniform_Base : ItemCore
    {
        class ItemInfo;
    };

    class Traficante_1_Uniform : Uniform_Base
    {
        scope = 2;
        author = "Fernandim";
        displayName = "Traficante 1 Uniforme";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";

        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Traficante_1_Unit";
            containerClass = "Supply20";
            mass = 50;
        };
    };

    class Traficante_2_Uniform : Uniform_Base
    {
        scope = 2;
        author = "Fernandim";
        displayName = "Traficante 2 Uniforme";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";

        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Traficante_2_Unit";
            containerClass = "Supply20";
            mass = 50;
        };
    };
};

*/


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
        scopeCurator = 2;
        displayName = "barraco_01";
        model = "favela_props\models\barraco_01.p3d"; // Path to your model
        //hiddenSelections[] = {"prop"}; // Replace with your texture selection name
        //faction = "Empty"; // Assign it to the custom faction "Empty"
        vehicleClass = "Barracos"; // Assign it to the custom unit class "Barracos"
        armor = 100000;
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



    // CPX Conversão
    class cpx_casa_01: prop { 
        displayName = "cpx_casa_01";
        model = "favela_props\models\cpx\cpx_casa_01.p3d"; 
        };
    
        class cpx_casa_01_a: prop { 
        displayName = "cpx_casa_01_a";
        model = "favela_props\models\cpx\cpx_casa_01_a.p3d"; 
        };
    
        class cpx_casa_01_b: prop { 
        displayName = "cpx_casa_01_b";
        model = "favela_props\models\cpx\cpx_casa_01_b.p3d"; 
        };
    
        class cpx_casa_01_c: prop { 
        displayName = "cpx_casa_01_c";
        model = "favela_props\models\cpx\cpx_casa_01_c.p3d"; 
        };
    
        class cpx_casa_01_d: prop { 
        displayName = "cpx_casa_01_d";
        model = "favela_props\models\cpx\cpx_casa_01_d.p3d"; 
        };
    
        class cpx_casa_01_e: prop { 
        displayName = "cpx_casa_01_e";
        model = "favela_props\models\cpx\cpx_casa_01_e.p3d"; 
        };
    
        class cpx_casa_06: prop { 
        displayName = "cpx_casa_06";
        model = "favela_props\models\cpx\cpx_casa_06.p3d"; 
        };
    
        class cpx_casa_06_a: prop { 
        displayName = "cpx_casa_06_a";
        model = "favela_props\models\cpx\cpx_casa_06_a.p3d"; 
        };
    
        class cpx_casa_06_b: prop { 
        displayName = "cpx_casa_06_b";
        model = "favela_props\models\cpx\cpx_casa_06_b.p3d"; 
        };
    
        class cpx_casa_06_c: prop { 
        displayName = "cpx_casa_06_c";
        model = "favela_props\models\cpx\cpx_casa_06_c.p3d"; 
        };
    
        class cpx_casa_06_d: prop { 
        displayName = "cpx_casa_06_d";
        model = "favela_props\models\cpx\cpx_casa_06_d.p3d"; 
        };
    
        class cpx_casa_06_e: prop { 
        displayName = "cpx_casa_06_e";
        model = "favela_props\models\cpx\cpx_casa_06_e.p3d"; 
        };
    
        class cpx_casa_08: prop { 
        displayName = "cpx_casa_08";
        model = "favela_props\models\cpx\cpx_casa_08.p3d"; 
        };
    
        class cpx_casa_12_box: prop { 
        displayName = "cpx_casa_12_box";
        model = "favela_props\models\cpx\cpx_casa_12_box.p3d"; 
        };
    
        class cpx_casa_14: prop { 
        displayName = "cpx_casa_14";
        model = "favela_props\models\cpx\cpx_casa_14.p3d"; 
        };
    
        class cpx_casa_15: prop { 
        displayName = "cpx_casa_15";
        model = "favela_props\models\cpx\cpx_casa_15.p3d"; 
        };
    
        class cpx_casa_15_a: prop { 
        displayName = "cpx_casa_15_a";
        model = "favela_props\models\cpx\cpx_casa_15_a.p3d"; 
        };
    
        class cpx_casa_15_b: prop { 
        displayName = "cpx_casa_15_b";
        model = "favela_props\models\cpx\cpx_casa_15_b.p3d"; 
        };
    
        class cpx_casa_15_c: prop { 
        displayName = "cpx_casa_15_c";
        model = "favela_props\models\cpx\cpx_casa_15_c.p3d"; 
        };
    
        class cpx_casa_15_d: prop { 
        displayName = "cpx_casa_15_d";
        model = "favela_props\models\cpx\cpx_casa_15_d.p3d"; 
        };
    
        class cpx_casa_15_e: prop { 
        displayName = "cpx_casa_15_e";
        model = "favela_props\models\cpx\cpx_casa_15_e.p3d"; 
        };
    
        class cpx_casa_15_f: prop { 
        displayName = "cpx_casa_15_f";
        model = "favela_props\models\cpx\cpx_casa_15_f.p3d"; 
        };
    
        class cpx_casa_15_g: prop { 
        displayName = "cpx_casa_15_g";
        model = "favela_props\models\cpx\cpx_casa_15_g.p3d"; 
        };
    
        class cpx_casa_17: prop { 
        displayName = "cpx_casa_17";
        model = "favela_props\models\cpx\cpx_casa_17.p3d"; 
        };
    
        class cpx_casa_17_a: prop { 
        displayName = "cpx_casa_17_a";
        model = "favela_props\models\cpx\cpx_casa_17_a.p3d"; 
        };
    
        class cpx_casa_17_b: prop { 
        displayName = "cpx_casa_17_b";
        model = "favela_props\models\cpx\cpx_casa_17_b.p3d"; 
        };
    
        class cpx_casa_17_c: prop { 
        displayName = "cpx_casa_17_c";
        model = "favela_props\models\cpx\cpx_casa_17_c.p3d"; 
        };
    
        class cpx_casa_17_d: prop { 
        displayName = "cpx_casa_17_d";
        model = "favela_props\models\cpx\cpx_casa_17_d.p3d"; 
        };
    
        class cpx_casa_17_e: prop { 
        displayName = "cpx_casa_17_e";
        model = "favela_props\models\cpx\cpx_casa_17_e.p3d"; 
        };
    
        class cpx_casa_17_f: prop { 
        displayName = "cpx_casa_17_f";
        model = "favela_props\models\cpx\cpx_casa_17_f.p3d"; 
        };
    
        class cpx_casa_17_g: prop { 
        displayName = "cpx_casa_17_g";
        model = "favela_props\models\cpx\cpx_casa_17_g.p3d"; 
        };
    
        class cpx_casa_17_h: prop { 
        displayName = "cpx_casa_17_h";
        model = "favela_props\models\cpx\cpx_casa_17_h.p3d"; 
        };
    
        class cpx_casa_20: prop { 
        displayName = "cpx_casa_20";
        model = "favela_props\models\cpx\cpx_casa_20.p3d"; 
        };
    
        class cpx_casa_20_a: prop { 
        displayName = "cpx_casa_20_a";
        model = "favela_props\models\cpx\cpx_casa_20_a.p3d"; 
        };
    
        class cpx_casa_20_b: prop { 
        displayName = "cpx_casa_20_b";
        model = "favela_props\models\cpx\cpx_casa_20_b.p3d"; 
        };
    
        class cpx_casa_20_c: prop { 
        displayName = "cpx_casa_20_c";
        model = "favela_props\models\cpx\cpx_casa_20_c.p3d"; 
        };
    
        class cpx_casa_20_d: prop { 
        displayName = "cpx_casa_20_d";
        model = "favela_props\models\cpx\cpx_casa_20_d.p3d"; 
        };
    
        class cpx_casa_21: prop { 
        displayName = "cpx_casa_21";
        model = "favela_props\models\cpx\cpx_casa_21.p3d"; 
        };
    
        class cpx_casa_21_a: prop { 
        displayName = "cpx_casa_21_a";
        model = "favela_props\models\cpx\cpx_casa_21_a.p3d"; 
        };
    
        class cpx_casa_21_b: prop { 
        displayName = "cpx_casa_21_b";
        model = "favela_props\models\cpx\cpx_casa_21_b.p3d"; 
        };
    
        class cpx_casa_21_c: prop { 
        displayName = "cpx_casa_21_c";
        model = "favela_props\models\cpx\cpx_casa_21_c.p3d"; 
        };
    
        class cpx_casa_21_d: prop { 
        displayName = "cpx_casa_21_d";
        model = "favela_props\models\cpx\cpx_casa_21_d.p3d"; 
        };
    
        class cpx_casa_24: prop { 
        displayName = "cpx_casa_24";
        model = "favela_props\models\cpx\cpx_casa_24.p3d"; 
        };
    
        class cpx_casa_24_a: prop { 
        displayName = "cpx_casa_24_a";
        model = "favela_props\models\cpx\cpx_casa_24_a.p3d"; 
        };
    
        class cpx_casa_24_b: prop { 
        displayName = "cpx_casa_24_b";
        model = "favela_props\models\cpx\cpx_casa_24_b.p3d"; 
        };
    
        class cpx_casa_24_c: prop { 
        displayName = "cpx_casa_24_c";
        model = "favela_props\models\cpx\cpx_casa_24_c.p3d"; 
        };
    
        class cpx_casa_24_d: prop { 
        displayName = "cpx_casa_24_d";
        model = "favela_props\models\cpx\cpx_casa_24_d.p3d"; 
        };
    
        class cpx_casa_24_e: prop { 
        displayName = "cpx_casa_24_e";
        model = "favela_props\models\cpx\cpx_casa_24_e.p3d"; 
        };
    
        class cpx_casa_24_f: prop { 
        displayName = "cpx_casa_24_f";
        model = "favela_props\models\cpx\cpx_casa_24_f.p3d"; 
        };
    
        class cpx_casa_24_g: prop { 
        displayName = "cpx_casa_24_g";
        model = "favela_props\models\cpx\cpx_casa_24_g.p3d"; 
        };
    
        class cpx_casa_24_h: prop { 
        displayName = "cpx_casa_24_h";
        model = "favela_props\models\cpx\cpx_casa_24_h.p3d"; 
        };
    
        class cpx_casa_24_i: prop { 
        displayName = "cpx_casa_24_i";
        model = "favela_props\models\cpx\cpx_casa_24_i.p3d"; 
        };
    
        class cpx_casa_24_j: prop { 
        displayName = "cpx_casa_24_j";
        model = "favela_props\models\cpx\cpx_casa_24_j.p3d"; 
        };
    
        class cpx_casa_26: prop { 
        displayName = "cpx_casa_26";
        model = "favela_props\models\cpx\cpx_casa_26.p3d"; 
        };
    
        class cpx_casa_29: prop { 
        displayName = "cpx_casa_29";
        model = "favela_props\models\cpx\cpx_casa_29.p3d"; 
        };
    
        class cpx_casa_39: prop { 
        displayName = "cpx_casa_39";
        model = "favela_props\models\cpx\cpx_casa_39.p3d"; 
        };
    
        class cpx_casa_39_a: prop { 
        displayName = "cpx_casa_39_a";
        model = "favela_props\models\cpx\cpx_casa_39_a.p3d"; 
        };
    
        class cpx_casa_39_b: prop { 
        displayName = "cpx_casa_39_b";
        model = "favela_props\models\cpx\cpx_casa_39_b.p3d"; 
        };
    
        class cpx_casa_39_c: prop { 
        displayName = "cpx_casa_39_c";
        model = "favela_props\models\cpx\cpx_casa_39_c.p3d"; 
        };
    
        class cpx_casa_39_d: prop { 
        displayName = "cpx_casa_39_d";
        model = "favela_props\models\cpx\cpx_casa_39_d.p3d"; 
        };
    
        class cpx_casa_39_e: prop { 
        displayName = "cpx_casa_39_e";
        model = "favela_props\models\cpx\cpx_casa_39_e.p3d"; 
        };
    
        class cpx_casa_39_f: prop { 
        displayName = "cpx_casa_39_f";
        model = "favela_props\models\cpx\cpx_casa_39_f.p3d"; 
        };
    
        class cpx_casa_39_g: prop { 
        displayName = "cpx_casa_39_g";
        model = "favela_props\models\cpx\cpx_casa_39_g.p3d"; 
        };
    
        class cpx_casa_41: prop { 
        displayName = "cpx_casa_41";
        model = "favela_props\models\cpx\cpx_casa_41.p3d"; 
        };
    
        class cpx_casa_41_a: prop { 
        displayName = "cpx_casa_41_a";
        model = "favela_props\models\cpx\cpx_casa_41_a.p3d"; 
        };
    
        class cpx_casa_41_b: prop { 
        displayName = "cpx_casa_41_b";
        model = "favela_props\models\cpx\cpx_casa_41_b.p3d"; 
        };
    
        class cpx_casa_41_c: prop { 
        displayName = "cpx_casa_41_c";
        model = "favela_props\models\cpx\cpx_casa_41_c.p3d"; 
        };
    
        class cpx_casa_41_d: prop { 
        displayName = "cpx_casa_41_d";
        model = "favela_props\models\cpx\cpx_casa_41_d.p3d"; 
        };
    
        class cpx_casa_41_e: prop { 
        displayName = "cpx_casa_41_e";
        model = "favela_props\models\cpx\cpx_casa_41_e.p3d"; 
        };
    
        class CPX_Girder_01: prop { 
        displayName = "CPX_Girder_01";
        model = "favela_props\models\cpx\CPX_Girder_01.p3d"; 
        };
    
        class CPX_Girder_02: prop { 
        displayName = "CPX_Girder_02";
        model = "favela_props\models\cpx\CPX_Girder_02.p3d"; 
        };
    
    









/*

        // Uniforms

    class C_man_1;

    class Traficante_1_Unit : C_man_1
    {
        author = "Fernandim";
        scope = 2;
        scopeCurator = 2;
        displayName = "Traficante 1";
        identityTypes[] = {"Head_CIV", "G_CIV_default"};
        genericNames = "CivMen";
        model = "a3\characters_f\civil\c_poor.p3d";
        uniformClass = "Traficante_1_Uniform";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"favela_props\textures\uniforms\traficante\shirt_pants_0.paa"};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
        nakedUniform = "U_BasicBody";
    };

    class Traficante_2_Unit : C_man_1
    {
        author = "Fernandim";
        scope = 2;
        scopeCurator = 2;
        displayName = "Traficante 2";
        identityTypes[] = {"Head_CIV", "G_CIV_default"};
        genericNames = "CivMen";
        model = "a3\characters_f\civil\c_poloshirt.p3d";
        uniformClass = "Traficante_2_Uniform";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"favela_props\textures\uniforms\traficante\shirt_shorts_0.paa"};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
        nakedUniform = "U_BasicBody";
    };
    */
};

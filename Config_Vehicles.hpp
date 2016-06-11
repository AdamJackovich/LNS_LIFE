class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
		license = "trucking";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "B_Truck_01_fuel_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
		license = "pilot";
        vehicles[] = {
			{ "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "I_Heli_Transport_02_F", { "", "", -1 } }, 
			{ "O_Heli_Transport_04_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_bench_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_box_F", { "", "", -1 } }, 
			{ "O_Heli_Transport_04_covered_F", { "", "", -1 } },
			{ "B_Heli_Transport_03_unarmed_F", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
		license = "rebel";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
			{ "SUV_01_base_black_F", { "", "", -1 } },
			{ "C_Van_01_box_F", { "", "", -1 } },
			{ "I_MRAP_03_F", { "", "", -1 } },
            { "I_Truck_02_medical_F", { "", "", -1 } },
            { "O_Truck_03_medical_F", { "", "", -1 } },
            { "B_Truck_01_medical_F", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "SUV_01_base_red_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 1 } },
            { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "B_MRAP_01_hmg_F", { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "B_Heli_Transport_01_F", { "life_coplevel", "SCALAR", 3 } },
			{ "I_Heli_light_03_unarmed_F", { "life_coplevel", "SCALAR", 5 } },
			{ "B_Heli_Transport_03_unarmed_F", { "life_coplevel", "SCALAR", 7 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 5 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };
	
	class channel_7 {
        side = "civ";
		license = "ch7";
        vehicles[] = {
            { "C_Offroad_01_red_F", { "", "", -1 } },
            { "C_Heli_Light_01_civil_F", { "", "", -1 } }
        };
    };
	
	class vip1 {
        side = "civ";
        vehicles[] = {
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } },
			{ "B_Truck_01_box_F", { "", "", -1 } },
			{ "C_Hatchback_01_sport_red_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } }
        };
    };
	
	class vip2 {
        side = "civ";
        vehicles[] = {
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } },
			{ "B_Truck_01_box_F", { "", "", -1 } },
			{ "C_Hatchback_01_sport_red_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } }
        };
    };
	
	class vip3 {
        side = "civ";
        vehicles[] = {
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } },
			{ "B_Truck_01_box_F", { "", "", -1 } },
			{ "C_Hatchback_01_sport_red_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } }
        };
    };
	
	class vip4 {
        side = "civ";
        vehicles[] = {
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } },
			{ "B_Truck_01_box_F", { "", "", -1 } },
			{ "C_Hatchback_01_sport_red_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } }
        };
    };
	
	class vip5 {
        side = "civ";
        vehicles[] = {
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F",{ "", "", -1 } },
			{ "C_Hatchback_01_sport_red_F", { "", "", -1 } },
			{ "B_Truck_01_box_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } }
        };
    };
	
	class vip_air1 {
        side = "civ";
        vehicles[] = {
			{ "B_Heli_Light_01_F", { "", "", -1 } },
			{ "C_Heli_light_01_red_F", { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "O_Heli_Attack_02_F", { "", "", -1 } },
            { "O_Heli_Attack_02_black_F", { "", "", -1 } },
			{ "B_Heli_Attack_01_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_bench_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_box_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_covered_black_F", { "", "", -1 } }
		};
    };
	
	class vip_air2 {
        side = "civ";
        vehicles[] = {
			{ "B_Heli_Light_01_F", { "", "", -1 } },
			{ "C_Heli_light_01_red_F", { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "O_Heli_Attack_02_F", { "", "", -1 } },
            { "O_Heli_Attack_02_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_black_F", { "", "", -1 } },
			{ "B_Heli_Attack_01_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_bench_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_box_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_covered_black_F", { "", "", -1 } }
        };
    };
	
	class vip_air3 {
        side = "civ";
        vehicles[] = {
			{ "B_Heli_Light_01_F", { "", "", -1 } },
			{ "C_Heli_light_01_red_F", { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "O_Heli_Attack_02_F", { "", "", -1 } },
            { "O_Heli_Attack_02_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_black_F", { "", "", -1 } },
			{ "B_Heli_Attack_01_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_bench_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_box_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_covered_black_F", { "", "", -1 } }
        };
    };
	
	class vip_air4 {
        side = "civ";
        vehicles[] = {
			{ "B_Heli_Light_01_F", { "", "", -1 } },
			{ "C_Heli_light_01_red_F", { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "O_Heli_Attack_02_F", { "", "", -1 } },
            { "O_Heli_Attack_02_black_F", { "", "", -1 } },
			{ "B_Heli_Attack_01_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_bench_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_box_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_covered_black_F", { "", "", -1 } }
        };
    };
	
	class vip_air5 {
        side = "civ";
        vehicles[] = {
			{ "B_Heli_Light_01_F", { "", "", -1 } },
			{ "C_Heli_light_01_red_F", { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "O_Heli_Attack_02_F", { "", "", -1 } },
            { "O_Heli_Attack_02_black_F", { "", "", -1 } },
			{ "B_Heli_Attack_01_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_bench_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_box_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_covered_black_F", { "", "", -1 } }
        };
    };
	
	class TRS_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
			{ "O_MRAP_02_hmg_F", { "", "", -1 } },
			{ "B_Truck_01_fuel_F", { "", "", -1 } },
			{ "C_Hatchback_01_sport_F", { "", "", -1 } },
			{ "O_Truck_02_covered_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } }
        };
    };
	
	class TRS_air {
        side = "civ";
        vehicles[] = {
			{ "B_Heli_Light_01_F", { "", "", -1 } },
			{ "C_Heli_light_01_red_F", { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "O_Heli_Attack_02_F", { "", "", -1 } },
            { "O_Heli_Attack_02_black_F", { "", "", -1 } },
			{ "B_Heli_Attack_01_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_bench_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_box_black_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_covered_black_F", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
	
	class C_Offroad_01_red_F {
        vItemSpace = 125;
        licenses[] = { {"ch7"}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {
			{ "Channel 7 News", "civ", {
                "textures\News Team\Channel7news.jpg"
            } }
		};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {};
    };
	
	class I_MRAP_03_F {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {""}, {"cop"}, {""}, {""} };
        price = 500000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
			{ "SWAT", "cop", {
                "textures\Police Stuff\SWAT.jpg",
				"textures\Police Stuff\SWAT2.jpg"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 125;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 115000;
        textures[] = { };
    };
	
	class O_Truck_02_covered_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = { };
    };
	
	class O_MRAP_02_hmg_F {
        vItemSpace = 60;
        licenses[] = { {"TRS"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class C_Offroad_01_F {
        vItemSpace = 125;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {
			{ "Raptor", "civ", {
                "textures\civi stuff\Raptor.jpg"
            } },
			{ "DGTL", "civ", {
                "textures\civi stuff\offroad_DGTL.jpg"
            } },
			{ "JP", "civ", {
                "textures\civi stuff\offroad_jp.jpg"
            } },
			{ "Purple Camo", "civ", {
                "textures\don veh\offroad_01_ext_base01_Purple_Camo.jpg"
            } },
			{ "Altis truck", "civ", {
                "textures\civi stuff\AltisOffRoad.jpg"
            } },
			{ "Monster", "civ", {
                "textures\civi stuff\offroadmonster.jpg"
            } },
			{ "Shrek", "civ", {
                "textures\civi stuff\OffSHREK.jpg"
            } },
			{ "Joker", "civ", {
                "textures\civi stuff\Jocar_offroad.jpg"
            } },
			{ "Trump", "civ", {
                "textures\civi stuff\OffTRUMP.jpg"
            } },
			{ "Bama", "civ", {
                "textures\don veh\offroad_01_ext_base01_BamaGirlblue.jpg"
            } },
			{ "Bama2", "civ", {
                "textures\don veh\offroad_01_ext_base01_BamaGirlgrey.jpg"
            } },
			{ "Bukes Of Hazzard", "civ", {
                "textures\civi stuff\Bukes Of Hazzard.jpg"
            } },
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
			{ "Medic", "med", {
                "textures\Medic Stuff\offroad_01_ext_base01_co.jpg"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1500;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = {
			{ "Skulls", "civ", {
                "textures\civi stuff\Skulls.jpg"
            } },
			{ "RainBow", "civ", {
                "textures\civi stuff\RainBow.jpg"
            } },
			{ "Green_FF", "civ", {
                "textures\civi stuff\Green_FF.jpg"
            } },
			{ "BumbleBee", "civ", {
                "textures\civi stuff\BumbleBee.jpg"
            } },
			{ "Altis_Taxi", "civ", {
                "textures\civi stuff\Altis_Taxi.jpg"
            } },
			{ "police_interceptor", "cop", {
                "textures\Police Stuff\police_interceptor.jpg"
            } },
			{ "Monster", "civ", {
                "textures\civi stuff\hatchbackmonster.jpg"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };
	
	class C_Hatchback_01_sport_red_F {
        vItemSpace = 75;
        licenses[] = { {"vip1"}, {""}, {""}, {""} };
        price = 20000;
        textures[] = {
			{ "Anime", "civ", {
                "textures\don veh\Anime.jpg"
            } },
			{ "Family Guy", "civ", {
                "textures\don veh\FamilyGuy.jpg"
            } },
			{ "Ghost Buster", "civ", {
                "textures\don veh\ghostbusters.jpg"
            } },
			{ "Pink Panther", "civ", {
                "textures\don veh\pp.jpg"
            } },
			{ "UMAD", "civ", {
                "textures\don veh\umad.jpg"
            } },
			{ "Simpson", "civ", {
                "textures\don veh\hb_simpson.jpg"
            } },
			{ "Fast & Furious Orange", "civ", {
                "textures\don veh\FF_Orange.jpg"
            } },
			{ "Power Puff Girls", "civ", {
                "textures\don veh\ppgirls.jpg"
            } },
			{ "Monster Energy", "civ", {
                "textures\don veh\White&Black Monster.jpg"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1250;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
			{ "Police", "cop", {
                "textures\Police Stuff\quadbike_01_co.jpg"
            } },
			{ "Purple Pimp", "civ", {
                "textures\don veh\quadbike_01_Purple_Pimp.jpg",
				"textures\don veh\quadbike_01_wheel_Purple_Pimp.jpg"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 90000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9500;
        textures[] = {
			{ "Skulls", "civ", {
                "textures\civi stuff\Skulls.jpg"
            } },
			{ "RainBow", "civ", {
                "textures\civi stuff\RainBow.jpg"
            } },
			{ "Green_FF", "civ", {
                "textures\civi stuff\Green_FF.jpg"
            } },
			{ "BumbleBee", "civ", {
                "textures\civi stuff\BumbleBee.jpg"
            } },
			{ "Altis_Taxi", "civ", {
                "textures\civi stuff\Altis_Taxi.jpg"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
			{ "Minion", "civ", {
                "textures\civi stuff\minions.jpg"
			} },
			{ "Duck", "civ", {
                "textures\civi stuff\duck.jpg"
			} }
        }; 	
    };
	
	class SUV_01_base_red_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1;
        textures[] = {
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Undercover", "cop", {
                "textures\Police Stuff\Kavala_suv.jpg"
            } }
        };
    };
	
	class SUV_01_base_black_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1;
        textures[] = {
            { "Medic", "med", {
                "textures\Medic Stuff\Msuv.jpg"
			} }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 13000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
			{ "Real Camo", "civ", {
                "textures\don veh\van_01_RealCamo_co.jpg"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
			{ "SWAT", "cop", {
                "textures\Police Stuff\SWAT.jpg",
				"textures\Police Stuff\SWAT2.jpg"
            } }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };
	
	class B_Heli_Attack_01_F {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {
		    { "Dragon Scale", "civ", {
		        "textures\Rebel Stuff\heli_attack_01_Dragons_scales.jpg"
		    } }
		};	
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 275000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };
	
	class O_Heli_Attack_02_F {
        vItemSpace = 500;
        licenses[] = { {"vip1"}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {};
		
    };
	
	class O_Heli_Attack_02_black_F {
        vItemSpace = 500;
        licenses[] = { {"vip1"}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {};
    };
	
	class C_Heli_light_01_red_F {
        vItemSpace = 90;
        licenses[] = { {"vip1"}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
			{ "Ghillie Camo", "civ", {
                "textures\don veh\heli_light_01_ext_Ghillie Camo.jpg"
            } },
			{ "Puff Puff Camo", "civ", {
                "textures\don veh\heli_light_01_ext_Puff_Puff_Pass_Heli.jpg"
            } },
			{ "Purple Camo", "civ", {
                "textures\don veh\heli_light_01_ext_Purple_Camo.jpg"
            } },
			{ "Real Camo", "civ", {
                "textures\don veh\heli_light_01_RealCamo_co.jpg"
            } },
			{ "Camo", "civ", {
                "textures\don veh\heli_light_01_ext_Digi_Oct_Camo.jpg"
            } }
		};
    };
	
	class I_Heli_light_03_unarmed_F {
		vItemSpace = 125;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 500000;
        textures[] = {};
	};
	
	class O_Heli_Transport_04_F {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 650000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_bench_F {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 550000;
        textures[] = {};
    };

	class O_Heli_Transport_04_box_F {
        vItemSpace = 250;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 600000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_covered_F {
        vItemSpace = 250;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 550000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_black_F {
        vItemSpace = 50;
        licenses[] = { {"vip1"}, {"cAir"}, {"mAir"}, {""} };
        price = 650000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_bench_black_F {
        vItemSpace = 50;
        licenses[] = { {"vip1"}, {"cAir"}, {"mAir"}, {""} };
        price = 550000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_box_black_F {
         vItemSpace = 250;
        licenses[] = { {"vip1"}, {"cAir"}, {"mAir"}, {""} };
        price = 600000;
        textures[] = {};
    };
 
	class O_Heli_Transport_04_covered_black_F {
        vItemSpace = 250;
        licenses[] = { {"vip1"}, {"cAir"}, {"mAir"}, {""} };
        price = 550000;
        textures[] = {};
    };
	
	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 500;
        licenses[] = { {"vip1"}, {"cAir"}, {"mAir"}, {""} };
        price = 750000;
        textures[] = {};
    };
	
    class C_Heli_Light_01_civil_F {
		vItemSpace = 90;
        licenses[] = { {"ch7"}, {"cAir"}, {"mAir"}, {""} };
        price = 245000;
        textures[] = {
			{ "Channel 7 News", "civ", {
                "textures\News Team\Channel7heli.jpg"
            } }
		};
	};

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 300000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };
	
	class I_Heli_Transport_02_F {
        vItemSpace = 800;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 950000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
};

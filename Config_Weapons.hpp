/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Pistol_Signal_F", "", 50, 25 },
            { "hgun_Rook40_F", "", 450, 225 },
            { "hgun_Pistol_heavy_02_F", "", 250, 125 },
            { "hgun_PDW2000_F", "", 1000, 500 },
			{ "arifle_SDAR_F", "", 1500, 1000 },
			{ "arifle_Mk20_F", "", 2250, 1500 },
			{ "arifle_Mk20_plain_F", "", 2000, 1250 },
			{ "arifle_Mk20C_F", "", 2250, 1500 },
			{ "arifle_Mk20C_plain_F", "", 2000, 1250 },
			{ "arifle_TRG20_F", "", 2250, 1500 },
			{ "arifle_TRG21_F", "", 2500, 1750 },
			{ "srifle_DMR_06_camo_F", "Hunting Rifle", 3250, 2750 },
			{ "srifle_DMR_06_olive_F", "Hunting Rifle", 3000, 2500 },
			{ "optic_Aco", "", 50, 25 },
			{ "optic_ACO_grn", "", 75, 50 },
			{ "optic_Holosight", "", 150, 100 },
			{ "optic_Aco_smg", "", 25, 5 },
			{ "optic_Holosight_smg", "", 125, 75 },
			{ "optic_Hamr", "", 200, 50 },
			{ "bipod_01_F_snd", "", 125, 25 },
			{ "bipod_01_F_blk", "", 100, 25 },
			{ "bipod_01_F_mtp", "", 125, 25 },
			{ "bipod_02_F_blk", "", 100, 25 },
			{ "bipod_02_F_tan", "", 125, 25 },
			{ "bipod_02_F_hex", "", 125, 25 },
			{ "bipod_03_F_blk", "", 100, 25 },
			{ "bipod_03_F_oli", "", 125, 25 },
			{ "acc_flashlight", "", 25, 10 }
        };
        mags[] = {
			{ "6Rnd_45ACP_Cylinder", "", 8 },
			{ "6Rnd_GreenSignal_F", "", 5 },
            { "6Rnd_RedSignal_F", "", 5 },
			{ "20Rnd_556x45_UW_mag", "", 15 },
			{ "16Rnd_9x21_Mag", "", 10 },
            { "30Rnd_9x21_Mag", "", 20 },
			{ "30Rnd_556x45_Stanag", "", 25 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 30 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", 30 },
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 30 },
			{ "20Rnd_762x51_Mag", "", 35 }
        };
    };
    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Pistol_heavy_01_F", "", 250, 125 },  
            { "arifle_TRG20_F", "", 2250, -1 },
			{ "arifle_TRG21_GL_F", "", 2500, -1 },
			{ "arifle_Mk20_GL_F", "", 2750, -1 },
			{ "arifle_Mk20_GL_plain_F", "", 2500, -1 },
			{ "arifle_Katiba_F", "", 3250, -1 },
			{ "arifle_Katiba_C_F", "", 3000, -1 },
			{ "arifle_Katiba_GL_F", "", 5000, -1 },
			{ "arifle_MXC_F", "", 3250, -1 },
			{ "arifle_MX_F", "", 3000, -1 },
			{ "arifle_MX_GL_F", "", 5000, -1 },
			{ "arifle_MX_SW_F", "", 7500, -1 },
			{ "arifle_MXM_F", "", 4000, -1 },
			{ "srifle_DMR_03_F", "", 6000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 6500, -1 },
			{ "srifle_DMR_03_tan_F", "", 6500, -1 },
			{ "srifle_DMR_03_multicam_F", "", 6500, -1 },
			{ "srifle_DMR_03_woodland_F", "", 6500, -1 },
			{ "srifle_DMR_01_F", "", 4000, -1 },
			{ "LMG_Mk200_F", "", 8000, -1 },
			{ "optic_MRD", "", 100, -1 },
			{ "optic_Aco", "", 50, -1 },
			{ "optic_ACO_grn", "", 75, -1 },
			{ "optic_Holosight", "", 150, -1 },
			{ "optic_Aco_smg", "", 25, -1 },
			{ "optic_Holosight_smg", "", 100, -1 },
			{ "optic_Arco", "", 300, -1 },
			{ "optic_Hamr", "", 300, -1 },
			{ "optic_MRCO", "", 300, -1 },
			{ "optic_DMS", "", 500, -1 },
			{ "optic_SOS", "", 750, -1 },
			{ "optic_LRPS", "", 1000, -1 },
			{ "bipod_01_F_snd", "", 125, -1 },
			{ "bipod_01_F_blk", "", 100, -1 },
			{ "bipod_01_F_mtp", "", 125, -1 },
			{ "bipod_02_F_blk", "", 100, -1 },
			{ "bipod_02_F_tan", "", 125, -1 },
			{ "bipod_02_F_hex", "", 125, -1 },
			{ "bipod_03_F_blk", "", 100, -1 },
			{ "bipod_03_F_oli", "", 125, -1 },
            { "acc_flashlight", "", 25, -1 },
			{ "acc_pointer_IR", "", 100, -1 },
			{ "NVGoggles", "", 750, -1 },
			{ "UGL_FlareWhite_F", "", 50 },
			{ "UGL_FlareGreen_F", "", 50 },
			{ "UGL_FlareRed_F", "", 50 },
			{ "UGL_FlareYellow_F", "", 50 },
            { "UGL_FlareCIR_F", "", 50 },
			{ "1Rnd_Smoke_Grenade_shell", "", 50 },
			{ "1Rnd_SmokeRed_Grenade_shell", "", 50 },
			{ "1Rnd_SmokeGreen_Grenade_shell", "", 50 },
			{ "1Rnd_SmokeYellow_Grenade_shell", "", 50 },
			{ "1Rnd_SmokePurple_Grenade_shell", "", 50 },
			{ "1Rnd_SmokeBlue_Grenade_shell", "", 50 },
			{ "1Rnd_SmokeOrange_Grenade_shell", "", 50 }			
	 };
        mags[] = {
			{ "11Rnd_45ACP_Mag", "", 10 },
			{ "200Rnd_65x39_cased_Box", "", 75 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 100 },
            { "30Rnd_556x45_Stanag", "", 25 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 30 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", 30 },
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 30 },
            { "30Rnd_65x39_caseless_green", "", 30 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 30 },
			{ "30Rnd_65x39_caseless_mag", "", 25 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 30 },
			{ "100Rnd_65x39_caseless_mag", "", 50 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 75 },
            { "10Rnd_762x54_Mag", "", 25 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "20Rnd_556x45_UW_mag", "", 20 }
            
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 450, -1 },
            { "hgun_Pistol_heavy_02_F", "", 250, -1 },
            { "hgun_PDW2000_F", "", 1000, -1 },
			{ "arifle_SDAR_F", "", 1500, -1 },
            { "optic_ACO_grn_smg", "", 75, -1 }

        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 10 },
            { "6Rnd_45ACP_Cylinder", "", 8 },
			{ "30Rnd_556x45_Stanag", "", 25 },
            { "30Rnd_9x21_Mag", "", 20 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 50, -1 },
            { "ItemGPS", "", 125, 45 },
            { "ItemMap", "", 1, -1 },
            { "ItemCompass", "", 25, 10 },
            { "ItemWatch", "", 10, -1 },
            { "FirstAidKit", "", 5, -1 },
            { "NVGoggles", "", 750, -1},
            { "Chemlight_red", "", 1, -1 },
            { "Chemlight_yellow", "", 1, -1 },
            { "Chemlight_green", "", 1, -1 },
            { "Chemlight_blue", "", 1, -1 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 50, -1 },
            { "ItemGPS", "", 125, 45 },
            { "ItemMap", "", 1, -1 },
            { "ItemCompass", "", 25, 10 },
            { "ItemWatch", "", 10, -1 },
            { "FirstAidKit", "", 5, -1 },
            { "NVGoggles", "", 750, -1 },
            { "Chemlight_red", "", 1, -1 },
            { "Chemlight_yellow", "", 1, -1 },
            { "Chemlight_green", "", 1, -1 },
            { "Chemlight_blue", "", 1, -1 }
        };
        mags[] = {};
    };
	
	class vip1 {
        name = "STR_Shop_vip1_Weapon";
        side = "civ";
        license = "vip1";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Rook40_F", "", 405, -1 },
			{ "hgun_Pistol_heavy_02_F", "", 135, -1 },
			{ "hgun_PDW2000_F", "", 900 },
			{ "arifle_Mk20_F", "", 2025 },
			{ "arifle_TRG21_F", "", 2250 },
			{ "SMG_01_F", "", 2000 },
			{ "LMG_Zafir_F", "", 9000 },
			{ "srifle_DMR_01_F", "", 3600 },
			{ "srifle_DMR_04_F", "", 9000 },
			{ "srifle_DMR_04_Tan_F", "", 10000 },
			{ "srifle_EBR_F", "", 3000 },
			{ "muzzle_snds_acp", "", 50 },
            { "muzzle_snds_L", "", 50 },
			{ "srifle_GM6_camo_F", "GM6 Lynx 12.7 mm (Camo)", 15000 },
			{ "srifle_LRR_camo_F", "M320 LRR .408 (Camo)", 12500 },
            { "optic_Aco", "", 25 },
            { "optic_ACO_grn", "", 25 },
			{ "acc_flashlight", "", 25 },
			{ "optic_MRCO", "", 270 },
			{ "optic_SOS", "", 270 },
			{ "optic_DMS", "", 450 },
			{ "optic_Arco", "", 270 },
			{ "optic_Hamr", "", 270 },
			{ "optic_LRPS", "", 900 },
			{ "optic_MRD", "", 90 },
			{ "optic_Yorris", "", 90 },
			{ "optic_Holosight_smg", "", 90 },
			{ "optic_Holosight", "", 135 },
			{ "optic_Aco_smg", "", 90 },
			{ "optic_AMS_khk", "", 450 },
			{ "optic_AMS_snd", "", 450 },
			{ "optic_AMS", "", 450 },
			{ "optic_KHS_blk", "", 500 },
			{ "optic_KHS_hex", "", 500 },
			{ "optic_KHS_tan", "", 500 },
			{ "optic_KHS_old", "", 500 },
			{ "bipod_01_F_snd", "", 13 },
			{ "bipod_01_F_blk", "", 13 },
			{ "bipod_01_F_mtp", "", 13 },
			{ "bipod_02_F_blk", "", 13 },
			{ "bipod_02_F_tan", "", 13 },
			{ "bipod_02_F_hex", "", 13 },
			{ "bipod_03_F_blk", "", 13 },
			{ "bipod_03_F_oli", "", 13 },
			{ "NVGoggles", "", 675 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 10 },
            { "6Rnd_45ACP_Cylinder", "", 8 },
			{ "30Rnd_556x45_Stanag", "", 25 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 25 },
			{ "10Rnd_762x54_Mag", "", 25 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "150Rnd_762x54_Box", "", 50 },
            { "150Rnd_762x54_Box_Tracer", "", 75 },
			{ "10Rnd_338_Mag", "", 50 },
			{ "7Rnd_408_Mag", "", 75 },
			{ "5Rnd_127x108_Mag", "", 100 },
			{ "5Rnd_127x108_APDS_Mag", "", 150 },
            { "10Rnd_127x54_Mag", "", 50 },			
            { "30Rnd_9x21_Mag", "", 20 }
        };
    };

	class vip2 {
        name = "STR_Shop_vip2_Weapon";
        side = "civ";
        license = "vip2";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 385 },
			{ "hgun_Pistol_heavy_02_F", "", 128, },
			{ "hgun_PDW2000_F", "", 855 },
			{ "arifle_Mk20_F", "", 1925 },
			{ "arifle_TRG21_F", "", 2136 },
			{ "SMG_01_F", "", 1900 },
			{ "LMG_Zafir_F", "", 8550 },
			{ "arifle_Katiba_F", "", 3088 },
			{ "srifle_DMR_05_blk_F", "", 6650 },
			{ "srifle_DMR_05_hex_F", "", 6650 },
			{ "srifle_DMR_05_tan_f", "", 6650 },
			{ "srifle_DMR_01_F", "", 3420 },
			{ "srifle_EBR_F", "", 2850 },
			{ "srifle_DMR_04_F", "", 8550 },
			{ "srifle_DMR_04_Tan_F", "", 8550 },
			{ "muzzle_snds_acp", "", 50 },
            { "muzzle_snds_L", "", 50 },
			{ "muzzle_snds_B", "", 50 },
			{ "muzzle_snds_H", "", 50 },
            { "optic_Aco", "", 25 },
            { "optic_ACO_grn", "", 25 },
			{ "acc_flashlight", "", 25 },
			{ "optic_MRCO", "", 257 },
			{ "optic_SOS", "", 256 },
			{ "optic_DMS", "", 428 },
			{ "optic_Arco", "", 255 },
			{ "optic_Hamr", "", 255 },
			{ "optic_LRPS", "", 855 },
			{ "optic_MRD", "", 90 },
			{ "optic_Yorris", "", 90 },
			{ "optic_Holosight_smg", "", 90 },
			{ "optic_Holosight", "", 135 },
			{ "optic_Aco_smg", "", 90 },
			{ "optic_AMS_khk", "", 428 },
			{ "optic_AMS_snd", "", 428 },
			{ "optic_AMS", "", 428 },
			{ "optic_KHS_blk", "", 475 },
			{ "optic_KHS_hex", "", 475 },
			{ "optic_KHS_tan", "", 475 },
			{ "optic_KHS_old", "", 475 },
			{ "bipod_01_F_snd", "", 13 },
			{ "bipod_01_F_blk", "", 13 },
			{ "bipod_01_F_mtp", "", 13 },
			{ "bipod_02_F_blk", "", 13 },
			{ "bipod_02_F_tan", "", 13 },
			{ "bipod_02_F_hex", "", 13 },
			{ "bipod_03_F_blk", "", 13 },
			{ "bipod_03_F_oli", "", 13 },
			{ "NVGoggles", "", 640 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 10 },
            { "6Rnd_45ACP_Cylinder", "", 8 },
			{ "30Rnd_556x45_Stanag", "", 25 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 25 },
			{ "10Rnd_762x54_Mag", "", 25 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "150Rnd_762x54_Box", "", 50 },
            { "150Rnd_762x54_Box_Tracer", "", 75 },
            { "10Rnd_127x54_Mag", "", 50 },
			{ "7Rnd_408_Mag", "", 75 },
			{ "5Rnd_127x108_Mag", "", 100 },
			{ "5Rnd_127x108_APDS_Mag", "", 150 },
            { "10Rnd_93x64_DMR_05_Mag", "", 50 },
            { "30Rnd_9x21_Mag", "", 20 }
        };
    };
	
	class vip3 {
        name = "STR_Shop_vip3_Weapon";
        side = "civ";
        license = "vip3";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 375 },
			{ "hgun_Pistol_heavy_02_F", "", 123 },
			{ "hgun_PDW2000_F", "", 833 },
			{ "SMG_01_F", "", 1853 },
			{ "arifle_Mk20_F", "", 1877 },
			{ "arifle_TRG21_F", "", 2188 },
			{ "arifle_Katiba_F", "", 3010 },
			{ "srifle_DMR_05_blk_F", "", 6484 },
			{ "srifle_DMR_05_hex_F", "", 6484 },
			{ "srifle_DMR_05_tan_f", "", 6484 },
			{ "srifle_DMR_01_F", "", 3333 },
			{ "srifle_EBR_F", "", 2779 },
			{ "srifle_DMR_02_F", "", 7800 },
			{ "srifle_DMR_02_camo_F", "", 7800 },
			{ "srifle_DMR_02_sniper_F", "", 7800 },
			{ "srifle_DMR_04_F", "", 8337 },
			{ "srifle_DMR_04_Tan_F", "", 8337 },
			{ "LMG_Zafir_F", "", 8336 },
			{ "muzzle_snds_acp", "", 50 },
            { "muzzle_snds_L", "", 50 },
			{ "muzzle_snds_B", "", 50 },
			{ "muzzle_snds_H", "", 50 },
            { "optic_Aco", "", 25 },
            { "optic_ACO_grn", "", 25 },
			{ "acc_flashlight", "", 25 },
			{ "optic_MRCO", "", 250 },
			{ "optic_SOS", "", 250 },
			{ "optic_DMS", "", 250 },
			{ "optic_Arco", "", 250 },
			{ "optic_Hamr", "", 250 },
			{ "optic_LRPS", "", 825 },
			{ "optic_MRD", "", 90 },
			{ "optic_Yorris", "", 90 },
			{ "optic_Holosight_smg", "", 90 },
			{ "optic_Holosight", "", 130 },
			{ "optic_Aco_smg", "", 90 },
			{ "optic_AMS_khk", "", 415 },
			{ "optic_AMS_snd", "", 415 },
			{ "optic_AMS", "", 415 },
			{ "optic_KHS_blk", "", 460 },
			{ "optic_KHS_hex", "", 460 },
			{ "optic_KHS_tan", "", 460 },
			{ "optic_KHS_old", "", 460 },
			{ "bipod_01_F_snd", "", 13 },
			{ "bipod_01_F_blk", "", 13 },
			{ "bipod_01_F_mtp", "", 13 },
			{ "bipod_02_F_blk", "", 13 },
			{ "bipod_02_F_tan", "", 13 },
			{ "bipod_02_F_hex", "", 13 },
			{ "bipod_03_F_blk", "", 13 },
			{ "bipod_03_F_oli", "", 13 },
			{ "NVGoggles", "", 620 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 10 },
            { "6Rnd_45ACP_Cylinder", "", 8 },
			{ "30Rnd_556x45_Stanag", "", 25 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 25 },
			{ "10Rnd_762x54_Mag", "", 25 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "10Rnd_338_Mag", "", 50 },
            { "150Rnd_762x54_Box", "", 50 },
            { "150Rnd_762x54_Box_Tracer", "", 50 },
			{ "7Rnd_408_Mag", "", 75 },
			{ "5Rnd_127x108_Mag", "", 100 },
			{ "5Rnd_127x108_APDS_Mag", "", 150 },
            { "10Rnd_127x54_Mag", "", 50 },
            { "10Rnd_93x64_DMR_05_Mag", "", 50 },
            { "30Rnd_9x21_Mag", "", 20 }
        };
    };
	
	class vip4 {
        name = "STR_Shop_vip4_Weapon";
        side = "civ";
        license = "vip4";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 367 },
            { "hgun_Pistol_heavy_02_F", "", 120 },
            { "hgun_PDW2000_F", "", 816 },
			{ "SMG_01_Holo_pointer_snds_F", "", 1840 },
			{ "srifle_DMR_05_blk_F", "", 6354 },
			{ "srifle_DMR_05_hex_F", "", 6354 },
			{ "srifle_DMR_05_tan_f", "", 6354 },
			{ "srifle_DMR_02_F", "", 7644 },
			{ "srifle_DMR_02_camo_F", "", 7644 },
			{ "srifle_DMR_02_sniper_F", "", 7644 },
			{ "srifle_EBR_F", "", 3266 },
			{ "srifle_DMR_04_F", "", 8171 },
			{ "srifle_DMR_04_Tan_F", "", 8171 },
			{ "MMG_01_tan_F", "", 12250 },
			{ "MMG_01_hex_F", "", 12250 },
			{ "LMG_Mk200_F", "", 7840 },
			{ "LMG_Zafir_F", "", 9800 },
			{ "srifle_GM6_F", "", 14700 },
			{ "srifle_GM6_camo_F", "GM6 Lynx 12.7 mm (Camo)", 14700 },
			{ "srifle_LRR_camo_F", "M320 LRR .408 (Camo)", 7600 },
			{ "srifle_LRR_F", "", 7600 },
			{ "arifle_Katiba_F", "", 2950 },
			{ "muzzle_snds_acp", "", 50 },
            { "muzzle_snds_L", "", 50 },
			{ "muzzle_snds_B", "", 50 },
			{ "muzzle_snds_H", "", 50 },
            { "optic_Nightstalker", "", 2450 },
			{ "optic_Aco", "", 25 },
            { "optic_ACO_grn", "", 25 },
			{ "acc_flashlight", "", 25 },
			{ "optic_MRCO", "", 245 },
			{ "optic_SOS", "", 245 },
			{ "optic_DMS", "", 245 },
			{ "optic_Arco", "", 245 },
			{ "optic_Hamr", "", 245 },
			{ "optic_LRPS", "", 808 },
			{ "optic_MRD", "", 90 },
			{ "optic_Yorris", "", 90 },
			{ "optic_Holosight_smg", "", 90 },
			{ "optic_Holosight", "", 130 },
			{ "optic_Aco_smg", "", 25 },
			{ "optic_AMS_khk", "", 406 },
			{ "optic_AMS_snd", "", 406 },
			{ "optic_AMS", "", 406 },
			{ "optic_KHS_blk", "", 450 },
			{ "optic_KHS_hex", "", 450 },
			{ "optic_KHS_tan", "", 450 },
			{ "optic_KHS_old", "", 450 },
			{ "bipod_01_F_snd", "", 13 },
			{ "bipod_01_F_blk", "", 13 },
			{ "bipod_01_F_mtp", "", 13 },
			{ "bipod_02_F_blk", "", 13 },
			{ "bipod_02_F_tan", "", 13 },
			{ "bipod_02_F_hex", "", 13 },
			{ "bipod_03_F_blk", "", 13 },
			{ "bipod_03_F_oli", "", 13 },
			{ "NVGoggles", "", 607 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 10 },
            { "6Rnd_45ACP_Cylinder", "", 8 },
			{ "200Rnd_65x39_cased_Box", "", 50 },
			{ "150Rnd_93x64_Mag", "", 50 },
			{ "150Rnd_762x54_Box", "", 50 },
			{ "150Rnd_762x54_Box_Tracer", "", 50 },
			{ "10Rnd_338_Mag", "", 50 },
			{ "7Rnd_408_Mag", "", 75 },
			{ "5Rnd_127x108_Mag", "", 100 },
			{ "5Rnd_127x108_APDS_Mag", "", 150 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 50 },
			{ "10Rnd_127x54_Mag", "", 50 },
            { "30Rnd_9x21_Mag", "", 20 }
        };
    };
	
	class vip5 {
        name = "STR_Shop_vip5_Weapon";
        side = "civ";
        license = "vip5";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Pistol_heavy_01_F", "", 200 },
            { "hgun_Rook40_F", "", 350 },
            { "hgun_Pistol_heavy_02_F", "", 100 },
            { "hgun_PDW2000_F", "", 800 },
			{ "SMG_01_Holo_pointer_snds_F", "", 1800 },
			{ "arifle_MXC_F", "", 3000 },
			{ "srifle_DMR_01_F", "", 3000 },
			{ "srifle_EBR_F", "", 3000 },
			{ "arifle_Katiba_F", "", 2500 },
			{ "arifle_MX_SW_F", "", 5000 },
			{ "arifle_MXM_F", "", 3750 },
			{ "srifle_DMR_02_F", "", 7500 },
			{ "srifle_DMR_02_camo_F", "", 7500 },
			{ "srifle_DMR_02_sniper_F", "", 7500 },
			{ "srifle_DMR_04_F", "", 8000 },
			{ "srifle_DMR_04_Tan_F", "", 8000 },
			{ "srifle_DMR_05_blk_F", "", 8000 },
			{ "srifle_DMR_05_hex_F", "", 8000 },
			{ "srifle_DMR_05_tan_f", "", 8000 },
			{ "srifle_GM6_F", "", 14000 },
			{ "srifle_GM6_camo_F", "GM6 Lynx 12.7 mm (Camo)", 14000 },
			{ "srifle_LRR_F", "", 7400 },
			{ "srifle_LRR_camo_F", "", 7400 },
			{ "MMG_01_tan_F", "", 12000 },
			{ "MMG_01_hex_F", "", 12000 },
			{ "MMG_02_camo_F", "", 5000 },
			{ "MMG_02_black_F", "", 5000 },
			{ "MMG_02_sand_F", "", 5000 },
			{ "LMG_Mk200_F", "", 5000 },
			{ "LMG_Zafir_F", "", 5000 },
		    { "launch_RPG32_F", "", 20000 },
            { "optic_Nightstalker", "", 2250 },
			{ "optic_Aco", "", 50 },
            { "optic_ACO_grn", "", 75 },
			{ "acc_flashlight", "", 75 },
			{ "optic_MRCO", "", 230 },
			{ "optic_SOS", "", 230 },
			{ "optic_DMS", "", 230 },
			{ "optic_Arco", "", 230 },
			{ "optic_Hamr", "", 230 },
			{ "optic_LRPS", "", 750 },
			{ "optic_MRD", "", 90 },
			{ "optic_Yorris", "", 90 },
			{ "optic_Holosight_smg", "", 90 },
			{ "optic_Holosight", "", 120 },
			{ "optic_Aco_smg", "", 25 },
			{ "optic_AMS_khk", "", 350 },
			{ "optic_AMS_snd", "", 350 },
			{ "optic_AMS", "", 350 },
			{ "optic_KHS_blk", "", 400 },
			{ "optic_KHS_hex", "", 400 },
			{ "optic_KHS_tan", "", 400 },
			{ "optic_KHS_old", "", 400 },
			{ "bipod_01_F_snd", "", 13 },
			{ "bipod_01_F_blk", "", 13 },
			{ "bipod_01_F_mtp", "", 13 },
			{ "bipod_02_F_blk", "", 13 },
			{ "bipod_02_F_tan", "", 13 },
			{ "bipod_02_F_hex", "", 13 },
			{ "bipod_03_F_blk", "", 13 },
			{ "bipod_03_F_oli", "", 13 },
			{ "muzzle_snds_acp", "", 25 },
			{ "muzzle_snds_M", "", 25 },
			{ "muzzle_snds_H_MG", "", 25 },
			{ "muzzle_snds_H_SW", "", 25 },
			{ "muzzle_snds_B", "", 25 },
			{ "muzzle_snds_L", "", 25 },
			{ "muzzle_snds_H", "", 25 },
			{ "HandGrenade", "", 50000 },
			{ "IEDUrbanSmall_Remote_Mag", "", 50000 },
			{ "NVGoggles", "", 1000 }
        };
        mags[] = {
			{ "11Rnd_45ACP_Mag", "", 50 },
            { "16Rnd_9x21_Mag", "", 50 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
			{ "10Rnd_762x54_Mag", "", 50 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "30Rnd_65x39_caseless_green", "", 50 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 50 },
			{ "30Rnd_65x39_caseless_mag", "", 50 },
			{ "100Rnd_65x39_caseless_mag", "", 50 },
			{ "130Rnd_338_Mag", "", 50 },
			{ "150Rnd_762x54_Box", "", 50 },
			{ "150Rnd_762x54_Box_Tracer", "", 50 },
			{ "150Rnd_93x64_Mag", "", 50 },
			{ "200Rnd_65x39_cased_Box", "", 50 },
			{ "10Rnd_338_Mag", "", 50 },
			{ "5Rnd_127x108_Mag", "", 50 },
			{ "5Rnd_127x108_APDS_Mag", "", 50 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 50 },
			{ "10Rnd_127x54_Mag", "", 50 },
			{ "7Rnd_408_Mag", "", 50 },
            { "30Rnd_9x21_Mag", "", 50 },
			{ "RPG32_F", "", 50000 }
	   };
    };
	
	class TRS {
        name = "STR_Shop_TRS_Weapon";
        side = "civ";
        license = "TRS";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Pistol_heavy_01_F", "", 500, -1 },
            { "hgun_Rook40_F", "", 450 },
            { "hgun_Pistol_heavy_02_F", "", 250, -1 },
            { "hgun_PDW2000_F", "", 1000, -1 },
			{ "SMG_01_Holo_pointer_snds_F", "", 100 },
			{ "arifle_MXC_F", "", 3250 },
			{ "srifle_DMR_01_F", "", 4000 },
			{ "srifle_EBR_F", "", 7000 },
			{ "arifle_Katiba_F", "", 3250 },
			{ "arifle_MX_SW_F", "", 7500 },
			{ "arifle_MXM_F", "", 4000 },
			{ "srifle_DMR_02_F", "", 8000 },
			{ "srifle_DMR_04_F", "", 10000 },
			{ "srifle_DMR_05_blk_F", "", 11250 },
			{ "srifle_GM6_F", "", 15000 },
			{ "srifle_LRR_F", "", 12500 },
			{ "MMG_01_tan_F", "", 12500 },
			{ "LMG_Mk200_F", "", 8000 },
			{ "LMG_Zafir_F", "", 10000 },
			{ "optic_Aco", "", 50 },
            { "optic_ACO_grn", "", 75 },
			{ "acc_flashlight", "", 150 },
			{ "optic_MRCO", "", 300 },
			{ "optic_SOS", "", 675 },
			{ "optic_DMS", "", 500 },
			{ "optic_Arco", "", 300 },
			{ "optic_Hamr", "", 300 },
			{ "optic_LRPS", "", 1000 },
			{ "optic_MRD", "", 100 },
			{ "optic_Yorris", "", 100 },
			{ "optic_Holosight_smg", "", 100 },
			{ "optic_Holosight", "", 150 },
			{ "optic_Aco_smg", "", 25 },
			{ "optic_AMS_khk", "", 500 },
			{ "optic_AMS_snd", "", 500 },
			{ "optic_AMS", "", 500 },
			{ "optic_KHS_blk", "", 450 },
			{ "optic_KHS_hex", "", 475 },
			{ "optic_KHS_tan", "", 475 },
			{ "optic_KHS_old", "", 475 },
			{ "bipod_01_F_snd", "", 125, -1 },
			{ "bipod_01_F_blk", "", 100, -1 },
			{ "bipod_01_F_mtp", "", 125, -1 },
			{ "bipod_02_F_blk", "", 100, -1 },
			{ "bipod_02_F_tan", "", 125, -1 },
			{ "bipod_02_F_hex", "", 125, -1 },
			{ "bipod_03_F_blk", "", 100, -1 },
			{ "bipod_03_F_oli", "", 125, -1 },
			{ "muzzle_snds_acp", "", 100, -1 },
			{ "muzzle_snds_M", "", 100, -1 },
			{ "muzzle_snds_H_MG", "", 100, -1 },
			{ "muzzle_snds_H_SW", "", 100, -1 },
			{ "muzzle_snds_B", "", 100, -1 },
			{ "muzzle_snds_L", "", 100, -1 },
			{ "muzzle_snds_H", "", 100, -1 },
			{ "NVGoggles", "", 750, -1 },
			{ "FirstAidKit", "", 5, -1 }
			
        };
        mags[] = {
			{ "11Rnd_45ACP_Mag", "", 10 },
            { "16Rnd_9x21_Mag", "", 10 },
            { "6Rnd_45ACP_Cylinder", "", 8 },
			{ "10Rnd_762x54_Mag", "", 25 },
			{ "20Rnd_762x51_Mag", "", 50 },
			{ "30Rnd_65x39_caseless_green", "", 30 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 30 },
			{ "30Rnd_65x39_caseless_mag", "", 30 },
			{ "100Rnd_65x39_caseless_mag", "", 50 },
			{ "130Rnd_338_Mag", "", 75 },
			{ "150Rnd_762x54_Box", "", 100 },
			{ "150Rnd_762x54_Box_Tracer", "", 100 },
			{ "150Rnd_93x64_Mag", "", 125 },
			{ "200Rnd_65x39_cased_Box", "", 75 },
			{ "10Rnd_338_Mag", "", 75 },
			{ "5Rnd_127x108_Mag", "", 100 },
			{ "5Rnd_127x108_APDS_Mag", "", 150, -1 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 75 },
			{ "10Rnd_127x54_Mag", "", 75 },
			{ "7Rnd_408_Mag", "", 125 },
            { "30Rnd_9x21_Mag", "", 50 }
		};
	};
    //Cop Shops
    class cop_basic {
        name = "Altis Cadet Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 1, -1 },
            { "hgun_P07_snds_F", "Stun Pistol", 1, -1 },
            { "Binocular", "", 50, -1 },
            { "ItemGPS", "", 125, -1 },
            { "ItemMap", "", 1, -1 },
            { "ItemCompass", "", 25, -1 },
            { "ItemWatch", "", 10, -1 },
            { "muzzle_snds_L", "", 1, -1 },
            { "FirstAidKit", "", 5, -1 },
            { "NVGoggles", "", 750, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 1 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 1 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_Black_F", "", 1, -1 },
			{ "hgun_P07_snds_F", "Stun Pistol", 1, -1 },
            { "SMG_02_ACO_F", "", 500, -1 },
            { "HandGrenade_Stone", "Flashbang", 200, -1 },
			{ "Binocular", "", 10, -1 },
            { "ItemGPS", "", 10, -1 },
            { "ItemMap", "", 1, -1 },
            { "ItemCompass", "", 5, -1 },
            { "ItemWatch", "", 5, -1 },
            { "FirstAidKit", "", 5, -1 },
            { "NVGoggles", "", 5, -1 },
            { "acc_flashlight", "", 10, -1 },
            { "optic_Holosight", "", 100, -1 },
            { "optic_Arco", "", 100, -1 },
            { "muzzle_snds_H", "", 200, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 5 },
            { "30Rnd_9x21_Mag", "", 5 }
        };
    };

    class cop_spatrol {
        name = "Altis Seinor Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Seinor Patrol Officer Rank!" };
        items[] = {
			{ "HandGrenade_Stone", "Flashbang", 200, -1 },
            { "arifle_MX_Black_F", "", 1, -1 },
			{ "arifle_MXC_Black_F", "", 750, -1 },
			{ "arifle_MX_GL_Black_F", "", 1250, -1 },
			{ "hgun_P07_snds_F", "Stun Pistol", 1, -1 },
            { "SMG_02_ACO_F", "", 500, -1 },
			{ "SMG_01_F", "", 750, -1 },
			{ "Binocular", "", 50, -1 },
            { "ItemGPS", "", 10, 45 },
            { "ItemMap", "", 1, -1 },
            { "ItemCompass", "", 5, -1 },
            { "ItemWatch", "", 5, -1 },
            { "FirstAidKit", "", 5, -1 },
            { "NVGoggles", "", 500, -1 },
            { "acc_flashlight", "", 10, -1 },
            { "optic_Holosight", "", 100, 275 },
            { "optic_Arco", "", 100, -1 },
			{ "optic_AMS_khk", "", 450 },
			{ "optic_AMS_snd", "", 450 },
			{ "optic_AMS", "", 450 },
			{ "optic_KHS_blk", "", 500 },
			{ "optic_KHS_hex", "", 500 },
			{ "optic_KHS_tan", "", 500 },
			{ "optic_KHS_old", "", 500 },
            { "muzzle_snds_H", "", 100, -1 },
			{ "UGL_FlareWhite_F", "", 25 },
			{ "UGL_FlareGreen_F", "", 25 },
			{ "UGL_FlareRed_F", "", 25 },
			{ "UGL_FlareYellow_F", "", 25 },
            { "UGL_FlareCIR_F", "", 25 },
			{ "1Rnd_Smoke_Grenade_shell", "", 25 },
			{ "1Rnd_SmokeRed_Grenade_shell", "", 25 },
			{ "1Rnd_SmokeGreen_Grenade_shell", "", 25 },
			{ "1Rnd_SmokeYellow_Grenade_shell", "", 25 },
			{ "1Rnd_SmokePurple_Grenade_shell", "", 25 },
			{ "1Rnd_SmokeBlue_Grenade_shell", "", 25 },
			{ "1Rnd_SmokeOrange_Grenade_shell", "", 25 }
        };
        mags[] = {
			{ "30Rnd_9x21_Mag", "", 10 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 15 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 25 },
            { "30Rnd_65x39_caseless_mag", "", 30 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 35 }
        };
    };	
	
    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Sergeant Rank!" };
        items[] = {
			{ "Binocular", "", 50, -1 },
            { "ItemGPS", "", 10, -1 },
            { "ItemMap", "", 1, -1 },
            { "ItemCompass", "", 5, -1 },
            { "ItemWatch", "", 5, -1 },
            { "FirstAidKit", "", 5, -1 },
            { "NVGoggles", "", 500, -1 },
            { "hgun_P07_snds_F", "Stun Pistol", 1, -1 },
            { "SMG_02_ACO_F", "", 500, -1 },
			{ "SMG_01_F", "", 750, -1 },
            { "arifle_MX_Black_F", "", 1, -1 },
			{ "arifle_MXC_Black_F", "", 750, -1 },
			{ "arifle_MX_GL_Black_F", "", 1250, -1 },
			{ "arifle_MX_SW_Black_F", "", 2000, -1 },
			{ "arifle_MXM_Black_F", "", 2250, -1 },
			{ "srifle_DMR_03_F", "", 3000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 3250, -1 },
			{ "srifle_DMR_03_tan_F", "", 3250, -1 },
			{ "srifle_DMR_03_multicam_F", "", 3250, -1 },
			{ "srifle_DMR_03_woodland_F", "", 3250, -1 },
			{ "srifle_EBR_MRCO_LP_BI_F", "", 3500, -1 },
			{ "LMG_Mk200_F", "", 4000, -1 },
            { "HandGrenade_Stone", "Flashbang", 200, -1 },
            { "optic_Arco", "", 100, -1 },
			{ "optic_AMS_khk", "", 450 },
			{ "optic_AMS_snd", "", 450 },
			{ "optic_AMS", "", 450 },
			{ "optic_KHS_blk", "", 500 },
			{ "optic_KHS_hex", "", 500 },
			{ "optic_KHS_tan", "", 500 },
			{ "optic_KHS_old", "", 500 },
            { "muzzle_snds_H", "", 100, -1 },
			{ "UGL_FlareWhite_F", "", 25 },
			{ "UGL_FlareGreen_F", "", 25 },
			{ "UGL_FlareRed_F", "", 25 },
			{ "UGL_FlareYellow_F", "", 25 },
            { "UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_UGL_FlareWhite_F", "", 25 },
			{ "3Rnd_UGL_FlareGreen_F", "", 25 },
			{ "3Rnd_UGL_FlareRed_F", "", 25 },
			{ "3Rnd_UGL_FlareYellow_F", "", 25 },
			{ "3Rnd_UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_Smoke_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeRed_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeGreen_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeYellow_Grenade_shell", "", 25 },
			{ "3Rnd_SmokePurple_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeBlue_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeOrange_Grenade_shell", "", 25 }
        };
        mags[] = {
			{ "30Rnd_45ACP_Mag_SMG_01", "", 15 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 25 },
			{ "30Rnd_9x21_Mag", "", 10 },
			{ "20Rnd_762x51_Mag", "", 25, -1 },
			{ "200Rnd_65x39_cased_Box", "", 50, -1 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 75, -1 },
            { "30Rnd_65x39_caseless_mag", "", 30, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 35, -1 },
			{ "100Rnd_65x39_caseless_mag", "", 50, -1 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 75, -1 }
        };
    };
	
	class cop_lieutenant {
        name = "Altis Lieutenant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Lieutenant Rank!" };
        items[] = {
			{ "Binocular", "", 50, -1 },
            { "ItemGPS", "", 10, -1 },
            { "ItemMap", "", 1, -1 },
            { "ItemCompass", "", 5, -1 },
            { "ItemWatch", "", 5, -1 },
            { "FirstAidKit", "", 5, -1 },
            { "NVGoggles", "", 500, -1 },	
            { "hgun_P07_snds_F", "Stun Pistol", 1, -1 },
            { "SMG_02_ACO_F", "", 500, -1 },
			{ "SMG_01_F", "", 750, -1 },
            { "arifle_MXC_F", "", 750, -1 },
			{ "arifle_MX_Black_F", "", 1, -1 },
			{ "arifle_MXC_Black_F", "", 35000, -1 },
			{ "arifle_MX_GL_Black_F", "", 1250, -1 },
			{ "arifle_MX_SW_Black_F", "", 2000, -1 },
			{ "arifle_MXM_Black_F", "", 2250, -1 },
			{ "srifle_DMR_03_F", "", 3000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 3250, -1 },
			{ "srifle_DMR_03_tan_F", "", 3250, -1 },
			{ "srifle_DMR_03_multicam_F", "", 3250, -1 },
			{ "srifle_DMR_03_woodland_F", "", 3250, -1 },
			{ "srifle_EBR_MRCO_LP_BI_F", "", 3500, -1 },
			{ "srifle_DMR_05_blk_F", "", 5000 },
			{ "srifle_DMR_05_hex_F", "", 5250 },
			{ "srifle_DMR_05_tan_f", "", 5250 },
			{ "LMG_Mk200_F", "", 4000, -1 },
            { "HandGrenade_Stone", "Flashbang", 200, -1 },
            { "optic_Arco", "", 100, -1 },
			{ "optic_AMS_khk", "", 450 },
			{ "optic_AMS_snd", "", 450 },
			{ "optic_AMS", "", 450 },
			{ "optic_KHS_blk", "", 500 },
			{ "optic_KHS_hex", "", 500 },
			{ "optic_KHS_tan", "", 500 },
			{ "optic_KHS_old", "", 500 },
            { "muzzle_snds_H", "", 100, -1 },
			{ "UGL_FlareWhite_F", "", 25 },
			{ "UGL_FlareGreen_F", "", 25 },
			{ "UGL_FlareRed_F", "", 25 },
			{ "UGL_FlareYellow_F", "", 25 },
            { "UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_UGL_FlareWhite_F", "", 25 },
			{ "3Rnd_UGL_FlareGreen_F", "", 25 },
			{ "3Rnd_UGL_FlareRed_F", "", 25 },
			{ "3Rnd_UGL_FlareYellow_F", "", 25 },
			{ "3Rnd_UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_Smoke_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeRed_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeGreen_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeYellow_Grenade_shell", "", 25 },
			{ "3Rnd_SmokePurple_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeBlue_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeOrange_Grenade_shell", "", 25 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 10 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 75, -1 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 15 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 25 },
			{ "20Rnd_762x51_Mag", "", 25, -1 },
			{ "200Rnd_65x39_cased_Box", "", 50, -1 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 75, -1 },
            { "30Rnd_65x39_caseless_mag", "", 30, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 35, -1 },
			{ "100Rnd_65x39_caseless_mag", "", 50, -1 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 75, -1 }
		};
    };
	
	class cop_captain {
        name = "Altis Captain Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be a Captain Rank!" };
        items[] = {
			{ "Binocular", "", 50, -1 },
            { "ItemGPS", "", 10, -1 },
            { "ItemMap", "", 1, -1 },
            { "ItemCompass", "", 5, -1 },
            { "ItemWatch", "", 5, -1 },
            { "FirstAidKit", "", 5, -1 },
            { "NVGoggles", "", 500, -1 },	
            { "hgun_P07_snds_F", "Stun Pistol", 1, -1 },
            { "SMG_02_ACO_F", "", 500, -1 },
			{ "SMG_01_F", "", 750, -1 },
            { "arifle_MXC_F", "", 750, -1 },
			{ "arifle_MX_Black_F", "", 1, -1 },
			{ "arifle_MXC_Black_F", "", 35000, -1 },
			{ "arifle_MX_GL_Black_F", "", 1250, -1 },
			{ "arifle_MX_SW_Black_F", "", 2000, -1 },
			{ "arifle_MXM_Black_F", "", 2250, -1 },
			{ "srifle_DMR_03_F", "", 3000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 3250, -1 },
			{ "srifle_DMR_03_tan_F", "", 3250, -1 },
			{ "srifle_DMR_03_multicam_F", "", 3250, -1 },
			{ "srifle_DMR_03_woodland_F", "", 3250, -1 },
			{ "srifle_EBR_MRCO_LP_BI_F", "", 3500, -1 },
			{ "srifle_DMR_05_blk_F", "", 5000 },
			{ "srifle_DMR_05_hex_F", "", 5250 },
			{ "srifle_DMR_05_tan_f", "", 5250 },
			{ "LMG_Mk200_F", "", 4000, -1 },
            { "HandGrenade_Stone", "Flashbang", 200, -1 },
            { "optic_Arco", "", 100, -1 },
			{ "optic_AMS_khk", "", 450 },
			{ "optic_AMS_snd", "", 450 },
			{ "optic_AMS", "", 450 },
			{ "optic_KHS_blk", "", 500 },
			{ "optic_KHS_hex", "", 500 },
			{ "optic_KHS_tan", "", 500 },
			{ "optic_KHS_old", "", 500 },
            { "muzzle_snds_H", "", 100, -1 },
			{ "UGL_FlareWhite_F", "", 25 },
			{ "UGL_FlareGreen_F", "", 25 },
			{ "UGL_FlareRed_F", "", 25 },
			{ "UGL_FlareYellow_F", "", 25 },
            { "UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_UGL_FlareWhite_F", "", 25 },
			{ "3Rnd_UGL_FlareGreen_F", "", 25 },
			{ "3Rnd_UGL_FlareRed_F", "", 25 },
			{ "3Rnd_UGL_FlareYellow_F", "", 25 },
			{ "3Rnd_UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_Smoke_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeRed_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeGreen_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeYellow_Grenade_shell", "", 25 },
			{ "3Rnd_SmokePurple_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeBlue_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeOrange_Grenade_shell", "", 25 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 10 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 75, -1 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 15 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 25 },
			{ "20Rnd_762x51_Mag", "", 25, -1 },
			{ "200Rnd_65x39_cased_Box", "", 50, -1 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 75, -1 },
            { "30Rnd_65x39_caseless_mag", "", 30, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 35, -1 },
			{ "100Rnd_65x39_caseless_mag", "", 50, -1 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 75, -1 }
        };
    };
	
	class cop_major {
        name = "Altis Major Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be a Major Rank!" };
        items[] = {
			{ "Binocular", "", 50, -1 },
            { "ItemGPS", "", 10, -1 },
            { "ItemMap", "", 1, -1 },
            { "ItemCompass", "", 5, -1 },
            { "ItemWatch", "", 5, -1 },
            { "FirstAidKit", "", 5, -1 },
            { "NVGoggles", "", 500, -1 },	
            { "hgun_P07_snds_F", "Stun Pistol", 1, -1 },
            { "SMG_02_ACO_F", "", 500, -1 },
			{ "SMG_01_F", "", 750, -1 },
            { "arifle_MXC_F", "", 750, -1 },
			{ "arifle_MX_Black_F", "", 1, -1 },
			{ "arifle_MXC_Black_F", "", 35000, -1 },
			{ "arifle_MX_GL_Black_F", "", 1250, -1 },
			{ "arifle_MX_SW_Black_F", "", 2000, -1 },
			{ "arifle_MXM_Black_F", "", 2250, -1 },
			{ "srifle_DMR_03_F", "", 3000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 3250, -1 },
			{ "srifle_DMR_03_tan_F", "", 3250, -1 },
			{ "srifle_DMR_03_multicam_F", "", 3250, -1 },
			{ "srifle_DMR_03_woodland_F", "", 3250, -1 },
			{ "srifle_EBR_MRCO_LP_BI_F", "", 3500, -1 },
			{ "srifle_DMR_05_blk_F", "", 5000 },
			{ "srifle_DMR_05_hex_F", "", 5250 },
			{ "srifle_DMR_05_tan_f", "", 5250 },
			{ "LMG_Mk200_F", "", 4000, -1 },
            { "HandGrenade_Stone", "Flashbang", 200, -1 },
            { "optic_Arco", "", 100, -1 },
			{ "optic_AMS_khk", "", 450 },
			{ "optic_AMS_snd", "", 450 },
			{ "optic_AMS", "", 450 },
			{ "optic_KHS_blk", "", 500 },
			{ "optic_KHS_hex", "", 500 },
			{ "optic_KHS_tan", "", 500 },
			{ "optic_KHS_old", "", 500 },
            { "muzzle_snds_H", "", 100, -1 },
			{ "UGL_FlareWhite_F", "", 25 },
			{ "UGL_FlareGreen_F", "", 25 },
			{ "UGL_FlareRed_F", "", 25 },
			{ "UGL_FlareYellow_F", "", 25 },
            { "UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_UGL_FlareWhite_F", "", 25 },
			{ "3Rnd_UGL_FlareGreen_F", "", 25 },
			{ "3Rnd_UGL_FlareRed_F", "", 25 },
			{ "3Rnd_UGL_FlareYellow_F", "", 25 },
			{ "3Rnd_UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_Smoke_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeRed_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeGreen_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeYellow_Grenade_shell", "", 25 },
			{ "3Rnd_SmokePurple_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeBlue_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeOrange_Grenade_shell", "", 25 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 10 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 75, -1 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 15 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 25 },
			{ "20Rnd_762x51_Mag", "", 25, -1 },
			{ "200Rnd_65x39_cased_Box", "", 50, -1 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 75, -1 },
            { "30Rnd_65x39_caseless_mag", "", 30, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 35, -1 },
			{ "100Rnd_65x39_caseless_mag", "", 50, -1 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 75, -1 }
        };
    };
	
	class cop_deputy {
        name = "Altis Deputy Chief Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "You must be a Deputy Chief Rank!" };
        items[] = {
			{ "Binocular", "", 50 },
            { "ItemGPS", "", 10 },
            { "ItemMap", "", 1 },
            { "ItemCompass", "", 5 },
            { "ItemWatch", "", 5 },
            { "FirstAidKit", "", 5 },
            { "NVGoggles", "", 500 },	
            { "hgun_P07_snds_F", "Stun Pistol", 1 },
            { "SMG_02_ACO_F", "", 500 },
			{ "SMG_01_F", "", 750 },
            { "arifle_MXC_F", "", 750 },
			{ "arifle_MX_Black_F", "", 1 },
			{ "arifle_MXC_Black_F", "", 35000 },
			{ "arifle_MX_GL_Black_F", "", 1250 },
			{ "arifle_MX_SW_Black_F", "", 2000 },
			{ "arifle_MXM_Black_F", "", 2250 },
			{ "srifle_DMR_03_F", "", 3000 },
			{ "srifle_DMR_03_khaki_F", "", 3250 },
			{ "srifle_DMR_03_tan_F", "", 3250 },
			{ "srifle_DMR_03_multicam_F", "", 3250 },
			{ "srifle_DMR_03_woodland_F", "", 3250 },
			{ "srifle_EBR_MRCO_LP_BI_F", "", 3500 },
			{ "srifle_DMR_05_blk_F", "", 5000 },
			{ "srifle_DMR_05_hex_F", "", 5250 },
			{ "srifle_DMR_05_tan_f", "", 5250 },
			{ "LMG_Mk200_F", "", 4000 },
            { "HandGrenade_Stone", "Flashbang", 200 },
            { "optic_Arco", "", 100 },
			{ "optic_AMS_khk", "", 350 },
			{ "optic_AMS_snd", "", 350 },
			{ "optic_AMS", "", 350 },
			{ "optic_KHS_blk", "", 400 },
			{ "optic_KHS_hex", "", 400 },
			{ "optic_KHS_tan", "", 400 },
			{ "optic_KHS_old", "", 400 },
            { "muzzle_snds_H", "", 100 },
			{ "UGL_FlareWhite_F", "", 25 },
			{ "UGL_FlareGreen_F", "", 25 },
			{ "UGL_FlareRed_F", "", 25 },
			{ "UGL_FlareYellow_F", "", 25 },
            { "UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_UGL_FlareWhite_F", "", 25 },
			{ "3Rnd_UGL_FlareGreen_F", "", 25 },
			{ "3Rnd_UGL_FlareRed_F", "", 25 },
			{ "3Rnd_UGL_FlareYellow_F", "", 25 },
			{ "3Rnd_UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_Smoke_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeRed_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeGreen_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeYellow_Grenade_shell", "", 25 },
			{ "3Rnd_SmokePurple_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeBlue_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeOrange_Grenade_shell", "", 25 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 10 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 75 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 15 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 25 },
			{ "20Rnd_762x51_Mag", "", 25 },
			{ "200Rnd_65x39_cased_Box", "", 50 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 75 },
            { "30Rnd_65x39_caseless_mag", "", 30 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 35 },
			{ "100Rnd_65x39_caseless_mag", "", 50 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 75 }
        };
    };
	
	class cop_swat_chief {
        name = "Altis SWAT Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 10, "You must be a SWAT Ranked!" };
        items[] = { 
			{ "Binocular", "", 50 },
			{ "Rangefinder", "", 100 },
            { "ItemGPS", "", 10 },
            { "ItemMap", "", 1 },
            { "ItemCompass", "", 5 },
            { "ItemWatch", "", 5 },
            { "FirstAidKit", "", 5 },
            { "NVGoggles", "", 500 },
            { "hgun_P07_snds_F", "Stun Pistol", 100 },  
			{ "hgun_Pistol_heavy_02_F", "Chief Pistol", 100 },
			{ "SMG_01_Holo_pointer_snds_F", "Vermin SMG", 750 },
            { "arifle_MXC_F", "", 750 },
			{ "arifle_MX_Black_F", "", 1 },
			{ "arifle_MXC_Black_F", "", 750 },
			{ "arifle_MX_GL_Black_F", "", 1250 },
			{ "arifle_MX_SW_Black_F", "", 2000 },
			{ "arifle_MXM_Black_F", "", 2250 },
			{ "srifle_EBR_F", "", 1500, 1000 },
			{ "srifle_DMR_02_F", "", 3250 },  
			{ "srifle_DMR_02_camo_F", "", 3500 }, 
			{ "srifle_DMR_02_sniper_F", "", 4000 }, 
			{ "srifle_DMR_03_F", "", 3000 },
			{ "srifle_DMR_03_khaki_F", "", 3250 },
			{ "srifle_DMR_03_tan_F", "", 3250 },
			{ "srifle_DMR_03_multicam_F", "", 3250 },
			{ "srifle_DMR_03_woodland_F", "", 3250 },
			{ "srifle_DMR_04_F", "", 8250 },
			{ "srifle_DMR_04_Tan_F", "", 8500 },
			{ "srifle_DMR_05_blk_F", "", 7000 },
			{ "srifle_DMR_05_hex_F", "", 7000 },
			{ "srifle_DMR_05_tan_f", "", 7000 },  
			{ "srifle_DMR_06_camo_F", "", 5500 },
			{ "srifle_DMR_06_olive_F", "", 5500 },
			{ "LMG_Mk200_F", "", 3000 },
			{ "LMG_Zafir_F", "", 5000 },
			{ "MMG_01_hex_F", "", 12000 },  
			{ "MMG_01_tan_F", "", 12000 },  
			{ "MMG_02_camo_F", "", 12000 },  
			{ "MMG_02_black_F", "", 12000 },  
			{ "MMG_02_sand_F", "", 12000 },  
			{ "srifle_LRR_F", "", 7250 },
			{ "srifle_LRR_camo_F", "", 7250 },
			{ "srifle_GM6_F", "", 13500 },
            { "srifle_GM6_camo_F", "", 13500 },
			{ "HandGrenade_Stone", "Flashbang", 100 },
			{ "optic_Arco", "Advanced Rifle Combat Optics", 25 },
			{ "optic_Hamr", "Rifle Combat Optics", 25 },
			{ "optic_Aco", "Advanced Collimator Optics Red", 25 },
			{ "optic_ACO_grn", "Advanced Collimator Optics Green", 25 },
			{ "optic_Aco_smg", "Advanced Collimator Optics Red", 25 },
			{ "optic_ACO_grn_smg", "Advanced Collimator Optics Green", 25 },
			{ "optic_Holosight", "MK17 Holosight", 25 },
			{ "optic_Holosight_smg", "Mk17 Holosight SMG", 25 },
			{ "optic_SOS", "Marksman Optical Sights", 25 },
			{ "acc_flashlight", "Flashlight", 25 },
			{ "acc_pointer_IR", "IR Laser Pointer", 25 },
			{ "optic_MRCO", "MRCO", 25 },
			{ "muzzle_snds_acp", "Sound Suppressor 45 ACP", 25 },
			{ "optic_NVS", "Night Vision Scope", 1000 },
			{ "optic_Nightstalker", "Nightstalker Sight", 2500 },
			{ "optic_tws", "Thermal Weapon Sight", 2500 },
			{ "optic_tws_mg", "Thermal Weapon Sight for Machineguns", 2500 },
			{ "optic_DMS", "Designated Marksman Sight", 25 },
			{ "optic_Yorris", "Yorris J2", 25 },
			{ "optic_MRD", "MRD", 25 },
			{ "optic_LRPS", "Long-Range Precision Scope", 500},
			{ "muzzle_snds_H", "Sound Suppressor 6.5 mm", 50 },
			{ "muzzle_snds_B", "Sound Suppressor 7.62 mm", 50 },
			{ "muzzle_snds_338_black", "Sound Suppressor 338 Black", 50 },
			{ "muzzle_snds_338_green", "Sound Suppressor 338 Green", 50 },
			{ "muzzle_snds_338_sand", "Sound Suppressor 338 Sand", 50 },
			{ "muzzle_snds_93mmg", "Sound Suppressor 9.3mm Black", 50 },
			{ "muzzle_snds_93mmg_tan", "Sound Suppressor 9.3mm Tan", 50 },
			{ "optic_AMS", "Advanced Marksman Scope Black", 50 },
			{ "optic_AMS_khk", "Advanced Marksman Scope Khaki", 50 },
			{ "optic_AMS_snd", "Advanced Marksman Scope Sand", 50 },
			{ "optic_KHS_blk", "Kahlia Black", 50,},
			{ "optic_KHS_hex", "Kahlia Hex", 50,},
			{ "optic_KHS_old", "Kahlia Old", 50,},
			{ "optic_KHS_tan", "Kahlia Tan", 50,},
			{ "bipod_01_F_snd", "Bipod Sand", 50,},
			{ "bipod_01_F_blk", "Bipod Black", 50,},
			{ "bipod_01_F_mtp", "Bipod MTP", 50,},
			{ "bipod_02_F_blk", "Bipod Black", 50,},
			{ "bipod_02_F_tan", "Bipod Tan", 50,},
			{ "bipod_02_F_hex", "Bipod Hex", 50,},
			{ "bipod_03_F_blk", "Bipod Black", 50,},
			{ "bipod_03_F_oli", "Bipod Olive-1", 50,},
			{ "UGL_FlareWhite_F", "", 25 },
			{ "UGL_FlareGreen_F", "", 25 },
			{ "UGL_FlareRed_F", "", 25 },
			{ "UGL_FlareYellow_F", "", 25 },
            { "UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_UGL_FlareWhite_F", "", 25 },
			{ "3Rnd_UGL_FlareGreen_F", "", 25 },
			{ "3Rnd_UGL_FlareRed_F", "", 25 },
			{ "3Rnd_UGL_FlareYellow_F", "", 25 },
			{ "3Rnd_UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_Smoke_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeRed_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeGreen_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeYellow_Grenade_shell", "", 25 },
			{ "3Rnd_SmokePurple_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeBlue_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeOrange_Grenade_shell", "", 25 }
            
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 1 },
			{ "6Rnd_45ACP_Cylinder", "", 1 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 25 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 50 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 50 },
			{ "200Rnd_65x39_cased_Box", "", 75 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 100 },
			{ "20Rnd_762x51_Mag", "", 25 },
			{ "150Rnd_762x54_Box", "", 75 },
			{ "150Rnd_762x54_Box_Tracer", "", 100 },
			{ "10Rnd_338_Mag", "", 50 },
			{ "130Rnd_338_Mag", "", 150 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 75 },
			{ "150Rnd_93x64_Mag", "", 150 },
			{ "7Rnd_408_Mag", "", 75, 50 }, 	
			{ "10Rnd_127x54_Mag", "", 50 },			
			{ "5Rnd_127x108_Mag", "", 100 },
			{ "5Rnd_127x108_APDS_Mag", "", 150 }
        };
    };	

	class cop_chief {
        name = "Altis Chief Of Police Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "You must be a Chief Of Police Rank!" };
        items[] = {
			{ "Binocular", "", 50 },
			{ "Rangefinder", "", 100 },
            { "ItemGPS", "", 10 },
            { "ItemMap", "", 1 },
            { "ItemCompass", "", 5 },
            { "ItemWatch", "", 5 },
            { "FirstAidKit", "", 5 },
            { "NVGoggles", "", 500 },
            { "hgun_P07_snds_F", "Stun Pistol", 100, 650 },  
			{ "hgun_Pistol_heavy_02_F", "Chief Pistol", 100 },
			{ "SMG_01_Holo_pointer_snds_F", "Vermin SMG", 750 },
            { "arifle_MXC_F", "", 750 },
			{ "arifle_MX_Black_F", "", 1 },
			{ "arifle_MXC_Black_F", "", 750 },
			{ "arifle_MX_GL_Black_F", "", 1250 },
			{ "arifle_MX_SW_Black_F", "", 2000 },
			{ "arifle_MXM_Black_F", "", 2250 },
			{ "srifle_EBR_F", "", 1500, 1000 },
			{ "srifle_DMR_02_F", "", 3250 },  
			{ "srifle_DMR_02_camo_F", "", 3500 }, 
			{ "srifle_DMR_02_sniper_F", "", 4000 }, 
			{ "srifle_DMR_03_F", "", 3000 },
			{ "srifle_DMR_03_khaki_F", "", 3250 },
			{ "srifle_DMR_03_tan_F", "", 3250 },
			{ "srifle_DMR_03_multicam_F", "", 3250 },
			{ "srifle_DMR_03_woodland_F", "", 3250 },
			{ "srifle_DMR_04_F", "", 8250 },
			{ "srifle_DMR_04_Tan_F", "", 8500 },
			{ "srifle_DMR_05_blk_F", "", 7000 },
			{ "srifle_DMR_05_hex_F", "", 7000 },
			{ "srifle_DMR_05_tan_f", "", 7000 },  
			{ "srifle_DMR_06_camo_F", "", 5500 },
			{ "srifle_DMR_06_olive_F", "", 5500 },
			{ "LMG_Mk200_F", "", 3000 },
			{ "LMG_Zafir_F", "", 5000 },
			{ "MMG_01_hex_F", "", 8000 },  
			{ "MMG_01_tan_F", "", 8000 },  
			{ "MMG_02_camo_F", "", 7000 },  
			{ "MMG_02_black_F", "", 7000 },  
			{ "MMG_02_sand_F", "", 7000 },  
			{ "srifle_LRR_F", "", 7500 },
			{ "srifle_LRR_camo_F", "", 7750 },
			{ "srifle_GM6_F", "", 10000 },
            { "srifle_GM6_camo_F", "", 10000 },
			{ "HandGrenade_Stone", "Flashbang", 100 },
			{ "optic_Arco", "Advanced Rifle Combat Optics", 25},
			{ "optic_Hamr", "Rifle Combat Optics", 25},
			{ "optic_Aco", "Advanced Collimator Optics Red", 25},
			{ "optic_ACO_grn", "Advanced Collimator Optics Green", 25},
			{ "optic_Aco_smg", "Advanced Collimator Optics Red", 25},
			{ "optic_ACO_grn_smg", "Advanced Collimator Optics Green", 25},
			{ "optic_Holosight", "MK17 Holosight", 25},
			{ "optic_Holosight_smg", "Mk17 Holosight SMG", 25},
			{ "optic_SOS", "Marksman Optical Sights", 25},
			{ "acc_flashlight", "Flashlight", 25},
			{ "acc_pointer_IR", "IR Laser Pointer", 25},
			{ "optic_MRCO", "MRCO", 25},
			{ "muzzle_snds_acp", "Sound Suppressor 45 ACP", 25},
			{ "optic_NVS", "Night Vision Scope", 1000},
			{ "optic_Nightstalker", "Nightstalker Sight", 2500},
			{ "optic_tws", "Thermal Weapon Sight", 2500},
			{ "optic_tws_mg", "Thermal Weapon Sight for Machineguns", 2500},
			{ "optic_DMS", "Designated Marksman Sight", 25},
			{ "optic_Yorris", "Yorris J2", 25},
			{ "optic_MRD", "MRD", 25},
			{ "optic_LRPS", "Long-Range Precision Scope", 500},
			{ "muzzle_snds_H", "Sound Suppressor 6.5 mm", 50 },
			{ "muzzle_snds_B", "Sound Suppressor 7.62 mm", 50 },
			{ "muzzle_snds_338_black", "Sound Suppressor 338 Black", 50},
			{ "muzzle_snds_338_green", "Sound Suppressor 338 Green", 50},
			{ "muzzle_snds_338_sand", "Sound Suppressor 338 Sand", 50},
			{ "muzzle_snds_93mmg", "Sound Suppressor 9.3mm Black", 50},
			{ "muzzle_snds_93mmg_tan", "Sound Suppressor 9.3mm Tan", 50},
			{ "optic_AMS", "Advanced Marksman Scope Black", 50},
			{ "optic_AMS_khk", "Advanced Marksman Scope Khaki", 50},
			{ "optic_AMS_snd", "Advanced Marksman Scope Sand", 50},
			{ "optic_KHS_blk", "Kahlia Black", 50},
			{ "optic_KHS_hex", "Kahlia Hex", 50},
			{ "optic_KHS_old", "Kahlia Old", 50},
			{ "optic_KHS_tan", "Kahlia Tan", 50},
			{ "bipod_01_F_snd", "Bipod Sand", 50},
			{ "bipod_01_F_blk", "Bipod Black", 50},
			{ "bipod_01_F_mtp", "Bipod MTP", 50},
			{ "bipod_02_F_blk", "Bipod Black", 50},
			{ "bipod_02_F_tan", "Bipod Tan", 50},
			{ "bipod_02_F_hex", "Bipod Hex", 50},
			{ "bipod_03_F_blk", "Bipod Black", 50},
			{ "bipod_03_F_oli", "Bipod Olive-1", 50},
			{ "UGL_FlareWhite_F", "", 25 },
			{ "UGL_FlareGreen_F", "", 25 },
			{ "UGL_FlareRed_F", "", 25 },
			{ "UGL_FlareYellow_F", "", 25 },
            { "UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_UGL_FlareWhite_F", "", 25 },
			{ "3Rnd_UGL_FlareGreen_F", "", 25 },
			{ "3Rnd_UGL_FlareRed_F", "", 25 },
			{ "3Rnd_UGL_FlareYellow_F", "", 25 },
			{ "3Rnd_UGL_FlareCIR_F", "", 25 },
			{ "3Rnd_Smoke_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeRed_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeGreen_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeYellow_Grenade_shell", "", 25 },
			{ "3Rnd_SmokePurple_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeBlue_Grenade_shell", "", 25 },
			{ "3Rnd_SmokeOrange_Grenade_shell", "", 25 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 1 },
			{ "6Rnd_45ACP_Cylinder", "", 1 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 25 },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 50 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 50 },
			{ "200Rnd_65x39_cased_Box", "", 75 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 100 },
			{ "20Rnd_762x51_Mag", "", 25, 50 },
			{ "150Rnd_762x54_Box", "", 75, 50 },
			{ "150Rnd_762x54_Box_Tracer", "", 100, 50 },
			{ "10Rnd_338_Mag", "", 50, 50 },
			{ "130Rnd_338_Mag", "", 150, 50 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 75, 50 },
			{ "150Rnd_93x64_Mag", "", 150, 50 },
			{ "7Rnd_408_Mag", "", 75, 50 }, 	
			{ "10Rnd_127x54_Mag", "", 50 },			
			{ "5Rnd_127x108_Mag", "", 100 },
			{ "5Rnd_127x108_APDS_Mag", "", 150 }
        };
    };	
	
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 10, -1 },
            { "ItemMap", "", 1, -1 },
            { "ItemCompass", "", 5, -1 },
            { "ItemWatch", "", 10, -1 },
            { "Binocular", "", 50, -1 },
            { "FirstAidKit", "", 5, -1 },
            { "NVGoggles", "", 500, -1 }
        };
        mags[] = {};
    };
};
 
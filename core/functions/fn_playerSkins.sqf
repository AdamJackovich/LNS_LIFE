#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
switch (playerSide) do {
    case civilian: {
        if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_1.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_burgundy") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_2.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_stripped") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_3.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_tricolour") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_4.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_salmon") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_5.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_redwhite") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_6.jpg"];
            };
            if (uniform player isEqualTo "U_C_Commoner1_1") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_7.jpg"];
            };
			
        };
    };

	case west: {
		if (LIFE_SETTINGS(getNumber,"cop_extendedSkins") isEqualTo 1) then {
                
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 1)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\1Uniform_Cadet.jpg"]; 	};
			
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 2)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\3Uniform_Officer.jpg"]; 	};
			
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 3)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\4Uniform_Corporal.jpg"]; 	};
			
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 4)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\5Uniform_Sgt.jpg"]; 	};
			
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 5)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\6Uniform_LT.jpg"]; 	};
			
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 6)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\7Uniform_Capt.jpg"]; 	};
			
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 7)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\8Uniform_Maj.jpg"]; 	};
			
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 8)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\9Uniform_AChief.jpg"]; 	};
			
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 9)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\10Uniform_Chief.jpg"]; 	};
			
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 10)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\5Uniform_Sgt.jpg"]; 	};
			
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 11)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\6Uniform_LT.jpg"]; 	};
			
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 12)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\7Uniform_Capt.jpg"]; 	};
		
		if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) > 13)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\10Uniform_Chief.jpg"]; 	};
			
		if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) > 10)) then {
			player setObjectTextureGlobal [0, "textures\apd uniforms\swat_shirt.paa"]; 	};
		
		if ((backpack player == "B_Kitbag_cbr") && (FETCH_CONST(life_coplevel) > 10)) then {
			backpackContainer player setObjectTextureGlobal [0, "textures\apd uniforms\SWAT_kitbag.paa"]; };
	};
};

    case independent: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
        };
    };
};
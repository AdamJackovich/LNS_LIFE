class CfgGather {
    zoneSize = 30;
    class Resources {
        class apple {
            amount = 5;
            zones[] = { "apple_1", "apple_2", "apple_3", "apple_4" };
            item = "";
        };

        class peach {
            amount = 5;
            zones[] = { "peaches_1", "peaches_2", "peaches_3", "peaches_4" };
            item = "";
        };

        class heroin_unprocessed {
            amount = 1;
            zones[] = { "heroin_1" };
            item = "";
        };

        class cocaine_unprocessed {
            amount = 1;
            zones[] = { "cocaine_1" };
            item = "";
        };

        class cannabis {
            amount = 1;
            zones[] = { "weed_1" };
            item = "";
        };
		
		class raw_rye {
            amount = 2;
            zones[] = { "rye_1" };
            item = "";
            mined[] = { "raw_rye" };
        };
		
		class raw_hops {
            amount = 2;
            zones[] = { "hop_1" };
            item = "";
            mined[] = { "raw_hops" };
        };
		
		class raw_yeast {
            amount = 2;
            zones[] = { "yeast_1" };
            item = "";
            mined[] = { "raw_yeast" };
        };
		
		class grapes {
            amount = 2;
            zones[] = { "grapes_1" };
            item = "";
            mined[] = { "grapes" };
		};
		
		class raw_frogs {
            amount = 1;
            zones[] = { "frogs_1" };
            item = "";
            mined[] = { "raw_frogs" };
        };
		
		class ephedra {
            amount = 1;
            zones[] = { "ephedra_1" };
            item = "";
            mined[] = { "ephedra" };
        };
		
		class lithium {
            amount = 1;
            zones[] = { "lithium_1" };
            item = "";
            mined[] = { "lithium" };
        };
		
		class phosphorus {
            amount = 1;
            zones[] = { "phosphorus_1" };
            item = "";
            mined[] = { "phosphorus" };
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {
        class copper_unrefined {
            amount = 2;
            zones[] = { "copper_mine" };
            item = "pickaxe";
            mined[] = {"copper_unrefined"};
        };

        class iron_unrefined {
            amount = 2;
            zones[] = { "iron_mine" };
            item = "pickaxe";
            mined[] = { "iron_unrefined" };
        };

        class salt_unrefined {
            amount = 2;
            zones[] = { "salt_mine" };
            item = "pickaxe";
            mined[] = { "salt_unrefined" };
        };

        class sand {
            amount = 2;
            zones[] = { "sand_mine" };
            item = "pickaxe";
            mined[] = { "sand" };
        };

        class diamond_uncut {
            amount = 2;
            zones[] = { "diamond_mine" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
        };

        class rock {
            amount = 2;
            zones[] = { "rock_quarry" };
            item = "pickaxe";
            mined[] = { "rock" };
        };

        class oil_unprocessed {
            amount = 2;
            zones[] = { "oil_field_1", "oil_field_2" };
            item = "pickaxe";
            mined[] = { "oil_unprocessed" };
        };
    };
};
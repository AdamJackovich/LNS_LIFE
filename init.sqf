/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
_igiload = execVM "IgiLoad\IgiLoadInit.sqf";
[] execVM "scripts\fn_statusBar.sqf";
[] execVM "scripts\noanimal.sqf";
[] execVM "scripts\nosidechat.sqf";
[] execVM "scripts\zlt_fastrope.sqf";

[
	10*60, // seconds to delete dead bodies (0 means don't delete) 
	5*60, // seconds to delete dead vehicles (0 means don't delete)
	60, // seconds to delete dropped weapons (0 means don't delete)
	0, // seconds to deleted planted explosives (0 means don't delete)
	0 // seconds to delete dropped smokes/chemlights (0 means don't delete)
] execVM "scripts\repetitive_cleanup.sqf";

StartProgress = true;
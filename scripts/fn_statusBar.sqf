#include "..\script_macros.hpp"
waitUntil {!(isNull (findDisplay 46))};
disableSerialization;
/*
	File: fn_statusBar.sqf
	Author: Some French Guy named Osef I presume, given the variable on the status bar
	Edited by: [midgetgrimm]
	Description: Puts a small bar in the bottom right of screen to display in-game information

*/
_rscLayer = "osefStatusBar" call BIS_fnc_rscLayer;
4 cutRsc ["osefStatusBar","PLAIN"];
systemChat format["*Welcome to WalMart get your shit and get out! Loading StatusBar>>>", _rscLayer];

[] spawn {
	sleep 5;
	_fpscolour = '#008000';
	_counter = 180;
	_timeSinceLastUpdate = 0;
	_statusText = "TS = 192.223.26.57";
	_fps = round diag_fps;
	Server_Session = 14400;
	
	while {true} do
	{
		TimeTillRestart = Server_Session - ServerTime;
		_fps = round diag_fps;
		if (_fps >= 30) then 
		{
			_fpscolour = "color= '#008000'";
		}
		 else 
		{
			if (_fps >= 20) then 
			{
				_fpscolour = "color= '#FFFF00'";
			} 
			else 
			{
				_fpscolour = "color= '#FF0000'";
			}
		};
		sleep 1;
		_counter = _counter - 1;
		((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)ctrlSetText format["| FPS: %1 | Police: %2 | Civilians: %3 | Medics: %4 | CASH: %5 | BANK: %6 | GRIDREF: %7 | %8 | %9 |", round diag_fps, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits,[life_cash] call life_fnc_numberText,[life_atmbank] call life_fnc_numberText, mapGridPosition player, [TimeTillRestart, "HH:MM:SS"] call BIS_fnc_secondsToString, _statusText];
	};
};
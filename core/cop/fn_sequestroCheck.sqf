/*	File: fn_sequestroCheck.sqf	
Author: Al Morise (Sink)	
Description: Removes illegal equipment from the unit
*/
private ["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
	if (isNull _unit) exitWith {};
	if (player distance _unit > 5 || !alive player || !alive _unit) exitWith {};
_action = [format ["Seize illegal items of %1?",name _unit],"confirms seizure request","Yes","No"] call BIS_fnc_guiMessage;
if(_action) then {hint format["Seizing illegal objects %1. Please wait...",name _unit];[[player],"life_fnc_sequestra",_unit,false] 
spawn life_fnc_MP;
sleep 3;
hint "illegal items seized.";};
hint "You have been added to the wanted list for tresspassing the federal reserve";
[getPlayerUID player,player getVariable  ["realname",name player],"244",player] remoteExec ["life_fnc_wantedAdd",2];

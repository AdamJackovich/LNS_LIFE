/*
	File: fn_welcomeNotification.sqf
	Author:

	Description:
	Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='9.5' shadow='0'><img image='textures\welcome_sign.jpg' /></t><br /><br />";
_message = _message + "<t align='center' size='1' color='#FFFFFF'>All cops have to be active in teamspeak at all times! Not being there gets you can blacklisted from the APD.</t><br />";
_message = _message + "<t align='center' size='1' color='#FFFFFF'>This is a roleplay server, this means RDM/VDM are NOT allowed.</t><br />";
_message = _message + "<t align='center' size='1.7' color='#ffbe00'>» <a href='http://lugnutzstudios.enjin.com/home'>LNS Website</a></t><br />";
_message = _message + "<t align='center' size='1.7' color='#ffbe00'>» <a href='http://lugnutzstudios.enjin.com/forum/m/27676811/viewthread/26804706-server-rules'>Server Rules</a></t><br />";
_message = _message + "<t align='center' size='1.7' color='#ffbe00'>TS3 Address: 192.223.26.57</t><br /><br />";


//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;

#include "..\..\script_macros.hpp"
/*
    File: fn_hudUpdate.sqf
    Author: Daniel Stuart
    Description:
    Updates the HUD when it needs to.
*/
disableSerialization;
if (isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};
LIFEctrl(1) progressSetPosition (1 - (damage player));
LIFEctrl(2) progressSetPosition (life_hunger / 100);
LIFEctrl(3) progressSetPosition (life_thirst / 100);
LIFEctrl(4) ctrlSetText format["%1%2",round((1-(getDammage player))*100),"%"];
LIFEctrl(5) ctrlSetText format["%1%2",(life_hunger),"%"];
LIFEctrl(6) ctrlSetText format["%1%2",(life_thirst),"%"];
LIFEctrl(7) ctrlSetText format["%1%2",([BANK] call life_fnc_numberText),"$"];
LIFEctrl(8) ctrlSetText format["%1%2",[life_cash] call life_fnc_numberText,"$"];
LIFEctrl(9) ctrlSetText format["%1",(west countSide playableUnits)];
LIFEctrl(10) ctrlSetText format["%1",(independent countSide playableUnits)];
LIFEctrl(11) ctrlSetText format["%1",(civilian countSide playableUnits)];

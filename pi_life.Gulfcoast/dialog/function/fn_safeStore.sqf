#include "..\..\script_macros.hpp"
/*
    File: fn_safeStore.sqf
    Author: Bryan "Tonic" Boardwine
    Description:
    Gateway copy of fn_vehStoreItem but designed for the safe.
*/
private ["_ctrl","_num"];
disableSerialization;
_ctrl = CONTROL_DATA(3503);
_num = ctrlText 3506;
//Error checks
if (!([_num] call TON_fnc_isnumber)) exitWith {[ localize "STR_MISC_WrongNumFormat",true,"fast"] call life_fnc_notification_system;};
_num = parseNumber(_num);
if (_num < 1) exitWith {[ localize "STR_Cop_VaultUnder1",true,"fast"] call life_fnc_notification_system;};
if (!(_ctrl isEqualTo "goldBar")) exitWith {[ localize "STR_Cop_OnlyGold",true,"fast"] call life_fnc_notification_system};
if (_num > life_inv_goldbar) exitWith {[ format [localize "STR_Cop_NotEnoughGold",_num],true,"fast"] call life_fnc_notification_system;};
//Store it.
if (!([false,_ctrl,_num] call life_fnc_handleInv)) exitWith {[ localize "STR_Cop_CantRemove",false,"fast"] call life_fnc_notification_system;};
_safeInfo = life_safeObj getVariable ["safe",0];
life_safeObj getVariable ["safe",_safeInfo + _num,true];
[life_safeObj] call life_fnc_safeInventory;

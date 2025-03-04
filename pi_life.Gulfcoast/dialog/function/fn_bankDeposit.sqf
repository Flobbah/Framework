#include "..\..\script_macros.hpp"
/*
    File: fn_bankDeposit.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Figure it out.
*/
private ["_value"];
_value = parseNumber(ctrlText 2702);

//Series of stupid checks
if (_value > 999999) exitWith {[ localize "STR_ATM_GreaterThan",true,"fast"] call life_fnc_notification_system;};
if (_value < 0) exitWith {};
if (!([str(_value)] call TON_fnc_isnumber)) exitWith {[ localize "STR_ATM_notnumeric",true,"fast"] call life_fnc_notification_system};
if (_value > CASH) exitWith {[ localize "STR_ATM_NotEnoughCash",true,"fast"] call life_fnc_notification_system};

CASH = CASH - _value;
BANK = BANK + _value;

[ format [localize "STR_ATM_DepositSuccess",[_value] call life_fnc_numberText],false,"fast"] call life_fnc_notification_system;
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;

if (LIFE_SETTINGS(getNumber,"player_moneyLog") isEqualTo 1) then {
    if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
        money_log = format [localize "STR_DL_ML_depositedBank_BEF",_value,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    } else {
        money_log = format [localize "STR_DL_ML_depositedBank",profileName,(getPlayerUID player),_value,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    };
    publicVariableServer "money_log";
};

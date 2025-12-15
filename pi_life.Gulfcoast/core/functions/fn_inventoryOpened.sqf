#include "..\..\script_macros.hpp"
/*
    File: fn_inventoryOpened.sqf
    Author: Bryan "Tonic" Boardwine
    Description:
    For the mean time it blocks the player from opening another persons backpack
*/
params [
    ["_unit", objNull, [objNull]],
    ["_container", objNull, [objNull]],
    ["_secContainer", objNull, [objNull]]
];
scopeName "main";
private _list = ["LandVehicle", "Ship", "Air"];
{
    if (isNull _x) then {false breakOut "main"};
    private _containerType = typeOf _x;
    if (FETCH_CONFIG2(getNumber, "CfgVehicles", _containerType, "isBackpack") isEqualTo 1) exitWith {
        [ localize "STR_MISC_Backpack",true,"fast"] call life_fnc_notification_system;
        true breakOut "main";
    };
    if (_containerType in ["Box_IND_Grenades_F", "B_supplyCrate_F"]) exitWith {
        private _house = nearestObject [player, "House"];
        if (!(_house in life_vehicles) && {_house getVariable ["locked",true]}) exitWith {
            [ localize "STR_House_ContainerDeny",true,"fast"] call life_fnc_notification_system;
            true breakOut "main";
        };
    };
    if (KINDOF_ARRAY(_x, _list)) exitWith {
        if (!(_x in life_vehicles) && {locked _x isEqualTo 2}) exitWith {
            [ localize "STR_MISC_VehInventory",true,"fast"] call life_fnc_notification_system;
            true breakOut "main";
        };
    };
    //Allow alive players who've been knocked out to be looted, just not the dead ones
    if (_x isKindOf "CAManBase" && {!alive _x}) exitWith {
        [ localize "STR_NOTF_NoLootingPerson",true,"fast"] call life_fnc_notification_system;
        true breakOut "main";
    };
} count [_container, _secContainer];

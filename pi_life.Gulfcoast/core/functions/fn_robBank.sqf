/*
File: fn_robBank.sqf

Author: cmdFlow

Description:
Script to call on a laptop when nearby bank, to rob it

*/

private["_robber","_bank","_cops","_canRob","_startRob","_chance","_ui","_progress","_pgText","_cP","_Pos","_marker","_laptop"];

_robber = player;
_bank = nearestObject [player, "Land_CommonwealthBank"];
_canRob = _bank getVariable ["canRob",true];
_cops = (west countSide playableUnits);
_chance = random(100);
_startRob = false;
_minCops = 4;

if(_cops < _minCops) exitWith { [ localize "STR_Bank_MinCops",true,"fast"] call life_fnc_notification_system};
if (!_canRob) exitWith { [ localize "STR_Bank_BankTimer",true,"fast"] call life_fnc_notification_system};
if (playerSide != civilian) exitWith { [ localize "STR_Bank_CopRobBank",true,"fast"] call life_fnc_notification_system};
if (player distance _bank > 8) exitWith { [ localize "STR_Bank_TooFar",true,"fast"] call life_fnc_notification_system};
if (vehicle player != player) exitWith { [ localize "STR_Bank_InVeh",true,"fast"] call life_fnc_notification_system};
if (_chance < 50) exitWith { [ localize "STR_Bank_Fail",true,"fast"] call life_fnc_notification_system};
if !(alive player) exitWith {};
if (_startRob) exitWith {};

_startRob = true;
_bank setVariable ["canRob",false,false];

[2,format[ localize "STR_Bank_CopNotification", _bank]] remoteExec ["life_fnc_broadcast",west];
[1,format[ localize "STR_Bank_CopNotification", _bank]] remoteExec ["life_fnc_broadcast",west];

disableSerialization;

5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format[ localize "STR_Bank_Hacking","%"];
_progress progressSetPosition 0.01;
_cP = 0.0001;

if(_startRob) then {
    while{true} do {
        sleep 5;
        _cP = _cP + 0.01;
        _progress progressSetPosition _cP;
        _pgText ctrlSetText format[ localize "STR_Bank_Hacking2",round(_cP * 100),"%"];
        _Pos = position player;
        _marker = createMarker ["Marker200", _Pos];
        "Marker200" setMarkerColor "ColorRed";
        "Marker200" setMarkerText localize "STR_Bank_MarkerName";
        "Marker200" setMarkerType "mil_warning";

        if(_cP >= 1) exitWith {};
        if(player distance _bank > 11) exitWith { };
        if!(alive player) exitWith {};
    };

    if!(alive player) exitWith { _startRob = _false; };
    if(_robber distance _bank > 11) exitWith {
        deleteMarker "Marker200";
        [ localize "STR_Bank_Distance",true,"fast"] call life_fnc_notification_system;
        _startRob = false;
    };

    _bank animate ["Vault_Combination",1];
    _bank animate ["Vault_RotateUp",1];
    _bank animate ["Vault_RotateDown",1];
    _bank animate ["Vault_RotateDown",1];
    _bank animate ["Vault_TransitionUp",-0.1];
    _bank animate ["Vault_TransitionDown",0.1];
    _bank animate ["Vault_TransitionLeft",-0.1];
    _bank animate ["Vault_TransitionRight",0.1];
    _bank animate ["Vault_Door",1];

    _moneyAmount = 150000;
    _pos = _bank modelToWorld[1,-3,3];
    _pos = [(_pos select 0),(_pos select 1),4];
    _obj = "Land_Money_F" createVehicle _pos;
    _obj setVariable ["item",["money",_moneyAmount],true];
    _obj setPos _pos;

    _pos = [(_pos select 0)+0.2,(_pos select 1),4];
    _obj = "Land_Money_F" createVehicle _pos;
    _obj setVariable ["item",["money",_moneyAmount],true];
    _obj setPos _pos;

    _pos = [(_pos select 0)+0.4,(_pos select 1),4];
    _obj = "Land_Money_F" createVehicle _pos;
    _obj setVariable ["item",["money",_moneyAmount],true];
    _obj setPos _pos;

    _smoke = "SmokeShellYellow" createVehicle [0,0,9999];
    _smoke setPos _pos;
    _smoke setVelocity [100,0,0];

    _startRob = false;
    life_use_atm = false;
    sleep (30 + random(180));
    deleteMarker "Marker200";
    life_use_atm = true;
};
sleep 300;
_bank setVariable ["canRob",true,true];
_startRob = true;
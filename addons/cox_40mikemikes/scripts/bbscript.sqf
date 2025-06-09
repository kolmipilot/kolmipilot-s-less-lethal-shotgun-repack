_target = (_this select 0); 
_projectile = (_this select 1); 
_selections = (_this select 2); 
params ["_target", "_projectile", "_selections"];

if (
    alive _target &&
    ("40xtra_pellet_bshot_bb" in _projectile) &&
    (cox_40mm_setting_bbenable)
) then {

    _target setStamina (getStamina _target / cox_40mm_bbstamina);

    private _surrender = cox_40mm_bbsurrender;
    private _incap = cox_40mm_bbincapchance;

    // Normalizacja szans jeśli suma przekracza 1
    private _total = _surrender + _incap;
    if (_total > 1) then {
        _surrender = _surrender / _total;
        _incap = _incap / _total;
    };

    private _chance = random 1;

    if (_chance < _surrender) then {
        private _weapon = primaryWeapon _target;
        if (_weapon != "") then {
            [_target, true] call ace_captives_fnc_setSurrendered;
        };
    } else {
        if (_chance < (_surrender + _incap)) then {
            if (
                cox_40mm_setting_bbincap &&
                !(lifeState _target == "INCAPACITATED") &&
                !(stance _target == "PRONE")
            ) then {
                _target setUnconscious true;
                sleep 3;
                _target setUnconscious false;
            };
        };
    };
};

_target;
_projectile;
_selections;

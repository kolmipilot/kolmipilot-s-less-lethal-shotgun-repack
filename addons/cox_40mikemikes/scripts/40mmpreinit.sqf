
[ 
    "cox_40mm_setting_bbenable", 
    "CHECKBOX",
    ["Enable Beanbag Scripting","Dictates whether or not beanbag rounds have any effect."],
    "Less Lethal Shotgun Settings",  
   true 
] call CBA_fnc_addSetting;

[ 
    "cox_40mm_setting_bbincap", 
    "CHECKBOX",
    ["Enable Beanbag Incapacitation","If enabled, targets hit with beanbags will be incapacitated for 3 seconds."],
    "Less Lethal Shotgun Settings",  
   true 
] call CBA_fnc_addSetting;

[ 
	"cox_40mm_setting_bbdivider", 
	"SLIDER",
	["Beanbag Stamina Divider", "When hit by a beanbag round, a target's stamina will be divided by this number. Higher values increase stamina drain."],
	"Less Lethal Shotgun Settings",  
	[1,10,2,0],   
	nil,     
	{   
		params ["_value"]; 
		cox_40mm_bbstamina = _value;
	}  
] call CBA_fnc_addSetting;

[ 
	"cox_40mm_setting_surrender", 
	"SLIDER",
	["Chance to surrender", "When hit by a beanbag round, target will surrender. 1 is 100%, 0 is 0%"],
	"Less Lethal Shotgun Settings",  
	[0,1,0.4,2],   
	nil,     
	{   
		params ["_value"]; 
		cox_40mm_bbsurrender = _value;
	}  
] call CBA_fnc_addSetting;

[ 
	"cox_40mm_setting_incapchance", 
	"SLIDER",
	["Chance Beanbag Incapacitation","chance to unit will be incapacited"],
	"Less Lethal Shotgun Settings",  
	[0,1,0.4,2],   
	nil,     
	{   
		params ["_value"]; 
		cox_40mm_bbincapchance = _value;
	}  
] call CBA_fnc_addSetting;
class CfgPatches
{
	class cox_40mikemikes
	{
		units[]=
		{
			"40mm_pickup_ammo_12g_buckshotbb_1shell",
			"40mm_pickup_ammo_12g_buckshotbb_2shell",
			"40mm_pickup_ammo_12g_buckshotbb_3shell",
			"40mm_pickup_ammo_12g_buckshotbb_4shell",
			"40mm_pickup_ammo_12g_buckshotbb_5shell",
			"40mm_pickup_ammo_12g_buckshotbb_6shell",
			"40mm_pickup_ammo_12g_buckshotbb_7shell",
			"40mm_pickup_ammo_12g_buckshotbb_8shell",
			"40mm_pickup_ammo_12g_buckshotflec_1shell",
			"40mm_pickup_ammo_12g_buckshotflec_2shell",
			"40mm_pickup_ammo_12g_buckshotflec_3shell",
			"40mm_pickup_ammo_12g_buckshotflec_4shell",
			"40mm_pickup_ammo_12g_buckshotflec_5shell",
			"40mm_pickup_ammo_12g_buckshotflec_6shell",
			"40mm_pickup_ammo_12g_buckshotflec_7shell",
			"40mm_pickup_ammo_12g_buckshotflec_8shell",
			"40mm_pickup_ammo_12g_buckshotmg_1shell",
			"40mm_pickup_ammo_12g_buckshotmg_2shell",
			"40mm_pickup_ammo_12g_buckshotmg_3shell",
			"40mm_pickup_ammo_12g_buckshotmg_4shell",
			"40mm_pickup_ammo_12g_buckshotmg_5shell",
			"40mm_pickup_ammo_12g_buckshotmg_6shell",
			"40mm_pickup_ammo_12g_buckshotmg_7shell",
			"40mm_pickup_ammo_12g_buckshotmg_8shell",
			"40mm_pickup_weapon_berger50",
			"40mm_pickup_weapon_berger50_lesslethal",
			"40mm_props_ammo_12g_Blue_1shell",
			"40mm_props_ammo_12g_Blue_2shell",
			"40mm_props_ammo_12g_Blue_3shell",
			"40mm_props_ammo_12g_Blue_4shell",
			"40mm_props_ammo_12g_Blue_5shell",
			"40mm_props_ammo_12g_Blue_7shell",
			"40mm_props_ammo_12g_Blue_8shell",
			"40mm_props_ammo_12g_Orange_1shell",
			"40mm_props_ammo_12g_Orange_2shell",
			"40mm_props_ammo_12g_Orange_3shell",
			"40mm_props_ammo_12g_Orange_4shell",
			"40mm_props_ammo_12g_Orange_5shell",
			"40mm_props_ammo_12g_Orange_6shell",
			"40mm_props_ammo_12g_Orange_7shell",
			"40mm_props_ammo_12g_Orange_8shell",
			"40mm_props_ammo_12g_black_1shell",
			"40mm_props_ammo_12g_black_2shell",
			"40mm_props_ammo_12g_black_3shell",
			"40mm_props_ammo_12g_black_4shell",
			"40mm_props_ammo_12g_black_5shell",
			"40mm_props_ammo_12g_black_6shell",
			"40mm_props_ammo_12g_black_7shell",
			"40mm_props_ammo_12g_black_8shell",
			"40mm_props_ammo_12g_box",
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"cba_settings",
			"ace_captives",
		};
		version="1.0";
		name="Less lethal shotgun kolmipilots's repack";
		author="kolmipilot";
		authorUrl="https://steamcommunity.com/profiles/76561198832130370/";
	};
};
class Extended_PreInit_EventHandlers
{
	class 40mm_preinit_eh
	{
		init="call compile preProcessFileLineNumbers 'cox_40mikemikes\scripts\40mmpreinit.sqf'";
	};
};
class Extended_HitPart_EventHandlers
{
	class Man
	{
		class 40mm_hit_eh_bb
		{
			hitpart="if (('40xtra_pellet_bshot_bb' in ((_this select 0) select 6))) then {[((_this select 0) select 0),((_this select 0) select 6),((_this select 0) select 5)] remoteExec ['COX_fnc_beanbagPenalty', ((_this select 0) select 0)]}";
		};
	};
};
class CfgFunctions
{
	class CoxFnc
	{
		tag="COX";
		class ShotEffects
		{
			class beanbagPenalty
			{
				description="Used for penalizing people hit by beanbag rounds.";
				file="\cox_40mikemikes\scripts\bbscript.sqf";
			};
		};
	};
};
class CfgCloudlets
{
	class FireSparks;
	class FireDamage1;
	class WPCloud;
	class IncinerateFire;
	class NadeThermite: IncinerateFire
	{
		damageTime=0.25;
		coreIntensity=100;
		size[]={0.5,1};
		coreDistance=1;
		sizeCoef=1;
		rubbing=0;
	};
	class 12gSparks: FireSparks
	{
		size[]={0.025,0.029999999,0.035,0.039999999,0.045000002,0.050000001,0.055,0.059999999,0.064999998,0.07,0.075000003};
		sizeCoef=0.25;
		sizeVar=0.25;
		ignoreWind="false";
		randomDirectionIntensity=0.55000001;
		randomDirectionIntensityVar=0.15000001;
		randomDirectionPeriod=0.5;
		rotationVelocity=1;
		rotationVelocityVar=2;
		volume=1;
		weight=1.05;
		animationSpeed[]={150};
		interval=0.5;
		lifeTime=1.5;
		positionVar[]={0,0.050000001,0.025};
	};
	class 12gThermite: IncinerateFire
	{
		damageTime=0.050000001;
		coreIntensity=10;
		size[]={0.15000001,0.25};
		coreDistance=0.25;
		sizeCoef=1;
		rubbing=0;
		ignoreWind="false";
		weight=0.30000001;
		sizeVar=0.5;
	};
	class SmokeShellWhite;
	class 12gSmokeFx: SmokeShellWhite
	{
		size[]={0.25,0.1};
		sizeVar=0.25;
		sizeCoef=0.25;
		lifeTime=0.5;
		blockAIVisibility=0;
		particleFSFrameCount=16;
	};
	class NadeThermiteRefract: SmokeShellWhite
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		rubbing=0;
		size[]={1,1};
	};
	class NadeWPRefract: SmokeShellWhite
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		rubbing=0;
		size[]={1,1,2,3,4,5};
	};
	class 40mmWP: WPCloud
	{
		lifeTime=7.5;
		lifeTimeVar=0;
		coreDistance=7;
		damageTime=0.1;
		coreIntensity=5.75;
		constantDistance=1;
		damageType="Fire";
		blockAIVisibility=1;
		rubbing=0.050000001;
		weight=1.2776999;
		volume=1;
		positionVar[]={0,0.5,1,1.5,2};
	};
	class NadeWP: WPCloud
	{
		lifeTime=6;
		lifeTimeVar=0;
		coreDistance=3;
		damageTime=0.1;
		coreIntensity=5.75;
		constantDistance=1;
		damageType="Fire";
		blockAIVisibility=1;
		rubbing=0.050000001;
		weight=1.2776999;
		size[]={2,3,5,10,13,16};
		volume=1;
		positionVar[]={0,0.5,1,1.5,2};
	};
	class 40mmMaskSmokeW: WPCloud
	{
		colorCoef[]=
		{
			"colorR",
			"colorG",
			"colorB",
			"colorA"
		};
		lifeTime=13;
		lifeTimeVar=0;
		rotationVelocityVar=20;
		rotationVelocity=0;
		constantDistance=1;
		blockAIVisibility=1;
		weight=10;
		rubbing=0.050000001;
		sizeVar=0.5;
		sizeCoef=1;
		size[]={1,2,3,5,7};
		circleRadius=0.029999999;
		circleVelocity[]={0,0,0};
		positionVar[]={0,0.5,1,1.5,2,2,2.5};
	};
	class NadeMaskSmokeW: 40mmMaskSmokeW
	{
		lifeTime=10;
		size[]={1,2,3,5,7};
		circleRadius=0.029999999;
		circleVelocity[]={0,0,0};
		positionVar[]={0,0.5,1,1.5,2,2.5,3,2,2.5,3,3.5};
	};
	class 40mmMaskSmokeBl: WPCloud
	{
		color[]=
		{
			"[0.05",
			0.050000001,
			0.050000001,
			"0.05]",
			"[0.05",
			0.050000001,
			0.050000001,
			"0.05]",
			"[0.05",
			0.050000001,
			0.050000001,
			"0]"
		};
		colorCoef[]=
		{
			"colorR",
			"colorG",
			"colorB",
			"colorA"
		};
		colorVar[]={0,0,0,0.34999999};
		lifeTime=20;
		lifeTimeVar=1;
		constantDistance=1;
		blockAIVisibility=1;
		weight=10;
	};
	class WPTrailEffect;
	class WPTrails;
	class ExploAmmoSmoke;
	class ExploAmmoFlash;
	class 12GHEExploFlash: ExploAmmoFlash
	{
		lifeTime=0.5;
	};
	class 12GHEExploSmoke: ExploAmmoSmoke
	{
		size[]={0.050000001,0.1,0.15000001,0.2,0.25,0.30000001,0.34999999,0.40000001,0.44999999,0.5,0.55000001,0.60000002,0.64999998,0.69999999,0.75,1};
		lifeTime=2.25;
		positionVar[]={0,0.5,0.1,0.15000001};
	};
	class ClusterExpFire;
	class 12gDBShootFire: ClusterExpFire
	{
		size[]={0.60000002};
		position[]={0,0,0};
		positionVar[]={0,0,0};
	};
	class 12gDBShootFireSecondary: ClusterExpFire
	{
		size[]={0.30000001};
		position[]={0,0,0};
		positionVar[]={0,0,0};
	};
};
class CfgLights
{
	class SparksLight;
	class SmallFlameLight;
	class 12gDBSparks: SparksLight
	{
		position[]={0,2,2};
		dayLight=1;
		size=1;
	};
	class 12gDBFlameLight: SmallFlameLight
	{
		position[]={0,2,2};
		dayLight=1;
	};
	class ClusterFlyLight;
	class 12gDBFlyLight: ClusterFlyLight
	{
		intensity=666.66602;
		drawLight=0;
		brightness=1;
		size=0.5;
		position[]={0,0,0};
		flareSize=0.5;
		useFlare=1;
		dayLight=1;
		flareMaxDistance=100;
		color[]={1,0.5,0.2};
		diffuse[]={1,0.5,0.2};
	};
	class FiredLightMed;
	class 12gDBFiredLight: FiredLightMed
	{
	};
};
class 40mmWPExplosion
{
	class Explosion1
	{
		intensity=1;
		interval=1;
		lifeTime=30;
		position[]={0,0,0};
		qualityLevel=-1;
		simulation="particles";
		type="40mmWP";
	};
	class LightExp
	{
		intensity=0.001;
		interval=1;
		lifeTime=1;
		position[]={0,0,0};
		simulation="light";
		type="ExploLight";
	};
	class Trails
	{
		intensity=1;
		interval=1;
		lifeTime=1;
		position[]={0,0,0};
		simulation="particles";
		type="WPTrails";
	};
};
class NadeWPExplosion
{
	class Explosion1
	{
		intensity=1;
		interval=1;
		lifeTime=25;
		position[]={0,0,0};
		qualityLevel=-1;
		simulation="particles";
		type="NadeWP";
	};
	class LightExp
	{
		intensity=0.001;
		interval=1;
		lifeTime=1;
		position[]={0,0,0};
		simulation="light";
		type="ExploLight";
	};
	class Trails
	{
		intensity=0.1;
		interval=1;
		lifeTime=1;
		position[]={0,0,0};
		simulation="particles";
		type="WPTrails";
	};
};
class 40mmMaskSmokeWEffect
{
	class MaskSmokeW
	{
		intensity=1;
		interval=1;
		lifeTime=25;
		position[]={0,0,0};
		qualityLevel=-1;
		simulation="particles";
		type="40mmMaskSmokeW";
	};
};
class NadeMaskSmokeWEffect
{
	class MaskSmokeW
	{
		intensity=1;
		interval=1;
		lifeTime=30;
		position[]={0,0,0};
		qualityLevel=-1;
		simulation="particles";
		type="NadeMaskSmokeW";
	};
};
class 40mmMaskSmokeBLEffect
{
	class MaskSmokeBL
	{
		intensity=1;
		interval=1;
		position[]={0,0,0};
		qualityLevel=-1;
		simulation="particles";
		type="40mmMaskSmokeW";
	};
};
class NadeThermiteEffect
{
	class Fire1
	{
		intensity=1;
		interval=1;
		lifeTime=25;
		position[]={0,0,0};
		simulation="particles";
		type="NadeThermite";
	};
	class SmokeShellWhite
	{
		intensity=1;
		interval=30;
		position[]={0,0,0};
		simulation="particles";
		type="SmokeShellWhite";
	};
	class LightExp
	{
		intensity=0.001;
		interval=1;
		lifeTime=25;
		position[]={0,0,0};
		simulation="light";
		type="SmallFlameLight";
	};
	class FireSparks
	{
		intensity=1;
		interval=1;
		lifeTime=30;
		position[]={0,0,0};
		simulation="particles";
		type="FireSparks";
	};
	class FireRefract
	{
		intensity=1;
		interval=1;
		lifeTime=30;
		position[]={0,0,0};
		simulation="particles";
		type="NadeThermiteRefract";
	};
	class SparksLightSabot
	{
		intensity=0.001;
		interval=1;
		lifeTime=30;
		position[]={0,0,0};
		simulation="light";
		type="SparksLightSabot";
	};
};
class 12gDBEffect
{
	class Fire1
	{
		intensity=1;
		interval=1;
		lifeTime=5;
		position[]={0,0,0};
		simulation="particles";
		type="12gThermite";
	};
	class SmokeShellWhite
	{
		intensity=1;
		interval=1;
		lifeTime=5;
		position[]={0,0,0};
		simulation="particles";
		type="12gSmokeFx";
	};
	class LightExp
	{
		intensity=0.001;
		interval=1;
		lifeTime=5;
		position[]={0,0,1};
		simulation="light";
		type="12gDBFlameLight";
	};
	class FireSparks
	{
		intensity=1;
		interval=1;
		lifeTime=10;
		position[]={0,0,0};
		simulation="particles";
		type="12gSparks";
	};
	class SparksLight
	{
		intensity=1;
		interval=1;
		lifeTime=10;
		position[]={0,0.5,0};
		simulation="light";
		type="12gDBSparks";
	};
};
class 12gDBTracerShootEffect
{
	class 12gDBShootFire
	{
		intensity=1;
		interval=1;
		lifeTime=0.5;
		position[]={0,-0.1,0.25};
		moveVelocity[]={0,0,0};
		MoveVelocityVar[]={0};
		animationSpeed[]={0,0.25};
		animationSpeedCoef=1;
		simulation="particles";
		type="12gDBShootFire";
	};
	class 12gDBShootFireSecondary
	{
		intensity=1;
		interval=1;
		lifeTime=0.5;
		position[]={0,-0.1,0.34999999};
		moveVelocity[]={0,0,0};
		MoveVelocityVar[]={0};
		animationSpeed[]={0,0.25};
		animationSpeedCoef=1;
		simulation="particles";
		type="12gDBShootFireSecondary";
	};
	class 12gDBFiredLight
	{
		intensity=1;
		interval=1;
		lifeTime=1;
		position[]={0,0,0};
		simulation="light";
		type="FiredLightMed";
	};
};
class 12gDBTracerFlyEffect
{
	class ClusterFly
	{
		enabled="speedY interpolate [-0.0001,0.0001,1,-1]";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		simulation="particles";
		type="ClusterFly";
	};
	class ClusterFlyLight
	{
		intensity=0.001;
		interval=1;
		position[]={0,0,0};
		simulation="light";
		type="12gDBFlyLight";
	};
};
class 12GHEEffect
{
	class ExploAmmoFlash
	{
		intensity=1;
		interval=1;
		lifeTime=1;
		position[]={0,0,0};
		simulation="particles";
		type="ExploAmmoFlash";
	};
	class 12GHEExploSmoke
	{
		intensity=1;
		interval=1;
		lifeTime=1;
		position[]={0,0,0};
		simulation="particles";
		type="12GHEExploSmoke";
	};
	class FiredLightMed
	{
		intensity=0;
		interval=1;
		lifeTime=0.1;
		position[]={0,0,0};
		simulation="light";
		type="FiredLightMed";
	};
};
class cfgHintCategories
{
	class 40mm_cat_intro
	{
		displayName="COXHOUND Ordnance and Ammo";
		logicalOrder=24;
	};
};
class CfgHints
{
	class 40mm_fieldmanual
	{
		displayName="Throwables and 40mm Rounds";
		category="40mm_cat_intro";
		logicalOrder=0;
		class fm_fieldmanual_types
		{
			arguments[]=
			{
				""
			};
			displayName="40mm Ordnance Types";
			logicalOrder=1;
			description="This Field Manual entry will describe the round types added with the COXHOUND Ordnance and Ammo mod.<br/>These ordnance types range from a variety of buckshot, tracers, SLAP rounds, and more.<br/>Please note that most grenade launchers, vanilla or otherwise, have a minimum zeroing of 50mm. You will need to adjust for smaller round types, by aiming slightly lower, when aiming down a Grenade Launcher sight, particularly for SLAP or Buckshot rounds.	<br/> <br/> %2 40mm HEDP - High Explosive, Dual Purpose. Grenade that deploys a penetrator when main round detonates. Good for damaging components or crew of light vehicles like cars, but doesn't have very good explosive power.<br/> <br/> %2 40mm Buckshot, LG - Large grain buckshot, for use in urban situations. Does good damage at range, but hit probability is decreased due to a smaller pellet count. Has good penetration.<br/> <br/> %2 40mm Buckshot, MG - Medium grain buckshot, offers balanced medium range damage and hit probability, with a fair pellet count. Decent penetration.<br/> <br/> %2 40mm Buckshot, SG - Small grain buckshot. Damage per pellet is low, but a high pellet count ensures medium range hit probability. Is technically waterfowl shot, and has poor penetration.<br/> <br/> %2 40mm Buckshot, Mix - Three to one ratio of medium grain and small grain buckshot. Good for ensuring ranged hit probability, while also keeping a fair amount of damage and penetrative value.<br/> <br/> %2 40mm HE, 2.5 sec fuse -Standard HE grenade with a fuse time of 2.5 seconds. Useful for airburst purposes at distances of 200 meters.<br/> <br/> %2 40mm HE, 6 sec fuse - Standard HE grenade, this time with a fuse of 6 seconds. Useful for airburst purposes at distances of 400 meters.<br/> <br/> %2 40mm HE, 9 sec fuse - Standard HE grenade, with a fuse time of 9 seconds. Good for ambushes, or for launching behind enemies in an urban environment.<br/> <br/> %2 40mm Canister - Fine grain pellets, for when you can't seem to hit that bitch. Good for ground suppression, but can be hard to range, and has very bad penetration. Can be used for richochet attacks down hallways.<br/> <br/> %2 40mm, Inert - Good for training or testing purposes. Can work offensively as a slug round, but not very reliably.<br/> <br/> %2 40mm, Ground Marker - Activates a chemlight when it hits the ground. Useful for marking positions, enemy or friendly or otherwise. Comes in Ravishing Red, Yee-haw Yellow and Good-ass Green colors, with additional IR types for night vision.<br/> <br/> %2 40mm, SLAP - Saboted Light Armor Penetrator. Very good for close range penetration against light armored vehicles, but can be ineffective when hitting at an angle or at distance.<br/> <br/> %2 40mm, Tracer - Limited distance tracer round, good for ranging. Comes in Ravishing Red, Yee-haw Yellow and Good-ass Green colors. Yes I'm reusing these color names.<br/> <br/> %2 40mm HE, Cluster - Deploys bomblets upon firing. Good for top-down attacks at range, but can be inaccurate.<br/> <br/> %2 40mm, Mine Deploying - Deploys a small Anti-Personnel mine upon impact. Mine works best when embedded into soft ground, and works worst by not arming completely when implanting into walls or hard surfaces.<br/> <br/> %2 40mm HEAV - High Explosive, Anti-Vehicle. Similar to HEDP, but beefier. Used for retaining explosive power, while also being able to defeat most MRAP and light APC armor.<br/> <br/> %2 40mm HESP - High Explosive, Shrapnel Producing. Round is made of a material that fragments far better, but at the cost of decreased explosive power compared to standard HE rounds. Fragments maintain velocity and shape at a further range, as a result.<br/> <br/> %2 40mm WP - White Phosphorous. When main round detonates, it deploys a huge white cloud that damages overtime, and lasts for about a minute. Good for area denial, burning out hidden targets, concealment, or aerial marking. Damage stops as smoke cloud begins to dissipate.<br/> <br/> %2 40mm Masking Smoke Grenades - Deploys a large smokescreen, with a greater effect than handheld smokebombs. Good for concealment and the like. Available in many different colors.";
			tip="";
			displayNameShort="For when you really want to mess a motherfucker up.";
			image="cox_40mikemikes\icon_main.paa";
		};
		class fm_fieldmanual_buckshot
		{
			arguments[]=
			{
				""
			};
			displayName="Buckshot Grain Types";
			logicalOrder=2;
			description="This entry describes the differences between the various Buckshot grain types within this mod, as far as pellet count and diameter are concerned.<br/>Data recorded with standard issue COXHOUND M203.<br/>Results may vary, when used in other weapons.<br/><br/>%2 Buckshot, Large Grain - Abbreviated as LG. Has 8 pellets, at 9.01mm diameter each. Penetrates very well, with little yawing, and damage falloff begins very far downrange. <br/>%2 Buckshot, Medium Grain - Abbreviated as MG. Has 16 pellets, with a diameter of 7.62 each. Good penetration and damage falloff range. <br/>%2 Buckshot, Small Grain - Abbreviated as SG. Contains 32 pellets, at a diameter of 5.59mm each. Decent penetration, but yaws almost immediately and becomes inaccurate. <br/>%2 Buckshot, Mix - Contains 24 pellets, with a 1/3 ratio of MG and SG pellets mixed into the cartridge. <br/>%2 Canister - Has 78 pellets, with a diameter of 4mm each. They're crammed in there. Very poor penetration and falloff range. ";
			tip="";
			displayNameShort="";
			image="cox_40mikemikes\icon_main.paa";
		};
		class fm_fieldmanual_colors
		{
			arguments[]=
			{
				""
			};
			displayName="Round Color Coding";
			logicalOrder=3;
			description="The rounds used in this mod have color coded icons to help differenciate the properties of each round. Offensive rounds have colored bands around the top, and the tip is likewise colored.<br/>Visual identifier rounds, such as tracers or smoke, have a colored band near the middle, and are generally color coded based on the color of their munition.<br/><br/>Color codes for offensive rounds are as described:<br/><br/>%2 Red - Used to denote a subexplosive within the round, such as a mine or a cluster munition.<br/><br/>%2 Blue - Denotes armor piercing properties, commonly found on HEDP rounds.<br/><br/>%2 Gold - Denotes standard high explosive properties.<br/><br/>%2 Cyan - Denotes that round is inert.<br/><br/>%2 Orange - Round contains pellets.<br/><br/>%2 White - Round has a chemical munition, such as White Phosphorous.";
			tip="";
			displayNameShort="You know that one episode of Spongebob where there's the rainbow colored Krabby Patties? yeah...";
			image="cox_40mikemikes\icon_main.paa";
		};
		class fm_fieldmanual_throwables
		{
			arguments[]=
			{
				""
			};
			displayName="Throwables";
			logicalOrder=4;
			description="This Field Manual entry describes the various types of throwable munitions within this mod.<br/>It is recommended to test these outside of combat situations, before combat employment, to get a feel for the throwing arcs.<br/>Beware that the Throwing Knives and Throwing Hatchets can be defeated by armor plating and helmets.<br/><br/>%2 Throwing Knife - A small throwing knife, it goes very far and deals decent damage. Aim below the horizon when throwing, knife has a high arc. Works well for neutralizing guards or sentries.<br/><br/>%2 Throwing Hatchet - Weighty throwing axe. Doesn't go too far, but hits hard. Good for neutralizing close up enemies.<br/><br/>%2 Incendiary Grenade, WP - Short fuel incendiary grenade, white phosphorous base. Good for clearing out bunkers or buildings, but activates on impact and is very dangerous.<br/><br/>%2 Incendiary Grenade, Thermite - Burns through a small thermite charge on impact. Lasts for about 30 seconds. Best for soft vehicle disposal, but has an incredibly short range.<br/><br/>%2 Smokebomb Grenades - Deploys a large smokescreen upon impact with a surface. Very good for concealment or crossing coverage. Available in many different shades.<br/><br/>%2 MK3A2 Concussion Grenade - Antipersonnel grenade with a higher range than regular grenades, but overall less damage. Tends to roll.<br/><br/>%2 Impact Grenade - Name on the tin. Similar to RGN grenades, but explodes on contact. Sometimes bounces.<br/><br/>%2 Stone - grug ready for when chieftan try take club<br/><br/>%2 Foam Sandal - BY ALLAH IF YOU DO NOT ENJOY THIS MOD THEN YOU DESERVE NOTHING BUT THE SHOE";
			tip="";
			displayNameShort="Wait... I thought this mod only added 40mm grenades?";
			image="cox_40mikemikes\icon_main.paa";
		};
	};
	class 40mm_fieldmanual_shotgun
	{
		displayName="DB Berger 50 and 12 Gauge rounds";
		category="40mm_cat_intro";
		logicalOrder=2;
		class fm_fieldmanual_shells
		{
			arguments[]=
			{
				""
			};
			displayName="Shotgun Shell Types";
			logicalOrder=1;
			description="This field manual entry will describe the several 12 gauge ammo types added with COXHOUND Ordnance and Ammo.<br/>As a rule of thumb, Large Grains do more damage, have a higher velocity, and have a tight spread, but with less pellets. Inversely, Small Grains have a lower velocity, do less damage, but have more pellets.<br/>Medium Grain fits in between. See ''Beanbag Round Scripting'' entry for more information on Beanbag rounds.<br/><br/>%2 12 Gauge, LG - Large grain pellets. Similar to #000 buckshot. Tight spread, high damage. Good for precision.<br/><br/>%2 12 Gauge, MG - Medium grain pellets. Similar to #1 buckshot. Good spread, good damage. All-around decent.<br/><br/>%2 12 Gauge, SG - Small grain pellets. Similar to #F waterfowl shot. Wide spread, low damage. Good for high hit probability.<br/><br/>%2 12 Gauge, Mix - Mix of medium grain and small grain, with a ratio of 1/3. Best of both worlds.<br/><br/>%2 12 Gauge, Starshot - Mix of medium grain and large grain pellets, in a star-shaped spread pattern.<br/><br/>%2 12 Gauge, Tri-ball - Three decently large pellets with a tight spread.<br/><br/>%2 12 Gauge, Slug - Single projectile slug round, has good damage and penetration, but requires precision.<br/><br/>%2 12 Gauge, Beanbag - Single projectile beanbag round, can reduce stamina in enemies and potentially ragdoll them.<br/><br/>%2 12 Gauge, AP Spike - Single projectile armor piercing spike round, has extremely good penetration.<br/><br/>%2 12 Gauge, Flechette - 12 high velocity darts with good armor penetration, but with low damage.<br/><br/>%2 12 Gauge, High Explosive - Single projectile explosive pellet, has a small explosive range.<br/><br/>%2 12 Gauge, Incendiary - Incendiary-tipped pellets mixed in with standard MG pellets. Leaves fire upon impact.<br/><br/>%2 12 Gauge, Dragon's Breath - Unpredictable incendiary rounds that ignite immediately upon leaving the barrel.<br/><br/>%2 12 Gauge, Rock Salt - Unpredictable, lightweight rounds loaded with literal rocks from someone's back yard. Low damage, splits into smaller projectiles upon impact or penetration.<br/><br/>%2 12 Gauge, Soft Load - Soft load round variants have a lower velocity overall. Soft load variants exist for LG, MG, SG and Mix shells.<br/><br/>%2 12 Gauge, Magnum - Magnum round variants have a higher velocity. Magnum variants exist for LG, MG, SG and Mix shells.";
			tip="";
			displayNameShort="They're like mildly explosive pieces of candy.";
			image="cox_40mikemikes\icon_main.paa";
		};
		class fm_fieldmanual_shotgun
		{
			arguments[]=
			{
				""
			};
			displayName="Dick and Bahls Berger 50";
			logicalOrder=3;
			description="The Berger 50 is a multipurpose 12 gauge pump action shotgun manufactured by Dick and Bahls Sporting Utilities. It sees uses in civilian and law enforcement roles, and performs very well in a variety of scenarios. <br/>Intended for use in a wide variety of environments, the Berger 50 is a reliable shotgun and is easily maintained, and has simple parts. It is specifically designed to support as many 12 gauge shell types as possible. <br/>The standard model holds five 2.75-inch or five 3-inch shells in tube, and an additional shell in the chamber. <br/>It performs best in close encounters, but is nonetheless effective out to approximately 250 meters.";
			tip="";
			displayNameShort="They Really Out Here Calling A Shotgun A Burger :joy:";
			image="cox_40mikemikes\icon_main.paa";
			weapon="cox_weapon_berger50";
		};
		class fm_fieldmanual_beanbag
		{
			arguments[]=
			{
				""
			};
			displayName="Beanbag Round Scripting";
			logicalOrder=2;
			description="If enabled with CBA, Beanbag rounds will reduce the stamina of hit targets, and will ragdoll them if they are hit in the legs.<br/>This is an <t color='#ff0000'>experimental feature</t> that is currently being tested. Thus far, it works well in singleplayer and localhost MP environments, pending testing on dedicated server environments.<br/>Please report any bugs on <a href='https://steamcommunity.com/workshop/filedetails/?id=1977416750'>this mod's workshop page!</a><br/><br/><t size='1.25'>CBA Settings</t><br/><br/>%2 Enable Beanbag Scripting - Self explanatory. Enables/disables the scripted beanbag effects. Enforce this through server or mission settings for best effect.<br/>%2 Rounds will still be available for use, but if this is disabled, they will do nothing upon impact.<br/><br/>%2 Enable Beanbag Incapacitation - Governs whether or not hit targets will be ragdolled. Can be turned off to allow only the fatigue drain effect.<br/><br/>%2 Beanbag Stamina Divider - Targets will have their stamina drained by dividing their current stamina amount by this integer. Higher values increase stamina drain.";
			tip="";
			displayNameShort="don't fucking say beanbag royale you little shit";
			image="cox_40mikemikes\icon_main.paa";
		};
	};
};
class cfgMagazineWells
{
	class CBA_12g_8rnds
	{
		40mmextras[]=
		{
			"40xtra_8Rnd_12g_buckshotmg",
			"40xtra_8Rnd_12g_buckshotbb",
			"40xtra_8Rnd_12g_buckshotflec",
		};
	};
	class CBA_12g_7rnds
	{
		40mmextras[]=
		{
			"40xtra_7Rnd_12g_buckshotmg",
			"40xtra_7Rnd_12g_buckshotbb",
			"40xtra_7Rnd_12g_buckshotflec",
		};
	};
	class CBA_12g_6rnds
	{
		40mmextras[]=
		{
			"40xtra_6Rnd_12g_buckshotmg",
			"40xtra_6Rnd_12g_buckshotbb",
			"40xtra_6Rnd_12g_buckshotflec",
		};
	};
	class CBA_12g_5rnds
	{
		40mmextras[]=
		{
			"40xtra_5Rnd_12g_buckshotmg",
			"40xtra_5Rnd_12g_buckshotbb",
			"40xtra_5Rnd_12g_buckshotflec",
		};
	};
	class CBA_12g_4rnds
	{
		40mmextras[]=
		{
			"40xtra_4Rnd_12g_buckshotmg",
			"40xtra_4Rnd_12g_buckshotbb",
			"40xtra_4Rnd_12g_buckshotflec",
		};
	};
	class CBA_12g_3rnds
	{
		40mmextras[]=
		{
			"40xtra_3Rnd_12g_buckshotmg",
			"40xtra_3Rnd_12g_buckshotbb",
			"40xtra_3Rnd_12g_buckshotflec",
		};
	};
	class CBA_12g_2rnds
	{
		40mmextras[]=
		{
			"40xtra_2Rnd_12g_buckshotmg",
			"40xtra_2Rnd_12g_buckshotbb",
			"40xtra_2Rnd_12g_buckshotflec",
		};
	};
	class CBA_12g_1rnd
	{
		40mmextras[]=
		{
			"40xtra_1Rnd_12g_buckshotmg",
			"40xtra_1Rnd_12g_buckshotbb",
			"40xtra_1Rnd_12g_buckshotflec",
		};
	};
	class HunterShotgun_01_12GA
	{
		40mmextras[]=
		{
			"40xtra_2Rnd_12g_buckshotmg",
			"40xtra_2Rnd_12g_buckshotbb",
			"40xtra_2Rnd_12g_buckshotflec",
			"40xtra_1Rnd_12g_buckshotmg",
			"40xtra_1Rnd_12g_buckshotbb",
			"40xtra_1Rnd_12g_buckshotflec",
		};
	};
};
class CfgAmmo
{
	class G_40mm_HE;
	class B_12Gauge_Pellets_Submunition;
	class 40xtra_G_40mm_buckshotmg: B_12Gauge_Pellets_Submunition
	{
		author="COXHOUND Modding Unit";
		allowAgainstInfantry=1;
		aiAmmoUsageFlags=64;
		submunitionAmmo[]=
		{
			"40xtra_pellet_submunition_mg",
			1
		};
		submunitionConeType[]=
		{
			"poissondisc",
			16
		};
		submunitionCount=16;
		submunitionDirectionType="SubmunitionModelDirection";
		thrust=210;
		triggerSpeedCoef[]={0.69,0.85000002};
		explosionSoundEffect="";
		soundHit[]=
		{
			"",
			10,
			1
		};
		multiSoundHit[]=
		{
			"soundHit1",
			1
		};
		hitGround[]=
		{
			"soundHit1",
			0.33000001,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		hitMan[]=
		{
			"soundHitBody1",
			0.125,
			"soundHitBody2",
			0.125,
			"soundHitBody3",
			0.125,
			"soundHitBody4",
			0.125,
			"soundHitBody5",
			0.125,
			"soundHitBody6",
			0.125,
			"soundHitBody7",
			0.125,
			"soundHitBody8",
			0.125
		};
		soundHitBody1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01",
			1,
			1,
			75
		};
		soundHitBody2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02",
			1,
			1,
			75
		};
		soundHitBody3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03",
			1,
			1,
			75
		};
		soundHitBody4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04",
			1,
			1,
			75
		};
		soundHitBody5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05",
			1,
			1,
			75
		};
		soundHitBody6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06",
			1,
			1,
			75
		};
		soundHitBody7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07",
			1,
			1,
			75
		};
		soundHitBody8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08",
			1,
			1,
			75
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01",
			3.1622801,
			1,
			1500
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01",
			3.1622801,
			1,
			1500
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01",
			3.1622801,
			1,
			1500
		};
		SoundSetExplosion[]={};
		class CamShakeFire
		{
			distance=0;
			duration=0;
			frequency=0;
			power=0;
		};
		class CamShakePlayerFire
		{
			distance=0;
			duration=0;
			frequency=0;
			power=0;
		};
		class CamShakeHit
		{
			distance=1;
			duration=0.2;
			frequency=30;
			power=3;
		};
		class CamShakeExplode
		{
			distance=5.1961498;
			duration=0.40000001;
			frequency=20;
			power=1.7320499;
		};
		class HitEffects
		{
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitBuilding="ImpactPlaster";
			hitConcrete="ImpactConcrete";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitGroundHard="ImpactEffectsHardGround";
			hitGroundRed="ImpactEffectsRed";
			hitGroundSoft="ImpactEffectsSmall";
			hitHay="ImpactHay";
			hitMan="ImpactEffectsBlood";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitVirtual="ImpactMetal";
			hitWater="ImpactEffectsWater";
			hitWood="ImpactWood";
		};
	};
	class 40xtra_G_40mm_slap: 40xtra_G_40mm_buckshotmg
	{
		aiAmmoUsageFlags="64 + 128";
		allowAgainstInfantry=1;
		author="COXHOUND Modding Unit";
		submunitionAmmo[]=
		{
			"40xtra_pellet_submunition_slap",
			1
		};
		submunitionConeType[]=
		{
			"poissondisc",
			1
		};
		submunitionCount=1;
		simulation="shotBullet";
	};
	class B_12Gauge_Pellets_Submunition_Deploy;
	class 40xtra_pellet_submunition_slap: B_12Gauge_Pellets_Submunition_Deploy
	{
		author="COXHOUND Modding Unit";
		caliber=3.4000001;
		hit=60;
		simulation="shotBullet";
		craterWaterEffects="ImpactEffectsWater";
		craterEffects="ImpactEffectsMedium";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerEndTime=5;
		tracerScale=1.2;
		tracerColor[]={0.69999999,0.69999999,0.5,0.039999999};
		tracerStartTime=0.075000003;
	};
	class 40xtra_pellet_submunition_sg: B_12Gauge_Pellets_Submunition_Deploy
	{
		author="COXHOUND Modding Unit";
		caliber=1;
		hit=2.5;
		airFriction=-0.0020000001;
		penetrationDirDistribution=0.34999999;
		deflecting=2.5;
		deflectionSlowDown=0.89999998;
		sideAirFriction=0.85000002;
		dangerRadiusHit=-1;
		dangerRadiusBulletClose=4;
		audibleFire=40;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
		visibleFire=3;
		visibleFireTime=2;
		simulation="shotBullet";
		craterWaterEffects="ImpactEffectsWater";
		craterEffects="ImpactEffectsSmall";
	};
	class 40xtra_pellet_bshot_sg: B_12Gauge_Pellets_Submunition_Deploy
	{
		author="COXHOUND Modding Unit";
		caliber=1;
		hit=2.5;
		airFriction=-0.0020000001;
		penetrationDirDistribution=0.34999999;
		deflecting=2.5;
		deflectionSlowDown=0.89999998;
		sideAirFriction=0.85000002;
		dangerRadiusHit=-1;
		dangerRadiusBulletClose=4;
		audibleFire=40;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
		visibleFire=3;
		visibleFireTime=2;
		simulation="shotBullet";
		craterWaterEffects="ImpactEffectsWater";
		craterEffects="ImpactEffectsSmall";
		typicalSpeed=440;
	};
	class 40xtra_pellet_bshot_slug: 40xtra_pellet_bshot_sg
	{
		author="COXHOUND Modding Unit";
		caliber=3;
		hit=16;
		simulation="shotBullet";
		airFriction=-0.00050000002;
		deflecting=9;
		deflectionSlowDown=0.5;
		penetrationDirDistribution=0.1;
		sideAirFriction=0.5;
		craterEffects="ImpactEffectsMedium";
		dangerRadiusHit=-1;
		dangerRadiusBulletClose=8;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		typicalSpeed=450;
	};
	class 40xtra_pellet_submunition_mg: 40xtra_pellet_submunition_sg
	{
		author="COXHOUND Modding Unit";
		hit=4;
		caliber=1.5;
		airFriction=-0.0049999999;
		deflecting=5;
		deflectionSlowDown=0.69999999;
		penetrationDirDistribution=0.2;
		sideAirFriction=0.75;
		craterEffects="ImpactEffectsMedium";
		dangerRadiusHit=-1;
		dangerRadiusBulletClose=5;
		suppressionRadiusBulletClose=3;
		suppressionRadiusHit=5;
	};
	class 40xtra_G_cluster: 40xtra_G_40mm_buckshotmg
	{
		aiAmmoUsageFlags="64 + 128";
		allowAgainstInfantry=1;
		author="COXHOUND Modding Unit";
		submunitionAmmo[]=
		{
			"40xtra_bomblet_submunition",
			5
		};
		submunitionConeType[]=
		{
			"poissondisccenter",
			5
		};
		submunitionConeAngle=2;
		submunitionCount=5;
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=77.5;
		triggerSpeedCoef[]={0.99000001,1};
	};
	class 40xtra_bomblet_submunition: G_40mm_HE
	{
		author="COXHOUND Modding Unit";
		hit=8;
		explosionTime=0;
		explosive=1;
		indirectHit=4;
		indirectHitRange=1.75;
		explosionForceCoef=1.5;
		dangerRadiusHit=20;
		minDamageForCamShakeHit=0.25;
		CraterEffects="GrenadeCrater";
		explosionEffects="12GHEEffect";
		SoundSetExplosion[]=
		{
			"MiniGrenade_Exp_SoundSet",
			"MiniGrenade_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",
			3.1622801,
			1,
			1300
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",
			3.1622801,
			1,
			1300
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",
			3.1622801,
			1,
			1300
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",
			3.1622801,
			1,
			1300
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			distance=5;
			duration=1.2;
			frequency=20;
			power=8;
		};
		class CamShakeFire
		{
			distance=0;
			duration=0.2;
			frequency=20;
			power=0;
		};
		class CamShakeHit
		{
			distance=1;
			duration=0.40000001;
			frequency=20;
			power=20;
		};
		class CamShakePlayerFire
		{
			distance=1;
			duration=0.1;
			frequency=20;
			power=0;
		};
	};
	class 40xtra_pellet_submunition_slug: B_12Gauge_Pellets_Submunition_Deploy
	{
		author="COXHOUND Modding Unit";
		caliber=2;
		hit=20;
		simulation="shotBullet";
		penetrationDirDistribution=0.15000001;
		craterWaterEffects="ImpactEffectsWater";
		craterEffects="ImpactEffectsMedium";
		minimumSafeZone=0;
		triggerDistance=1;
		SoundSetExplosion[]=
		{
			""
		};
		soundHit[]=
		{
			"",
			1,
			1,
			45
		};
		soundHit1[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit2[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit3[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit4[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit5[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit6[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
	};
	class 40xtra_pellet_submunition_throwable: 40xtra_pellet_submunition_slug
	{
		author="COXHOUND Modding Unit";
		caliber=2;
		hit=20;
		dangerRadiusBulletClose=-1;
		deflecting=0;
		simulation="shotBullet";
		penetrationDirDistribution=0.15000001;
	};
	class 40xtra_pellet_submunition_hedp: 40xtra_pellet_submunition_slug
	{
		author="COXHOUND Modding Unit";
		penetrationDirDistribution=0;
		deflecting=0;
		deflectionSlowDown=0.80000001;
		airFriction=-0.28;
		sideAirFriction=1;
	};
	class 40xtra_pellet_submunition_heav: 40xtra_pellet_submunition_slap
	{
		author="COXHOUND Modding Unit";
		penetrationDirDistribution=0;
		deflecting=0;
		deflectionSlowDown=0.80000001;
		airFriction=-0.28;
		sideAirFriction=1;
	};
	class 40xtra_G_inert: G_40mm_HE
	{
		aiAmmoUsageFlags=64;
		thrust=210;
		explosionSoundEffect="";
		explosionEffects="";
		explosionDir="";
		explosionEffectsDir="";
		explosionPos="";
		SoundSetExplosion[]=
		{
			""
		};
		soundHit[]=
		{
			"",
			1,
			1,
			45
		};
		soundHit1[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit2[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit3[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit4[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit5[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		soundHit6[]=
		{
			"",
			3.1622801,
			1,
			1500
		};
		fuseDistance=0;
		explosive=0;
		explosionTime=-1;
		simulation="shotShell";
		type=256;
		airFriction=-0.00050000002;
		caliber=1;
		effectsSmoke="SmokeShellWhite";
		explosionAngle=60;
		hit=20;
		craterWaterEffects="ImpactEffectsWater";
		craterEffects="ImpactEffectsMedium";
		indirectHit=0;
		indirectHitRange=0;
		sideAirFriction=1;
		suppressionRadiusHit=4;
		suppressionRadiusBulletClose=2;
		submunitionAmmo[]=
		{
			"40xtra_pellet_submunition_slug",
			1
		};
		submunitionConeType[]=
		{
			"poissondisc",
			1
		};
		submunitionInitialOffset[]={0,0,-1};
		submunitionCount=1;
		triggerOnImpact=1;
		triggerTime=-1;
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		deleteParentWhenTriggered=1;
		timeToLive=30;
		class CamShakeFire
		{
			distance=0;
			duration=0;
			frequency=0;
			power=0;
		};
		class CamShakePlayerFire
		{
			distance=0;
			duration=0;
			frequency=0;
			power=0;
		};
		class CamShakeHit
		{
			distance=1;
			duration=0.2;
			frequency=30;
			power=3;
		};
		class CamShakeExplode
		{
			distance=5.1961498;
			duration=0.40000001;
			frequency=20;
			power=1.7320499;
		};
	};
	class 40xtra_G_40mm_prank: 40xtra_G_inert
	{
		explosionEffects="TrainingMineEffect";
		aiAmmoUsageFlags=0;
		author="COXHOUND Modding Unit";
		fuseDistance=0;
		explosionTime=9.9999997e-005;
		SoundSetExplosion[]=
		{
			"TrainingMine_Exp_SoundSet",
			"TrainingMine_Flag_SoundSet"
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_01",
			3.1622801,
			1,
			1500
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_02",
			3.1622801,
			1,
			1500
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.5,
			"soundHit2",
			0.5
		};
		submunitionAmmo[]=
		{
			"",
			1
		};
		explosionType="mine";
		submunitionConeType[]=
		{
			"poissondisc",
			1
		};
		submunitionCount=1;
		triggerOnImpact=1;
		triggerDistance=1;
		deleteParentWhenTriggered=1;
		timeToLive=30;
		triggerTime=-1;
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=0;
		weaponLockSystem=0;
	};
	class G_40mm_Smoke;
	class 40xtra_G_40mm_wp: G_40mm_HE
	{
		aiAmmoUsageFlags="4 + 64";
		indirectHit=4;
		indirectHitRange=3;
		ExplosionEffects="40mmWPExplosion";
		author="COXHOUND Modding Unit";
		smokeColor[]={1,1,0.80400002,0.85000002};
	};
	class 40xtra_G_40mm_mswhite: G_40mm_Smoke
	{
		aiAmmoUsageFlags="4 + 64";
		indirectHit=2;
		indirectHitRange=1;
		effectsSmoke="40mmMaskSmokeWEffect";
		author="COXHOUND Modding Unit";
		explosionTime=0;
		smokeColor[]={1,1,1,1};
	};
	class 40xtra_G_40mm_msblack: G_40mm_Smoke
	{
		aiAmmoUsageFlags="4 + 64";
		indirectHit=2;
		indirectHitRange=1;
		effectsSmoke="40mmMaskSmokeWEffect";
		author="COXHOUND Modding Unit";
		explosionTime=0;
		smokeColor[]={0,0,0,1};
	};
	class 40xtra_G_40mm_msblue: G_40mm_Smoke
	{
		aiAmmoUsageFlags="4 + 64";
		indirectHit=2;
		indirectHitRange=1;
		effectsSmoke="40mmMaskSmokeWEffect";
		author="COXHOUND Modding Unit";
		explosionTime=0;
		smokeColor[]={0.176,0.176,0.36500001,1};
	};
	class 40xtra_G_40mm_mspink: G_40mm_Smoke
	{
		aiAmmoUsageFlags="4 + 64";
		indirectHit=2;
		indirectHitRange=1;
		effectsSmoke="40mmMaskSmokeWEffect";
		author="COXHOUND Modding Unit";
		explosionTime=0;
		smokeColor[]={0.82700002,0.63499999,0.773,1};
	};
	class 40xtra_G_40mm_msorange: G_40mm_Smoke
	{
		aiAmmoUsageFlags="4 + 64";
		indirectHit=2;
		indirectHitRange=1;
		effectsSmoke="40mmMaskSmokeWEffect";
		author="COXHOUND Modding Unit";
		explosionTime=0;
		smokeColor[]={0.37599999,0.18000001,0.050999999,1};
	};
	class 40xtra_G_40mm_mscyan: G_40mm_Smoke
	{
		aiAmmoUsageFlags="4 + 64";
		indirectHit=2;
		indirectHitRange=1;
		effectsSmoke="40mmMaskSmokeWEffect";
		author="COXHOUND Modding Unit";
		explosionTime=0;
		smokeColor[]={0,0.498,0.498,1};
	};
	class 40xtra_pellet_bshot_mg: 40xtra_pellet_bshot_sg
	{
		author="COXHOUND Modding Unit";
		hit=4;
		caliber=1.5;
		airFriction=-0.0049999999;
		deflecting=5;
		deflectionSlowDown=0.69999999;
		penetrationDirDistribution=0.2;
		sideAirFriction=0.75;
		craterEffects="ImpactEffectsMedium";
		dangerRadiusHit=-1;
		dangerRadiusBulletClose=5;
		suppressionRadiusBulletClose=3;
		suppressionRadiusHit=5;
		typicalSpeed=418;
	};
	class 40xtra_pellet_bshot_bb: 40xtra_pellet_bshot_slug
	{
		author="COXHOUND Modding Unit";
		caliber=1;
		hit=1;
		airFriction=-0.02;
		deflecting=0;
		deflectionSlowDown=1;
		penetrationDirDistribution=0.5;
		sideAirFriction=0.85000002;
		craterEffects="ImpactEffectsMedium";
		dangerRadiusHit=-1;
		dangerRadiusBulletClose=7;
		suppressionRadiusBulletClose=5;
		suppressionRadiusHit=7;
		typicalSpeed=340;
	};
	class 40xtra_pellet_bshot_bbfly: 40xtra_pellet_bshot_slug
	{
		author="COXHOUND Modding Unit";
		caliber=1;
		hit=1;
		airFriction=-0.02;
		deflecting=0;
		deflectionSlowDown=1;
		penetrationDirDistribution=0.5;
		sideAirFriction=0.85000002;
		craterEffects="ImpactEffectsMedium";
		dangerRadiusHit=-1;
		dangerRadiusBulletClose=7;
		suppressionRadiusBulletClose=5;
		suppressionRadiusHit=7;
		typicalSpeed=340;
		model="\A3\Weapons_F\Ammo\UGL_Flare";
		simulation="shotShell";
		submunitionAmmo[]=
		{
			"40xtra_pellet_bshot_bb",
			1
		};
		submunitionConeType[]=
		{
			"poissondisc",
			1
		};
		submunitionCount=1;
		triggerOnImpact=1;
		deleteParentWhenTriggered=1;
		triggerTime=-1;
	};
	class F_Signal_Green;
	class B_19mm_HE;
	class 40xtra_pellet_bshot_hexplo: B_19mm_HE
	{
		author="COXHOUND Modding Unit";
		thrust=0;
		explosive=1;
		fuseDistance=0;
		explosionTime=0;
		SoundSetExplosion[]=
		{
			"GrenadeHe_Exp_SoundSet",
			"GrenadeHe_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_01",
			2.5118899,
			1,
			1500
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_02",
			2.5118899,
			1,
			1500
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_03",
			2.5118899,
			1,
			1500
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_04",
			2.5118899,
			1,
			1500
		};
		class CamShakeExplode
		{
			distance=5;
			duration=1.2;
			frequency=20;
			power=8;
		};
		class CamShakeFire
		{
			distance=0;
			duration=0.2;
			frequency=20;
			power=0;
		};
		class CamShakeHit
		{
			distance=1;
			duration=0.40000001;
			frequency=20;
			power=20;
		};
		class CamShakePlayerFire
		{
			distance=1;
			duration=0.1;
			frequency=20;
			power=0;
		};
		hit=8;
		indirectHit=4;
		indirectHitRange=1.75;
	};
	class 40xtra_pellet_bshot_shellexplo: 40xtra_pellet_bshot_sg
	{
		author="COXHOUND Modding Unit";
		caliber=0.95539999;
		airFriction=-0.0016;
		deflecting=0;
		deflectionSlowDown=0.69999999;
		penetrationDirDistribution=0.2;
		sideAirFriction=0.75;
		thrust=0;
		explosive=0.80000001;
		fuseDistance=0;
		explosionTime=0;
		typicalSpeed=425;
		craterEffects="SecondaryCrater";
		explosionEffects="12GHEEffect";
		explosionType="explosive";
		minDamageForCamShakeHit=0.25;
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		SoundSetExplosion[]=
		{
			"MiniGrenade_Exp_SoundSet",
			"MiniGrenade_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",
			3.1622801,
			1,
			1300
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",
			3.1622801,
			1,
			1300
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",
			3.1622801,
			1,
			1300
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",
			3.1622801,
			1,
			1300
		};
		class CamShakeExplode
		{
			distance=3;
			duration=0.60000002;
			frequency=20;
			power=4;
		};
		class CamShakeFire
		{
			distance=0;
			duration=0.2;
			frequency=20;
			power=0;
		};
		class CamShakeHit
		{
			distance=1;
			duration=0.40000001;
			frequency=20;
			power=12;
		};
		class CamShakePlayerFire
		{
			distance=1;
			duration=0.1;
			frequency=20;
			power=0;
		};
		hit=6;
		indirectHit=3;
		indirectHitRange=0.75;
		cartridge="40mm_fx_slug_dgreen";
	};
	class 40xtra_pellet_bshot_dbfire: F_Signal_Green
	{
		author="COXHOUND Modding Unit";
		caliber=1;
		hit=1;
		effectsSmoke="12gDBEffect";
		lightColor[]={0.5,0.25,0.25,0};
		brightness=3;
		size=0.015;
		triggerTime=0.1;
		timeToLive=10;
		minimumSafeZone=0;
		simulation="shotSmoke";
		airFriction=-0.02;
		deflecting=0;
		deflectionSlowDown=1;
		penetrationDirDistribution=0.5;
		sideAirFriction=0.85000002;
		craterEffects="ImpactEffectsMedium";
		dangerRadiusHit=-1;
		dangerRadiusBulletClose=7;
		suppressionRadiusBulletClose=5;
		suppressionRadiusHit=7;
		thrust=0;
		thrustTime=1.5;
		maxSpeed=150;
		typicalSpeed=150;
	};
	class 40xtra_pellet_bshot_dbtracer: 40xtra_pellet_bshot_sg
	{
		author="COXHOUND Modding Unit";
		caliber=0.029999999;
		hit=4;
		airFriction=-0.0016;
		deflecting=0;
		deflectionSlowDown=1;
		penetrationDirDistribution=0.2;
		sideAirFriction=0.75;
		craterEffects="GrenadeCrater";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		simulation="shotShell";
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		timeToLive=5;
		triggerTime=-1;
		tracerEndTime=999;
		tracerScale=10;
		tracerColor[]={1,0.69999999,0.5,1};
		tracerColorR[]={1,0.69999999,0.5,1};
		tracerStartTime=0.075000003;
		typicalSpeed=280;
		EffectFly="12gDBTracerFlyEffect";
		dangerRadiusHit=-1;
		dangerRadiusBulletClose=5;
		suppressionRadiusBulletClose=3;
		suppressionRadiusHit=5;
		submunitionAmmo[]=
		{
			"40xtra_pellet_bshot_dbfire",
			1
		};
		submunitionConeType[]=
		{
			"poissondisc",
			1
		};
		submunitionInitSpeed=0;
		submunitionCount=1;
	};
	class 40xtra_pellet_bshot_incen: 40xtra_pellet_bshot_sg
	{
		author="COXHOUND Modding Unit";
		caliber=0.029999999;
		hit=0.5;
		airFriction=-0.0016;
		deflecting=0;
		deflectionSlowDown=1;
		penetrationDirDistribution=0.2;
		sideAirFriction=0.75;
		craterEffects="ImpactEffectsMedium";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		simulation="shotShell";
		tracerEndTime=999;
		tracerScale=10;
		tracerColor[]={1,0.5,0.5,1};
		tracerColorR[]={1,0.5,0.5,1};
		tracerStartTime=0.075000003;
		dangerRadiusHit=-1;
		dangerRadiusBulletClose=5;
		suppressionRadiusBulletClose=3;
		suppressionRadiusHit=5;
		submunitionAmmo[]=
		{
			"40xtra_pellet_bshot_dbfire",
			1
		};
		submunitionConeType[]=
		{
			"poissondisc",
			1
		};
		submunitionInitSpeed=0;
		submunitionCount=1;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		triggerTime=-1;
	};
	class 40xtra_pellet_bshot_flec: 40xtra_pellet_bshot_sg
	{
		author="COXHOUND Modding Unit";
		caliber=2.5;
		hit=3;
		simulation="shotBullet";
		airFriction=-0.00075000001;
		dangerRadiusHit=-1;
		suppressionRadiusBulletClose=5;
		suppressionRadiusHit=7;
		typicalSpeed=400;
		deflecting=1;
		deflectionSlowDown=0.89999998;
		penetrationDirDistribution=0.075000003;
		sideAirFriction=0.25;
		craterEffects="ImpactEffectsMedium";
	};
	class 40xtra_pellet_bshot_rssmall: 40xtra_pellet_bshot_sg
	{
		author="COXHOUND Modding Unit";
		caliber=0.33000001;
		hit=0.30000001;
		airFriction=-0.0074999998;
		penetrationDirDistribution=1;
		deflecting=15;
		deflectionSlowDown=0.34999999;
		sideAirFriction=0.85000002;
		submunitionParentSpeedCoef=1;
		typicalspeed=330;
	};
	class 40xtra_pellet_bshot_rsmedi: 40xtra_pellet_bshot_mg
	{
		author="COXHOUND Modding Unit";
		hit=0.60000002;
		caliber=0.5;
		airFriction=-0.0049999999;
		deflecting=30;
		deflectionSlowDown=0.25;
		penetrationDirDistribution=0.75;
		sideAirFriction=0.75;
		triggerTime=0.66000003;
		submunitionAmmo[]=
		{
			"40xtra_pellet_bshot_rssmall",
			1
		};
		submunitionConeType[]=
		{
			"poissondisc",
			2
		};
		submunitionCount=2;
		triggerSpeedCoef[]={0.89999998,1};
		submunitionConeAngle=1.5;
		deleteParentWhenTriggered=0;
		submunitionParentSpeedCoef=1;
		submunitionInitialOffset[]={0,0,-1};
		typicalspeed=330;
	};
	class 40xtra_ammo_12g_bsmg: B_12Gauge_Pellets_Submunition
	{
		author="COXHOUND Modding Unit";
		allowAgainstInfantry=1;
		aiAmmoUsageFlags="64 + 128 + 256";
		submunitionAmmo[]=
		{
			"40xtra_pellet_bshot_mg",
			1
		};
		submunitionConeType[]=
		{
			"poissondisc",
			16
		};
		submunitionCount=16;
		submunitionDirectionType="SubmunitionModelDirection";
		thrust=210;
		submunitionConeAngle=0.2;
		cartridge="40mm_fx_slug_orange";
		triggerSpeedCoef[]={0.85000002,1};
		explosionSoundEffect="";
		audibleFire=20;
		dangerRadiusHit=0;
		dangerRadiusBulletClose=0;
		suppressionRadiusBulletClose=0;
		suppressionRadiusHit=0;
		soundHit[]=
		{
			"",
			10,
			1
		};
		multiSoundHit[]=
		{
			"soundHit1",
			1
		};
		hitGround[]=
		{
			"soundHit1",
			0.33000001,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		hitMan[]=
		{
			"soundHitBody1",
			0.125,
			"soundHitBody2",
			0.125,
			"soundHitBody3",
			0.125,
			"soundHitBody4",
			0.125,
			"soundHitBody5",
			0.125,
			"soundHitBody6",
			0.125,
			"soundHitBody7",
			0.125,
			"soundHitBody8",
			0.125
		};
		soundHitBody1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01",
			1,
			1,
			75
		};
		soundHitBody2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02",
			1,
			1,
			75
		};
		soundHitBody3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03",
			1,
			1,
			75
		};
		soundHitBody4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04",
			1,
			1,
			75
		};
		soundHitBody5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05",
			1,
			1,
			75
		};
		soundHitBody6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06",
			1,
			1,
			75
		};
		soundHitBody7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07",
			1,
			1,
			75
		};
		soundHitBody8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08",
			1,
			1,
			75
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01",
			3.1622801,
			1,
			1500
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01",
			3.1622801,
			1,
			1500
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01",
			3.1622801,
			1,
			1500
		};
		SoundSetExplosion[]={};
		class CamShakeFire
		{
			distance=0;
			duration=0;
			frequency=0;
			power=0;
		};
		class CamShakePlayerFire
		{
			distance=0;
			duration=0;
			frequency=0;
			power=0;
		};
		class CamShakeHit
		{
			distance=1;
			duration=0.2;
			frequency=30;
			power=3;
		};
		class CamShakeExplode
		{
			distance=5.1961498;
			duration=0.40000001;
			frequency=20;
			power=1.7320499;
		};
		class HitEffects
		{
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitBuilding="ImpactPlaster";
			hitConcrete="ImpactConcrete";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitGroundHard="ImpactEffectsHardGround";
			hitGroundRed="ImpactEffectsRed";
			hitGroundSoft="ImpactEffectsSmall";
			hitHay="ImpactHay";
			hitMan="ImpactEffectsBlood";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitVirtual="ImpactMetal";
			hitWater="ImpactEffectsWater";
			hitWood="ImpactWood";
		};
	};
	class 40xtra_ammo_12g_bsbb: 40xtra_ammo_12g_bsmg
	{
		aiAmmoUsageFlags=64;
		allowAgainstInfantry=1;
		author="COXHOUND Modding Unit";
		submunitionAmmo[]=
		{
			"40xtra_pellet_bshot_bbfly",
			1
		};
		submunitionConeType[]=
		{
			"poissondisc",
			1
		};
		submunitionCount=1;
		simulation="shotBullet";
		cartridge="40mm_fx_slug_blue";
		submunitionConeAngle=0.34999999;
		triggerSpeedCoef[]={0.5,0.85000002};
	};
	class 40xtra_ammo_12g_bsmg_softload: 40xtra_ammo_12g_bsmg
	{
		author="COXHOUND Modding Unit";
		submunitionAmmo[]=
		{
			"40xtra_pellet_bshot_mg",
			1
		};
		submunitionConeType[]=
		{
			"random",
			16
		};
		submunitionCount=16;
		triggerSpeedCoef[]={0.69,0.85000002};
		submunitionConeAngle=0.60000002;
		cartridge="40mm_fx_slug_orange";
		aiAmmoUsageFlags="64 + 128 + 256";
	};
	class 40xtra_ammo_12g_bsflec: 40xtra_ammo_12g_bsmg
	{
		aiAmmoUsageFlags="64 + 128 + 256";
		allowAgainstInfantry=1;
		author="COXHOUND Modding Unit";
		submunitionAmmo[]=
		{
			"40xtra_pellet_bshot_flec",
			1
		};
		submunitionConeType[]=
		{
			"poissondisc",
			12
		};
		triggerSpeedCoef[]={0.94999999,1};
		submunitionCount=12;
		simulation="shotBullet";
		submunitionConeAngle=0.050000001;
		cartridge="40mm_fx_slug_black";
	};
};
class CfgMagazines
{
	class HandGrenade;
	class MiniGrenade;
	class 2Rnd_12Gauge_Pellets;
	class 40xtra_6Rnd_12g_buckshotmg: 2Rnd_12Gauge_Pellets
	{
		mass=4.5;
		author="COXHOUND Modding Unit";
		scope=2;
		count=6;
		scopeArsenal=2;
		model="cox_weapons\models\piles\orange\shell_pile_6.p3d";
		picture="\cox_40mikemikes\textures\shellicons\icon_shells_orange.paa";
		ammo="40xtra_ammo_12g_bsmg";
		descriptionShort="Type: 12 Gauge Shell, Medium Grain<br/>Caliber: 7.62mm pellets<br/>Pellet count: 16<br/>Rounds: 6<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 6Rnd, MG";
		displayNameShort="MG";
		type=256;
		initSpeed=418;
		deleteIfEmpty=-1;
	};
	class 40xtra_1Rnd_12g_buckshotmg: 40xtra_6Rnd_12g_buckshotmg
	{
		mass=0.75;
		author="COXHOUND Modding Unit";
		count=1;
		model="cox_weapons\models\piles\orange\shell_pile_1.p3d";
		descriptionShort="Type: 12 Gauge Shell, Medium Grain<br/>Caliber: 7.62mm pellets<br/>Pellet count: 16<br/>Rounds: 1<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 1Rnd, MG";
	};
	class 40xtra_2Rnd_12g_buckshotmg: 40xtra_6Rnd_12g_buckshotmg
	{
		mass=1.5;
		author="COXHOUND Modding Unit";
		count=2;
		model="cox_weapons\models\piles\orange\shell_pile_2.p3d";
		descriptionShort="Type: 12 Gauge Shell, Medium Grain<br/>Caliber: 7.62mm pellets<br/>Pellet count: 16<br/>Rounds: 2<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 2Rnd, MG";
	};
	class 40xtra_3Rnd_12g_buckshotmg: 40xtra_6Rnd_12g_buckshotmg
	{
		mass=2.25;
		author="COXHOUND Modding Unit";
		count=3;
		model="cox_weapons\models\piles\orange\shell_pile_3.p3d";
		descriptionShort="Type: 12 Gauge Shell, Medium Grain<br/>Caliber: 7.62mm pellets<br/>Pellet count: 16<br/>Rounds: 3<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 3Rnd, MG";
	};
	class 40xtra_4Rnd_12g_buckshotmg: 40xtra_6Rnd_12g_buckshotmg
	{
		mass=3;
		author="COXHOUND Modding Unit";
		count=4;
		model="cox_weapons\models\piles\orange\shell_pile_4.p3d";
		descriptionShort="Type: 12 Gauge Shell, Medium Grain<br/>Caliber: 7.62mm pellets<br/>Pellet count: 16<br/>Rounds: 4<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 4Rnd, MG";
	};
	class 40xtra_5Rnd_12g_buckshotmg: 40xtra_6Rnd_12g_buckshotmg
	{
		mass=3.75;
		author="COXHOUND Modding Unit";
		count=5;
		model="cox_weapons\models\piles\orange\shell_pile_5.p3d";
		descriptionShort="Type: 12 Gauge Shell, Medium Grain<br/>Caliber: 7.62mm pellets<br/>Pellet count: 16<br/>Rounds: 5<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 5Rnd, MG";
	};
	class 40xtra_7Rnd_12g_buckshotmg: 40xtra_6Rnd_12g_buckshotmg
	{
		mass=5.25;
		author="COXHOUND Modding Unit";
		count=7;
		model="cox_weapons\models\piles\orange\shell_pile_7.p3d";
		descriptionShort="Type: 12 Gauge Shell, Medium Grain<br/>Caliber: 7.62mm pellets<br/>Pellet count: 16<br/>Rounds: 7<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 7Rnd, MG";
	};
	class 40xtra_8Rnd_12g_buckshotmg: 40xtra_6Rnd_12g_buckshotmg
	{
		mass=6;
		author="COXHOUND Modding Unit";
		count=8;
		model="cox_weapons\models\piles\orange\shell_pile_8.p3d";
		descriptionShort="Type: 12 Gauge Shell, Medium Grain<br/>Caliber: 7.62mm pellets<br/>Pellet count: 16<br/>Rounds: 8<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 8Rnd, MG";
	};
	class 40xtra_6Rnd_12g_buckshotbb: 40xtra_6Rnd_12g_buckshotmg
	{
		author="COXHOUND Modding Unit";
		mass=4.5;
		count=6;
		scope=2;
		scopeArsenal=2;
		model="cox_weapons\models\piles\blue\shell_pile_6.p3d";
		picture="\cox_40mikemikes\textures\shellicons\icon_shells_blue.paa";
		ammo="40xtra_ammo_12g_bsbb";
		descriptionShort="Type: 12 Gauge Shell, Beanbag<br/>Caliber: 20mm bag<br/>Projectile count: 1<br/>Rounds: 6<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 6Rnd, Beanbag";
		displayNameShort="Beanbag";
		type=256;
		initSpeed=340;
	};
	class 40xtra_1Rnd_12g_buckshotbb: 40xtra_6Rnd_12g_buckshotbb
	{
		author="COXHOUND Modding Unit";
		mass=0.75;
		count=1;
		model="cox_weapons\models\piles\blue\shell_pile_1.p3d";
		descriptionShort="Type: 12 Gauge Shell, Beanbag<br/>Caliber: 20mm bag<br/>Projectile count: 1<br/>Rounds: 1<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 1Rnd, Beanbag";
	};
	class 40xtra_2Rnd_12g_buckshotbb: 40xtra_6Rnd_12g_buckshotbb
	{
		author="COXHOUND Modding Unit";
		mass=1.5;
		count=2;
		model="cox_weapons\models\piles\blue\shell_pile_2.p3d";
		descriptionShort="Type: 12 Gauge Shell, Beanbag<br/>Caliber: 20mm bag<br/>Projectile count: 1<br/>Rounds: 2<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 2Rnd, Beanbag";
	};
	class 40xtra_3Rnd_12g_buckshotbb: 40xtra_6Rnd_12g_buckshotbb
	{
		author="COXHOUND Modding Unit";
		mass=2.25;
		count=3;
		model="cox_weapons\models\piles\blue\shell_pile_3.p3d";
		descriptionShort="Type: 12 Gauge Shell, Beanbag<br/>Caliber: 20mm bag<br/>Projectile count: 1<br/>Rounds: 3<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 3Rnd, Beanbag";
	};
	class 40xtra_4Rnd_12g_buckshotbb: 40xtra_6Rnd_12g_buckshotbb
	{
		author="COXHOUND Modding Unit";
		mass=3;
		count=4;
		model="cox_weapons\models\piles\blue\shell_pile_4.p3d";
		descriptionShort="Type: 12 Gauge Shell, Beanbag<br/>Caliber: 20mm bag<br/>Projectile count: 1<br/>Rounds: 4<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 4Rnd, Beanbag";
	};
	class 40xtra_5Rnd_12g_buckshotbb: 40xtra_6Rnd_12g_buckshotbb
	{
		author="COXHOUND Modding Unit";
		mass=3.75;
		count=5;
		model="cox_weapons\models\piles\blue\shell_pile_5.p3d";
		descriptionShort="Type: 12 Gauge Shell, Beanbag<br/>Caliber: 20mm bag<br/>Projectile count: 1<br/>Rounds: 5<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 5Rnd, Beanbag";
	};
	class 40xtra_7Rnd_12g_buckshotbb: 40xtra_6Rnd_12g_buckshotbb
	{
		author="COXHOUND Modding Unit";
		mass=5.25;
		count=7;
		model="cox_weapons\models\piles\blue\shell_pile_4.p3d";
		descriptionShort="Type: 12 Gauge Shell, Beanbag<br/>Caliber: 20mm bag<br/>Projectile count: 1<br/>Rounds: 7<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 7Rnd, Beanbag";
	};
	class 40xtra_8Rnd_12g_buckshotbb: 40xtra_6Rnd_12g_buckshotbb
	{
		author="COXHOUND Modding Unit";
		mass=6;
		count=8;
		model="cox_weapons\models\piles\blue\shell_pile_8.p3d";
		descriptionShort="Type: 12 Gauge Shell, Beanbag<br/>Caliber: 20mm bag<br/>Projectile count: 1<br/>Rounds: 8<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 8Rnd, Beanbag";
	};
	class 40xtra_6Rnd_12g_buckshotflec: 40xtra_6Rnd_12g_buckshotmg
	{
		author="COXHOUND Modding Unit";
		mass=4.5;
		count=6;
		scope=2;
		scopeArsenal=2;
		picture="\cox_40mikemikes\textures\shellicons\icon_shells_black.paa";
		model="cox_weapons\models\piles\black\shell_pile_6.p3d";
		ammo="40xtra_ammo_12g_bsflec";
		descriptionShort="Type: 12 Gauge Shell, Flechette<br/>Caliber: N/A<br/>Dart count: 12<br/>Rounds: 6<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 6Rnd, Flechette";
		displayNameShort="Flec.";
		type=256;
		initSpeed=400;
	};
	class 40xtra_1Rnd_12g_buckshotflec: 40xtra_6Rnd_12g_buckshotflec
	{
		author="COXHOUND Modding Unit";
		mass=0.75;
		count=1;
		model="cox_weapons\models\piles\black\shell_pile_1.p3d";
		descriptionShort="Type: 12 Gauge Shell, Flechette<br/>Caliber: N/A<br/>Dart count: 12<br/>Rounds: 1<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 1Rnd, Flechette";
	};
	class 40xtra_2Rnd_12g_buckshotflec: 40xtra_6Rnd_12g_buckshotflec
	{
		author="COXHOUND Modding Unit";
		mass=1.5;
		count=2;
		model="cox_weapons\models\piles\black\shell_pile_2.p3d";
		descriptionShort="Type: 12 Gauge Shell, Flechette<br/>Caliber: N/A<br/>Dart count: 12<br/>Rounds: 2<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 2Rnd, Flechette";
	};
	class 40xtra_3Rnd_12g_buckshotflec: 40xtra_6Rnd_12g_buckshotflec
	{
		author="COXHOUND Modding Unit";
		mass=2.25;
		count=3;
		model="cox_weapons\models\piles\black\shell_pile_3.p3d";
		descriptionShort="Type: 12 Gauge Shell, Flechette<br/>Caliber: N/A<br/>Dart count: 12<br/>Rounds: 3<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 3Rnd, Flechette";
	};
	class 40xtra_4Rnd_12g_buckshotflec: 40xtra_6Rnd_12g_buckshotflec
	{
		author="COXHOUND Modding Unit";
		mass=3;
		count=4;
		model="cox_weapons\models\piles\black\shell_pile_4.p3d";
		descriptionShort="Type: 12 Gauge Shell, Flechette<br/>Caliber: N/A<br/>Dart count: 12<br/>Rounds: 4<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 4Rnd, Flechette";
	};
	class 40xtra_5Rnd_12g_buckshotflec: 40xtra_6Rnd_12g_buckshotflec
	{
		author="COXHOUND Modding Unit";
		mass=3.75;
		count=5;
		model="cox_weapons\models\piles\black\shell_pile_5.p3d";
		descriptionShort="Type: 12 Gauge Shell, Flechette<br/>Caliber: N/A<br/>Dart count: 12<br/>Rounds: 5<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 5Rnd, Flechette";
	};
	class 40xtra_7Rnd_12g_buckshotflec: 40xtra_6Rnd_12g_buckshotflec
	{
		author="COXHOUND Modding Unit";
		mass=5.25;
		count=7;
		model="cox_weapons\models\piles\black\shell_pile_7.p3d";
		descriptionShort="Type: 12 Gauge Shell, Flechette<br/>Caliber: N/A<br/>Dart count: 12<br/>Rounds: 7<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 7Rnd, Flechette";
	};
	class 40xtra_8Rnd_12g_buckshotflec: 40xtra_6Rnd_12g_buckshotflec
	{
		author="COXHOUND Modding Unit";
		mass=6;
		count=8;
		model="cox_weapons\models\piles\black\shell_pile_8.p3d";
		descriptionShort="Type: 12 Gauge Shell, Flechette<br/>Caliber: N/A<br/>Dart count: 12<br/>Rounds: 8<br/>Used in: 12 gauge shotguns";
		displayName="12 Gauge 8Rnd, Flechette";
	};
};
class cfgEditorCategories
{
	class contentpack_categories
	{
		displayName="COXHOUND Content Pack";
	};
};
class CfgEditorSubcategories
{
	class 40mm_subcat_weaponprops
	{
		displayName="Weapons (Props)";
	};
	class 40mm_subcat_weaponpickups
	{
		displayName="Weapons (Pickups)";
	};
	class 40mm_subcat_ammoprops
	{
		displayName="Ammo (Props)";
	};
	class 40mm_subcat_ammopickups
	{
		displayName="Ammo (Pickups)";
	};
};
class CfgVehicleClasses
{
	class 40mm_vehclass_weaponprops
	{
		displayName="Weapons (Props)";
	};
	class 40mm_vehclass_weaponpickups
	{
		displayName="Weapons (Pickups)";
	};
	class 40mm_vehclass_ammoprops
	{
		displayName="Ammo (Props)";
	};
	class 40mm_vehclass_ammopickups
	{
		displayName="Ammo (Pickups)";
	};
};
class CfgVehicles
{
	class Item_acc_flashlight;
	class 40mm_pickup_base: Item_acc_flashlight
	{
		scope=0;
		scopeCurator=2;
		editorCategory="contentpack_categories";
		editorSubcategory="40mm_subcat_ammopickups";
		vehicleClass="40mm_vehclass_ammopickups";
		author="COXHOUND Modding Unit";
		model="\A3\Weapons_f\DummyItemHorizontal.p3d";
		editorPreview="cox_40mikemikes\textures\shellicons\icon_shells_black.paa";
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
		};
		class TransportWeapons
		{
		};
	};
	class 40mm_pickup_weapon_berger50: 40mm_pickup_base
	{
		scope=2;
		displayName="DB Berger 50 12 Gauge";
		author="COXHOUND Modding Unit";
		model="\A3\Weapons_f\DummyWeapon_Single.p3d";
		editorSubcategory="40mm_subcat_weaponpickups";
		vehicleClass="40mm_vehclass_weaponpickups";
		editorPreview="cox_weapons\data\cox_shotgun_icon.paa";
		class TransportWeapons
		{
			class cox_weapon_berger50
			{
				count=1;
				weapon="cox_weapon_berger50";
			};
		};
	};
	class 40mm_pickup_weapon_berger50_lesslethal: 40mm_pickup_weapon_berger50
	{
		scope=2;
		displayName="DB Berger 50 (Less Lethal)";
		author="COXHOUND Modding Unit";
		class TransportWeapons
		{
			class cox_weapon_berger50_lesslethal
			{
				count=1;
				weapon="cox_weapon_berger50_lesslethal";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotflec_1shell: 40mm_pickup_base
	{
		scope=2;
		displayName="12 Gauge 1rnd, Flechette";
		author="COXHOUND Modding Unit";
		editorPreview="cox_40mikemikes\textures\shellicons\icon_shells_black.paa";
		class TransportMagazines
		{
			class 40xtra_1Rnd_12g_buckshotflec
			{
				count=1;
				magazine="40xtra_1Rnd_12g_buckshotflec";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotflec_2shell: 40mm_pickup_ammo_12g_buckshotflec_1shell
	{
		scope=2;
		displayName="12 Gauge 2rnd, Flechette";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_2Rnd_12g_buckshotflec
			{
				count=1;
				magazine="40xtra_2Rnd_12g_buckshotflec";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotflec_3shell: 40mm_pickup_ammo_12g_buckshotflec_1shell
	{
		scope=2;
		displayName="12 Gauge 3rnd, Flechette";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_3Rnd_12g_buckshotflec
			{
				count=1;
				magazine="40xtra_3Rnd_12g_buckshotflec";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotflec_4shell: 40mm_pickup_ammo_12g_buckshotflec_1shell
	{
		scope=2;
		displayName="12 Gauge 4rnd, Flechette";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_4Rnd_12g_buckshotflec
			{
				count=1;
				magazine="40xtra_4rnd_12g_buckshotflec";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotflec_5shell: 40mm_pickup_ammo_12g_buckshotflec_1shell
	{
		scope=2;
		displayName="12 Gauge 5rnd, Flechette";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_5Rnd_12g_buckshotflec
			{
				count=1;
				magazine="40xtra_5Rnd_12g_buckshotflec";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotflec_6shell: 40mm_pickup_ammo_12g_buckshotflec_1shell
	{
		scope=2;
		displayName="12 Gauge 6rnd, Flechette";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_6Rnd_12g_buckshotflec
			{
				count=1;
				magazine="40xtra_6Rnd_12g_buckshotflec";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotflec_7shell: 40mm_pickup_ammo_12g_buckshotflec_1shell
	{
		scope=2;
		displayName="12 Gauge 7rnd, Flechette";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_7Rnd_12g_buckshotflec
			{
				count=1;
				magazine="40xtra_7Rnd_12g_buckshotflec";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotflec_8shell: 40mm_pickup_ammo_12g_buckshotflec_1shell
	{
		scope=2;
		displayName="12 Gauge 8rnd, Flechette";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_8Rnd_12g_buckshotflec
			{
				count=1;
				magazine="40xtra_8Rnd_12g_buckshotflec";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotmg_1shell: 40mm_pickup_ammo_12g_buckshotflec_1shell
	{
		scope=2;
		displayName="12 Gauge 1rnd, MG";
		author="COXHOUND Modding Unit";
		editorPreview="cox_40mikemikes\textures\shellicons\icon_shells_orange.paa";
		class TransportMagazines
		{
			class 40xtra_1Rnd_12g_buckshotmg
			{
				count=1;
				magazine="40xtra_1Rnd_12g_buckshotmg";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotmg_2shell: 40mm_pickup_ammo_12g_buckshotmg_1shell
	{
		scope=2;
		displayName="12 Gauge 2rnd, MG";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_2Rnd_12g_buckshotmg
			{
				count=1;
				magazine="40xtra_2Rnd_12g_buckshotmg";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotmg_3shell: 40mm_pickup_ammo_12g_buckshotmg_1shell
	{
		scope=2;
		displayName="12 Gauge 3rnd, MG";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_3Rnd_12g_buckshotmg
			{
				count=1;
				magazine="40xtra_3Rnd_12g_buckshotmg";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotmg_4shell: 40mm_pickup_ammo_12g_buckshotmg_1shell
	{
		scope=2;
		displayName="12 Gauge 4rnd, MG";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_4Rnd_12g_buckshotmg
			{
				count=1;
				magazine="40xtra_4rnd_12g_buckshotmg";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotmg_5shell: 40mm_pickup_ammo_12g_buckshotmg_1shell
	{
		scope=2;
		displayName="12 Gauge 5rnd, MG";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_5Rnd_12g_buckshotmg
			{
				count=1;
				magazine="40xtra_5Rnd_12g_buckshotmg";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotmg_6shell: 40mm_pickup_ammo_12g_buckshotmg_1shell
	{
		scope=2;
		displayName="12 Gauge 6rnd, MG";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_6Rnd_12g_buckshotmg
			{
				count=1;
				magazine="40xtra_6Rnd_12g_buckshotmg";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotmg_7shell: 40mm_pickup_ammo_12g_buckshotmg_1shell
	{
		scope=2;
		displayName="12 Gauge 7rnd, MG";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_7Rnd_12g_buckshotmg
			{
				count=1;
				magazine="40xtra_7Rnd_12g_buckshotmg";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotmg_8shell: 40mm_pickup_ammo_12g_buckshotmg_1shell
	{
		scope=2;
		displayName="12 Gauge 8rnd, MG";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_8Rnd_12g_buckshotmg
			{
				count=1;
				magazine="40xtra_8Rnd_12g_buckshotmg";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotbb_1shell: 40mm_pickup_ammo_12g_buckshotflec_1shell
	{
		scope=1;
		displayName="12 Gauge 1rnd, Beanbag";
		author="COXHOUND Modding Unit";
		editorPreview="cox_40mikemikes\textures\shellicons\icon_shells_blue.paa";
		class TransportMagazines
		{
			class 40xtra_1Rnd_12g_buckshotbb
			{
				count=1;
				magazine="40xtra_1Rnd_12g_buckshotbb";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotbb_2shell: 40mm_pickup_ammo_12g_buckshotbb_1shell
	{
		scope=1;
		displayName="12 Gauge 2rnd, Beanbag";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_2Rnd_12g_buckshotbb
			{
				count=1;
				magazine="40xtra_2Rnd_12g_buckshotbb";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotbb_3shell: 40mm_pickup_ammo_12g_buckshotbb_1shell
	{
		scope=1;
		displayName="12 Gauge 3rnd, Beanbag";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_3Rnd_12g_buckshotbb
			{
				count=1;
				magazine="40xtra_3Rnd_12g_buckshotbb";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotbb_4shell: 40mm_pickup_ammo_12g_buckshotbb_1shell
	{
		scope=1;
		displayName="12 Gauge 4rnd, Beanbag";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_4Rnd_12g_buckshotbb
			{
				count=1;
				magazine="40xtra_4rnd_12g_buckshotbb";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotbb_5shell: 40mm_pickup_ammo_12g_buckshotbb_1shell
	{
		scope=1;
		displayName="12 Gauge 5rnd, Beanbag";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_5Rnd_12g_buckshotbb
			{
				count=1;
				magazine="40xtra_5Rnd_12g_buckshotbb";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotbb_6shell: 40mm_pickup_ammo_12g_buckshotbb_1shell
	{
		scope=1;
		displayName="12 Gauge 6rnd, Beanbag";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_6Rnd_12g_buckshotbb
			{
				count=1;
				magazine="40xtra_6Rnd_12g_buckshotbb";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotbb_7shell: 40mm_pickup_ammo_12g_buckshotbb_1shell
	{
		scope=1;
		displayName="12 Gauge 7rnd, Beanbag";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_7Rnd_12g_buckshotbb
			{
				count=1;
				magazine="40xtra_7Rnd_12g_buckshotbb";
			};
		};
	};
	class 40mm_pickup_ammo_12g_buckshotbb_8shell: 40mm_pickup_ammo_12g_buckshotbb_1shell
	{
		scope=1;
		displayName="12 Gauge 8rnd, Beanbag";
		author="COXHOUND Modding Unit";
		class TransportMagazines
		{
			class 40xtra_8Rnd_12g_buckshotbb
			{
				count=1;
				magazine="40xtra_8Rnd_12g_buckshotbb";
			};
		};
	};
	class Items_base_F;
	class 40mm_props_base: Items_base_F
	{
		author="COXHOUND Modding Unit";
		scope=1;
		scopeCurator=1;
		displayName="40mm Props Base";
		icon="iconObject_circle";
		editorCategory="40mm_subcat_ammoprops";
		editorSubcategory="contentpack_subcategory_things";
		vehicleClass="40mm_vehclass_ammoprops";
	};
	class 40mm_props_ammo_12g_black_1shell: 40mm_props_base
	{
		author="COXHOUND Modding Unit";
		editorPreview="cox_40mikemikes\textures\shellicons\icon_shells_black.paa";
		scope=2;
		simulation="thingX";
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Black, 1 shell)";
		model="cox_weapons\models\piles\black\shell_pile_1";
		icon="iconObject_circle";
		vehicleClass="40mm_vehclass_ammoprops";
		editorCategory="contentpack_categories";
		editorSubcategory="40mm_subcat_ammoprops";
	};
	class 40mm_props_ammo_12g_box: 40mm_props_ammo_12g_black_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Box";
		model="cox_weapons\models\shellbox";
	};
	class 40mm_props_ammo_12g_black_2shell: 40mm_props_ammo_12g_black_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Black, 2 shells)";
		model="cox_weapons\models\piles\black\shell_pile_2";
	};
	class 40mm_props_ammo_12g_black_3shell: 40mm_props_ammo_12g_black_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Black, 3 shells)";
		model="cox_weapons\models\piles\black\shell_pile_3";
	};
	class 40mm_props_ammo_12g_black_4shell: 40mm_props_ammo_12g_black_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Black, 4 shells)";
		model="cox_weapons\models\piles\black\shell_pile_4";
	};
	class 40mm_props_ammo_12g_black_5shell: 40mm_props_ammo_12g_black_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Black, 5 shells)";
		model="cox_weapons\models\piles\black\shell_pile_5";
	};
	class 40mm_props_ammo_12g_black_6shell: 40mm_props_ammo_12g_black_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Black, 6 shells)";
		model="cox_weapons\models\piles\black\shell_pile_6";
	};
	class 40mm_props_ammo_12g_black_7shell: 40mm_props_ammo_12g_black_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Black, 7 shells)";
		model="cox_weapons\models\piles\black\shell_pile_7";
	};
	class 40mm_props_ammo_12g_black_8shell: 40mm_props_ammo_12g_black_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Black, 8 shells)";
		model="cox_weapons\models\piles\black\shell_pile_8";
	};
	class 40mm_props_ammo_12g_Orange_1shell: 40mm_props_ammo_12g_black_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Orange, 1 shell)";
		editorPreview="cox_40mikemikes\textures\shellicons\icon_shells_orange.paa";
		model="cox_weapons\models\piles\Orange\shell_pile_1";
	};
	class 40mm_props_ammo_12g_Orange_2shell: 40mm_props_ammo_12g_Orange_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Orange, 2 shells)";
		model="cox_weapons\models\piles\Orange\shell_pile_2";
	};
	class 40mm_props_ammo_12g_Orange_3shell: 40mm_props_ammo_12g_Orange_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Orange, 3 shells)";
		model="cox_weapons\models\piles\Orange\shell_pile_3";
	};
	class 40mm_props_ammo_12g_Orange_4shell: 40mm_props_ammo_12g_Orange_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Orange, 4 shells)";
		model="cox_weapons\models\piles\Orange\shell_pile_4";
	};
	class 40mm_props_ammo_12g_Orange_5shell: 40mm_props_ammo_12g_Orange_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Orange, 5 shells)";
		model="cox_weapons\models\piles\Orange\shell_pile_5";
	};
	class 40mm_props_ammo_12g_Orange_6shell: 40mm_props_ammo_12g_Orange_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Orange, 6 shells)";
		model="cox_weapons\models\piles\Orange\shell_pile_6";
	};
	class 40mm_props_ammo_12g_Orange_7shell: 40mm_props_ammo_12g_Orange_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Orange, 7 shells)";
		model="cox_weapons\models\piles\Orange\shell_pile_7";
	};
	class 40mm_props_ammo_12g_Orange_8shell: 40mm_props_ammo_12g_Orange_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Orange, 8 shells)";
		model="cox_weapons\models\piles\Orange\shell_pile_8";
	};
	class 40mm_props_ammo_12g_Blue_1shell: 40mm_props_ammo_12g_black_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Blue, 1 shell)";
		editorPreview="cox_40mikemikes\textures\shellicons\icon_shells_blue.paa";
		model="cox_weapons\models\piles\Blue\shell_pile_1";
	};
	class 40mm_props_ammo_12g_Blue_2shell: 40mm_props_ammo_12g_Blue_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Blue, 2 shells)";
		model="cox_weapons\models\piles\Blue\shell_pile_2";
	};
	class 40mm_props_ammo_12g_Blue_3shell: 40mm_props_ammo_12g_Blue_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Blue, 3 shells)";
		model="cox_weapons\models\piles\Blue\shell_pile_3";
	};
	class 40mm_props_ammo_12g_Blue_4shell: 40mm_props_ammo_12g_Blue_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Blue, 4 shells)";
		model="cox_weapons\models\piles\Blue\shell_pile_4";
	};
	class 40mm_props_ammo_12g_Blue_5shell: 40mm_props_ammo_12g_Blue_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Blue, 5 shells)";
		model="cox_weapons\models\piles\Blue\shell_pile_5";
	};
	class 40mm_props_ammo_12g_Blue_6shell: 40mm_props_ammo_12g_Blue_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Blue, 6 shells)";
		model="cox_weapons\models\piles\Blue\shell_pile_6";
	};
	class 40mm_props_ammo_12g_Blue_7shell: 40mm_props_ammo_12g_Blue_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Blue, 7 shells)";
		model="cox_weapons\models\piles\Blue\shell_pile_7";
	};
	class 40mm_props_ammo_12g_Blue_8shell: 40mm_props_ammo_12g_Blue_1shell
	{
		author="COXHOUND Modding Unit";
		scope=2;
		scopeCurator=2;
		displayName="12 Gauge Ammo Pile (Blue, 8 shells)";
		model="cox_weapons\models\piles\Blue\shell_pile_8";
	};
	class FxCartridge;
	class 40mm_fx_slug_black: FxCartridge
	{
		author="COXHOUND Modding Unit";
		mapSize=0.029999999;
		_generalMacro="40mm_fx_slug_black";
		model="cox_weapons\models\piles\black\shell_pile_1";
		submerged=0;
		submergeSpeed=0;
		timeToLive=5;
		disappearAtContact="false";
		airRotation=1.5;
	};
	class 40mm_fx_slug_orange: 40mm_fx_slug_black
	{
		author="COXHOUND Modding Unit";
		model="cox_weapons\models\piles\orange\shell_pile_1";
	};
	class 40mm_fx_slug_blue: 40mm_fx_slug_black
	{
		author="COXHOUND Modding Unit";
		model="cox_weapons\models\piles\blue\shell_pile_1";
	};
};
class cfgMods
{
	author="kolmipilot";
	timepacked="1630106625";
};

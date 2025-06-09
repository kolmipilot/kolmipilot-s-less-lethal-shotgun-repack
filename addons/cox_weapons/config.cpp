class CfgPatches
{
	class cox_shotgun
	{
		units[]={};
		weapons[]=
		{
			"cox_weapon_berger50",
			"cox_weapon_berger50_lesslethal",
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"cox_40mikemikes",
			"cba_settings"
		};
		version="1.0";
		name="DB Berger 50";
		author="COXHOUND Modding Unit";
		authorUrl="http://steamcommunity.com/groups/coxhound";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgSounds
{
	class cox_sfx_Berger50Pump
	{
		name="Berger 50 Pump Sound";
		sound[]=
		{
			"cox_weapons\sound\shotgun\pump.ogg",
			1,
			1,
			25
		};
		titles[]=
		{
			0,
			""
		};
	};
};
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class BaseSoundModeType;
class cfgRecoils
{
	class Default;
	class cox_recoil_default: Default
	{
		muzzleOuter[]={0.30000001,1,0.30000001,0.2};
		muzzleInner[]={0,0,0.1,0.1};
		kickBack[]={0.029999999,0.059999999};
		permanent=0.1;
		temporary=0.0099999998;
	};
	class recoil_cox_shotgun: cox_recoil_default
	{
		muzzleOuter[]={0.40000001,1,0.40000001,0.30000001};
		muzzleInner[]={0,0,0.1,0.1};
		kickBack[]={0.079999998,0.1};
		permanent=0.25;
		temporary=0.1;
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		COX_GestureReloadShotgun="COX_GestureReloadShotgun";
		COX_GesturePumpShotgun="COX_GesturePumpShotgun";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			COX_GesturePumpShotgun[]=
			{
				"COX_GesturePumpShotgun",
				"Gesture"
			};
			COX_GestureReloadShotgun[]=
			{
				"COX_GestureReloadShotgun",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class COX_GestureReloadShotgun: GestureReloadBase
		{
			file="cox_weapons\anim\cox_shotgun_reload.rtm";
			looped=0;
			speed=0.27000001;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.016000001,0,0.83060002,0,1,1};
		};
		class COX_GesturePumpShotgun: Default
		{
			file="cox_weapons\anim\cox_shotgun_pump.rtm";
			looped=0;
			speed=1.15;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0};
		};
	};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class cox_shotgun_base: Rifle_Base_F
	{
		magazines[]=
		{
			"40xtra_6Rnd_12g_buckshotlg",
			"40xtra_6Rnd_12g_buckshotmg",
			"40xtra_6Rnd_12g_buckshotmix",
			"40xtra_6Rnd_12g_buckshotsg",
			"40xtra_6Rnd_12g_buckshotSS",
			"40xtra_6Rnd_12g_buckshottriball",
			"40xtra_6Rnd_12g_buckshotslug",
			"40xtra_6Rnd_12g_buckshotbb",
			"40xtra_6Rnd_12g_buckshotSpike",
			"40xtra_6Rnd_12g_buckshotflec",
			"40xtra_6Rnd_12g_buckshothe",
			"40xtra_6Rnd_12g_buckshotincen",
			"40xtra_6Rnd_12g_buckshotdb",
			"40xtra_6Rnd_12g_buckshotrs",
			"40xtra_6Rnd_12g_buckshotlg_softload",
			"40xtra_6Rnd_12g_buckshotmg_softload",
			"40xtra_6Rnd_12g_buckshotmix_softload",
			"40xtra_6Rnd_12g_buckshotsg_softload",
			"40xtra_6Rnd_12g_buckshotlgm",
			"40xtra_6Rnd_12g_buckshotmgm",
			"40xtra_6Rnd_12g_buckshotmixm",
			"40xtra_6Rnd_12g_buckshotsgm"
		};
		magazineWell[]=
		{
			"CBA_12g_6rnds",
			"CBA_12g_5rnds",
			"CBA_12g_4rnds",
			"CBA_12g_3rnds",
			"CBA_12g_2rnds",
			"CBA_12g_1rnd",
			"HunterShotgun_01_12GA"
		};
		reloadAction="COX_GestureReloadShotgun";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.34999999;
		initSpeed=-1;
		class EventHandlers
		{
			fired="_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents
		{
			handAction="COX_GesturePumpShotgun";
			onEmpty=1;
			sound="cox_sfx_Berger50Pump";
			hasOptic=0;
			soundLocation="LeftHandMiddle1";
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="usti hlavne";
				effectName="StarterPistolCloud2";
				directionName="Konec hlavne";
			};
			class FirstEffect
			{
				positionName="Nabojnicestart";
				effectName="CaselessAmmoCloud";
				directionName="Nabojniceend";
			};
		};
		author="COXHOUND Modding Unit";
		class GunClouds
		{
			cloudletAccY=0;
			cloudletAlpha=0.30000001;
			cloudletAnimPeriod=1;
			cloudletColor[]={1,1,1,0};
			cloudletDuration=0.050000001;
			cloudletFadeIn=0;
			cloudletFadeOut=0.1;
			cloudletGrowUp=0.050000001;
			cloudletMaxYSpeed=100;
			cloudletMinYSpeed=-100;
			cloudletShape="cloudletClouds";
			cloudletSize=1;
			deltaT=0;
			initT=0;
			interval=-0.02;
			size=0.30000001;
			sourceSize=0.02;
			timeToLive=0;
			class Table
			{
				class T0
				{
					color[]={0.81999999,0.94999999,0.93000001,0};
					maxT=0;
				};
			};
		};
		class GunFire
		{
			cloudletAccY=0;
			cloudletAlpha=1;
			cloudletAnimPeriod=1;
			cloudletColor[]={1,1,1,0};
			cloudletDensityCoef=-1;
			cloudletDuration=0.2;
			cloudletFadeIn=0.0099999998;
			cloudletFadeOut=0.5;
			cloudletGrowUp=0.2;
			cloudletMaxYSpeed=100;
			cloudletMinYSpeed=-100;
			cloudletShape="cloudletFire";
			cloudletSize=1;
			deltaT=-3000;
			initT=4500;
			interval=-0.0099999998;
			size=3;
			sourceSize=0.5;
			timeToLive=0;
			class Table
			{
				class T0
				{
					color[]={0.81999999,0.94999999,0.93000001,0};
					maxT=0;
				};
				class T1
				{
					color[]={0.75,0.76999998,0.89999998,0};
					maxT=200;
				};
				class T2
				{
					color[]={0.56,0.62,0.67000002,0};
					maxT=400;
				};
				class T3
				{
					color[]={0.38999999,0.46000001,0.47,0};
					maxT=600;
				};
				class T4
				{
					color[]={0.23999999,0.31,0.31,0};
					maxT=800;
				};
				class T5
				{
					color[]={0.23,0.31,0.28999999,0};
					maxT=1000;
				};
				class T6
				{
					color[]={0.20999999,0.28999999,0.27000001,0};
					maxT=1500;
				};
				class T7
				{
					color[]={0.19,0.23,0.20999999,0};
					maxT=2000;
				};
				class T8
				{
					color[]={0.22,0.19,0.1,0};
					maxT=2300;
				};
				class T9
				{
					color[]={0.34999999,0.2,0.02,0};
					maxT=2500;
				};
				class T10
				{
					color[]={0.62,0.28999999,0.029999999,0};
					maxT=2600;
				};
				class T11
				{
					color[]={0.58999997,0.34999999,0.050000001,0};
					maxT=2650;
				};
				class T12
				{
					color[]={0.75,0.37,0.029999999,0};
					maxT=2700;
				};
				class T13
				{
					color[]={0.88,0.34,0.029999999,0};
					maxT=2750;
				};
				class T14
				{
					color[]={0.91000003,0.5,0.17,0};
					maxT=2800;
				};
				class T15
				{
					color[]={1,0.60000002,0.2,0};
					maxT=2850;
				};
				class T16
				{
					color[]={1,0.70999998,0.30000001,0};
					maxT=2900;
				};
				class T17
				{
					color[]={0.98000002,0.82999998,0.41,0};
					maxT=2950;
				};
				class T18
				{
					color[]={0.98000002,0.91000003,0.54000002,0};
					maxT=3000;
				};
				class T19
				{
					color[]={0.98000002,0.99000001,0.60000002,0};
					maxT=3100;
				};
				class T20
				{
					color[]={0.95999998,0.99000001,0.72000003,0};
					maxT=3300;
				};
				class T21
				{
					color[]={1,0.98000002,0.91000003,0};
					maxT=3600;
				};
				class T22
				{
					color[]={1,1,1,0};
					maxT=4200;
				};
			};
		};
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		optics=0;
		opticsFlare=0;
		opticsID=0;
		opticsDisablePeripherialVision=0.67000002;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="Dick and Bahl's Berger 50 Shotgun";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"cox_weapons\anim\cox_shotgun_hold2.rtm"
		};
		dexterity=1.4;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		cursor="sgun";
		modes[]=
		{
			"SingleBerger",
			"SingleBerger_AI"
		};
		selectionFireAnim="muzzleFlash";
		maxZeroing=100;
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Dry_pdw2000",
			0.1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"cox_weapons\sound\shotgun\reload.ogg",
			1.58489,
			1,
			10
		};
		recoil="recoil_cox_shotgun";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
			class PointerSlot
			{
			};
			class UnderBarrelSlot
			{
			};
		};
		class SingleBerger: Mode_SemiAuto
		{
			aiDispersionCoefX=1.4;
			aiDispersionCoefY=1.7;
			aiRateOfFire=5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=250;
			burst=1;
			dispersion=0.00145;
			fireLightDuration=0.050000001;
			fireLightIntensity=0.012;
			maxRange=200;
			maxRangeProbab=0.15000001;
			midRange=50;
			midRangeProbab=0.69999999;
			minRange=1;
			minRangeProbab=1;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			reloadTime=0.1;
			requiredOpticType=-1;
			showToPlayer=1;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",
					0.70794576,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",
					0.70794576,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"cox_weapons\sound\shotgun\fire01.ogg",
					"db5",
					1,
					900
				};
				begin2[]=
				{
					"cox_weapons\sound\shotgun\fire02.ogg",
					"db5",
					1,
					900
				};
				begin3[]=
				{
					"cox_weapons\sound\shotgun\fire03.ogg",
					"db5",
					1,
					900
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"cox_weapons\sound\shotgun\fire01.ogg",
							"db5",
							1,
							2000
						};
						frequency=1;
						volume="0.8 * 1 *  (1-interior/1.4)*trees/3";
					};
					class TailForest
					{
						sound[]=
						{
							"cox_weapons\sound\shotgun\fire01.ogg",
							"db5",
							1,
							2000
						};
						frequency=1;
						volume="0.8 * 1 *  (1-interior/1.4)*forest/3";
					};
					class TailInterior
					{
						sound[]=
						{
							"cox_weapons\sound\shotgun\fire01.ogg",
							"db5",
							1,
							100
						};
						frequency=1;
						volume="0.8 * 0.8 * interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"cox_weapons\sound\shotgun\fire01.ogg",
							"db5",
							1,
							2000
						};
						frequency=1;
						volume="0.8 * 1 *  (1-interior/1.4)*(meadows/2 max sea/2)/3";
					};
					class TailHouses
					{
						sound[]=
						{
							"cox_weapons\sound\shotgun\fire01.ogg",
							"db5",
							1,
							1400
						};
						frequency=1;
						volume="0.8 * 1 *  (1-interior/1.4)*houses/3";
					};
				};
			};
		};
		class SingleBerger_AI: SingleBerger
		{
			showToPlayer=0;
		};
		weaponType = 1;
		type = 1;

	};
	class cox_weapon_berger50: cox_shotgun_base
	{
		scope=2;
		author="COXHOUND Modding Unit";
		displayName="DB Berger 50 12 Gauge";
		model="cox_weapons\models\cox_shotgun.p3d";
		reloadAction="COX_GestureReloadShotgun";
		picture="\cox_weapons\data\cox_shotgun_icon";
		UiPicture="\cox_weapons\data\icon_sg_ca";
		selectionFireAnim="muzzleFlash";
		weaponInfoType="RscWeaponZeroing";
	};
	class cox_weapon_berger50_lesslethal: cox_weapon_berger50
	{
		scope=2;
		author="COXHOUND Modding Unit";
		displayName="DB Berger 50 (Less Lethal)";
		selectionFireAnim="muzzleFlash";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"cox_weapons\textures\variants\lesslethal.paa"
		};
	};
};

class CfgPatches
{
	class ExpansionFlagSample
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Tops", "DZ_Gear_Camping"};
	};
};
class CfgMods
{
	class ExpansionFlagSample
	{
		dir = "ExpansionFlagSample";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ExpansionFlagSample";
		credits = "ExpansionModTeam";
		author = "ExpansionModTeam";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"RelaxProjectFlags\Scripts\3_game"};
			};
		};
	};
};
class CfgVehicles
{
	class Flag_Base;
	class Expansion_Flag_BohemiaInteractive: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\ExpansionFlagSample\data\flag_bohemiainteractive_co.paa"
		};
		color="Expansion_BohemiaInteractive";
	};

	class Armband_ColorBase;
	class Expansion_Armband_BohemiaInteractive: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="Expansion_BohemiaInteractive";
		hiddenSelectionsTextures[]=
		{
			"\ExpansionFlagSample\data\flag_bohemiainteractive_co.paa",
			"\ExpansionFlagSample\data\flag_bohemiainteractive_co.paa",
			"\ExpansionFlagSample\data\flag_bohemiainteractive_co.paa",
			"\ExpansionFlagSample\data\flag_bohemiainteractive_co.paa",
			"\ExpansionFlagSample\data\flag_bohemiainteractive_co.paa",
			"\ExpansionFlagSample\data\flag_bohemiainteractive_co.paa",
			"\ExpansionFlagSample\data\flag_bohemiainteractive_co.paa",
			"\ExpansionFlagSample\data\flag_bohemiainteractive_co.paa",
			"\ExpansionFlagSample\data\flag_bohemiainteractive_co.paa"
		};
	};
};
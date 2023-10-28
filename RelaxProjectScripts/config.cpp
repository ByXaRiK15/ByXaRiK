class CfgPatches
{
	class DayZExpansion_SpawnSelection_Scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DayZExpansion_Core_Scripts"
		};
	};
};
class CfgMods
{
	class DZ_Expansion_SpawnSelection
	{
		dir="DayZExpansion/SpawnSelection";
		credits="$STR_MOD_EXPANSION_AUTHOR";
		extra=0;
		type="mod";
		name="DayZ Expansion - Spawn Selection";
		picture="set:expansion_mod_imageset image:mod_ss";
		logo="set:expansion_mod_imageset image:mod_ss";
		logoSmall="set:expansion_mod_imageset image:mod_ss";
		logoOver="set:expansion_mod_imageset image:mod_ss";
		tooltip="DayZ Expansion - Spawn Selection";
		overview="$STR_MOD_EXPANSION_DESC";
		action="";
		author="ByXaRiK";
		authorID="";
		dependencies[]=
		{
			"Mission"
		};
		class defs
		{
			class widgetStyles
			{
				files[]={};
			};
			class imageSets
			{
				files[]={};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"RelaxProjectScripts\Scripts\5_Mission"
				};
			};
		};
	};
};

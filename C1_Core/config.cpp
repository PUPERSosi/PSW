class CfgPatches
{
	class C1_Core
	{
		author = "Pin Mod";
		requiredAddons[]=
		{
			"A3_Anims_F",
			"A3_Characters_F",
			"A3_UI_F",
			"A3_Armor_F_Beta",
			"A3_Armor_F_EPB_MBT_03",
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class cfgFactionClasses
{
	class C1_OPF
	{
		displayname = "[P] OPFOR";
		priority = 1;
		side = 0;
	};
    class C1_BLU
	{
		displayname = "[P] BLUEFOR";
		priority = 1;
		side = 1;
	};
};
class CfgEditorCategories
{
	class C1_Props
	{
		displayname = "Pin Props";
	};
};
class CfgEditorSubcategories
{
	class C1_Crates
	{
		displayname = "Create";
	};
};

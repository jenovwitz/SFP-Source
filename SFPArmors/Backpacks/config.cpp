//Core
class CfgPatches
{
    class Strike_Force_Phoenix_Weapons_Backpacks
    {
        units[]=
        {
            "Strike_Force_Phoenix_ILCS_Rucksack_Black",
			"Strike_Force_Phoenix_UNSC_Rucksack",
            "Strike_Force_Phoenix_ANPRC_515",
			"Strike_Force_Phoenix_ANPRC_521_Green",
			"SFPA_UNSC_Commpack_WC_Lawrence"
			
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "A3_Weapons_F",
            "OPTRE_Core",
            "A3_Data_F",
            "OPTRE_Weapons",
            "OPTRE_UNSC_Structure_HoloObjects",
            "A3_Characters_F_Bootcamp",
            "OPTRE_Vehicles_Pelican",
            "OPTRE_UNSC_Units_Army",
            "OPTRE_Weapons_Items"
        };
        author="Article 2 Studios";
    };
};
class cfgVehicles
{
    class ContainerSupply;
    class B_TacticalPack_blk;
    class B_Bergen_Base;
    class Strike_Force_Phoenix_ILCS_Rucksack_Black: B_Bergen_Base
    {
        dlc="OPTRE";
        author="Article 2 Studios";
        scope=2;
        scopeArsenal=0;
        scopeCurator=0;
        isbackpack=1;
        picture="\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
        displayName="SFP ILCS Rucksack [Black]";
        model="\SFPArmors\Backpacks\data\ODST_ruck.p3d";
        vehicleClass="OPTRE_UNSC_Backpack_class";
        allowedSlots[]={901};
        maximumLoad=350;
        mass=40;
        hiddenSelections[]=
        {
            "camo1",
            "AP_Heavy",
            "biofoam"
        };
        hiddenSelectionsTextures[]=
        {
            "\SFPArmors\Backpacks\data\ruck_black_CO.paa"
        };
        transportMaxWeapons=10;
        transportMaxMagazines=100;
        class DestructionEffects
        {
        };
        class TransportMagazines
        {
        };
        class TransportWeapons
        {
        };
        class TransportItems
        {
        };
    };
	class Strike_Force_Phoenix_UNSC_Rucksack: Strike_Force_Phoenix_ILCS_Rucksack_Black
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="UNSC Rucksack (Basic)";
		model="\SFPArmors\Backpacks\data\rucksack.p3d";
		maximumLoad=350;
		mass=40;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\SFPArmors\Backpacks\data\soft_backpack_co.paa",
			""
		};
	};
	class Strike_Force_Phoenix_ANPRC_521_Green: Strike_Force_Phoenix_UNSC_Rucksack
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="SFP AN/PRC-521 [Green]";
		descriptionShort="AN/PRC-521<br>UNSC Long Range Radio<br>25km Effective Range";
		picture="\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad=150;
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[]=
		{
			"\SFPArmors\Backpacks\data\soft_backpack_co.paa",
			"\SFPArmors\Backpacks\data\commopack_co.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};

//Custom Backpacks

//Wildcard
class SFPA_UNSC_Commpack_WC_Lawrence : Strike_Force_Phoenix_ANPRC_521_Green
	{
		author="Talbot, Article 2 Studios";
		displayName="AN/PRC-521A2 WILDCARD CO [WIP]";
		scopeArsenal=2;
        scopeCurator=2;
		hiddenSelectionsTextures[]=
		{
			"\SFPArmors\Backpacks\data\soft_backpack_co.paa",
			"\SFPArmors\Backpacks\data\CommoPack_WC_blonk_CO.paa"
		};
	};
class SFPA_UNSC_Commpack_WC_Rock : Strike_Force_Phoenix_ANPRC_521_Green
	{
		author="Talbot, Article 2 Studios";
		displayName="AN/PRC-521A2 WILDCARD Rock [WIP]";
		scopeArsenal=2;
        scopeCurator=2;
		hiddenSelectionsTextures[]=
		{
			"\SFPArmors\Backpacks\data\soft_backpack_co.paa",
			"\SFPArmors\Backpacks\data\CommoPack_WC_rock_CO.paa"
		};
	};
class SFPA_UNSC_Commpack_WC_Okami : Strike_Force_Phoenix_ANPRC_521_Green
	{
		author="Talbot, Article 2 Studios";
		displayName="AN/PRC-521A2 WILDCARD Okami [WIP]";
		scopeArsenal=2;
        scopeCurator=2;
		hiddenSelectionsTextures[]=
		{
			"\SFPArmors\Backpacks\data\soft_backpack_co.paa",
			"\SFPArmors\Backpacks\data\CommoPack_WC_okami_CO.paa"
		};
	};

//Sparrow
class SFPA_UNSC_Commpack_Sparrow_Talbot : Strike_Force_Phoenix_ANPRC_521_Green
	{
		author="Talbot, Article 2 Studios";
		displayName="AN/PRC-521A2 SPARROW Talbot [WIP]";
		scopeArsenal=2;
        scopeCurator=2;
		maximumLoad=350;
		hiddenSelectionsTextures[]=
		{
			"\SFPArmors\Backpacks\data\soft_backpack_co.paa",
			"\SFPArmors\Backpacks\data\CommoPack_SP_talbot_CO.paa"
		};
	};

class SFPA_UNSC_Commpack_Sparrow_Miller : Strike_Force_Phoenix_ANPRC_521_Green
	{
		author="Talbot, Article 2 Studios";
		displayName="AN/PRC-521A2 SPARROW Miller [WIP]";
		scopeArsenal=2;
        scopeCurator=2;
		maximumLoad=350;
		hiddenSelectionsTextures[]=
		{
			"\SFPArmors\Backpacks\data\soft_backpack_co.paa",
			"\SFPArmors\Backpacks\data\CommoPack_SP_miller_CO.paa"
		};
	};

//Phoenix
class SFPA_UNSC_Commpack_Phoenix : Strike_Force_Phoenix_ANPRC_521_Green
	{
		author="Talbot, Article 2 Studios";
		displayName="AN/PRC-521A2 Phoenix [WIP]";
		scopeArsenal=2;
        scopeCurator=2;
		maximumLoad=150;
		hiddenSelectionsTextures[]=
		{
			"\SFPArmors\Backpacks\data\soft_backpack_co.paa",
			"\SFPArmors\Backpacks\data\CommoPack_Phoenix_CO.paa"
		};
	};

//Templar
class SFPA_UNSC_Commpack_Templar : Strike_Force_Phoenix_ANPRC_521_Green
	{
		author="Talbot, Article 2 Studios";
		displayName="AN/PRC-521A2 Templar [WIP]";
		scopeArsenal=2;
        scopeCurator=2;
		maximumLoad=150;
		hiddenSelectionsTextures[]=
		{
			"\SFPArmors\Backpacks\data\soft_backpack_co.paa",
			"\SFPArmors\Backpacks\data\CommoPack_templar_CO.paa"
		};
	};

//Raider
class SFPA_UNSC_Commpack_Raider : Strike_Force_Phoenix_ANPRC_521_Green
	{
		author="Talbot, Article 2 Studios";
		displayName="AN/PRC-521A2 Raider [WIP]";
		scopeArsenal=2;
        scopeCurator=2;
		maximumLoad=150;
		hiddenSelectionsTextures[]=
		{
			"\SFPArmors\Backpacks\data\soft_backpack_co.paa",
			"\SFPArmors\Backpacks\data\CommoPack_raider_CO.paa"
		};
	};
};
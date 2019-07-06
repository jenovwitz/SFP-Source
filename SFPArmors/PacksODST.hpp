//Core
class B_Bergen_Base;
class SFPA_ILCS_Rucksack_Black: B_Bergen_Base
	{
		dlc="OPTRE";
		type = BACKPACK_SLOT;
		author="Article 2 Studios";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		isbackpack=1;
		picture="\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
		displayName="SFP ILCS Rucksack [Black]";
		model="SFPArmors\data\ODST_ruck.p3d";
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
			"SFPArmors\data\ruck_black_CO.paa"
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
class SFPA_UNSC_Rucksack: SFPA_ILCS_Rucksack_Black
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="SFP UNSC Rucksack (Basic)";
		model="SFPArmors\data\rucksack.p3d";
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
			"SFPArmors\data\soft_backpack_co.paa",
			""
		};
	};
	
class SFPA_ANPRC_521_Green: SFPA_UNSC_Rucksack
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
			"SFPArmors\data\soft_backpack_co.paa",
			"SFPArmors\data\commopack_co.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};

//Custom Backpacks
class SFPA_UNSC_Commpack_WC_Lawrence : SFPA_ANPRC_521_Green
	{
		author="Talbot, Article 2 Studios";
		displayName="AN/PRC-521 WILDCARD CO";
		hiddenSelectionsTextures[]=
		{
			"SFPArmors\data\soft_backpack_co.paa",
			"SFPArmors\data\CommoPack_WC_blonk_CO.paa"
		};
	};
class SFPA_UNSC_Commpack_WC_Rock : SFPA_UNSC_Rucksack
	{
		author="Talbot, Article 2 Studios";
		displayName="AN/PRC-521 WILDCARD Rock";
		hiddenSelectionsTextures[]=
		{
			"SFPArmors\data\soft_backpack_co.paa",
			"SFPArmors\data\CommoPack_WC_rock_CO.paa"
		};
	};
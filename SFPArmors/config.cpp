	#
	define _ARMA_

	class CfgPatches {
	  class SFPArmors {
	    name = "SF Phoenix Armors";
	    author = "Timm"; //Configs by Rev!
	    url = "";
	    requiredVersion = 1.6;
	    requiredAddons[] = {
	      "A3_Weapons_F",
	      "A3_characters_f_bootcamp",
	      "A3_Characters_F",
	      "OPTRE_Core",
	      "OPTRE_UNSC_Units",
	      "OPTRE_UNSC_Units_Army",
	      "OPTRE_Weapons",
	      "OPTRE_Weapons_Items",
	      "A3_Data_F"
	    };
	    units[] = {};
	    weapons[] = {
	      "OPTRE_UNSC_M52A_Armor1_WDL",
	      "SFPA_UNSC_M52D_Armor_Phoenix",
	      "SFPA_UNSC_M52D_Armor_Demolitions_Phoenix",
	      "SFPA_UNSC_M52D_Armor_Sniper_Phoenix",
	      "SFPA_UNSC_M52D_Armor_Medic_Phoenix",
	      "SFPA_UNSC_M52D_Armor_Marksman_Phoenix",
	      "SFPA_UNSC_M52D_Armor_Rifleman_Phoenix",
	      "SFPA_UNSC_M52D_Armor_Scout_Phoenix",
	      "SFPA_UNSC_M52D_Armor_Light_Phoenix",
	      "SFPA_UNSC_M52D_Armor_Raider",
	      "SFPA_UNSC_M52D_Armor_Demolitions_Raider",
	      "SFPA_UNSC_M52D_Armor_Sniper_Raider",
	      "SFPA_UNSC_M52D_Armor_Medic_Raider",
	      "SFPA_UNSC_M52D_Armor_Marksman_Raider",
	      "SFPA_UNSC_M52D_Armor_Rifleman_Raider",
	      "SFPA_UNSC_M52D_Armor_Scout_Raider",
	      "SFPA_UNSC_M52D_Armor_Light_Raider",
	      "SFPA_UNSC_M52D_Armor_Templar",
	      "SFPA_UNSC_M52D_Armor_Demolitions_Templar",
	      "SFPA_UNSC_M52D_Armor_Sniper_Templar",
	      "SFPA_UNSC_M52D_Armor_Medic_Templar",
	      "SFPA_UNSC_M52D_Armor_Marksman_Templar",
	      "SFPA_UNSC_M52D_Armor_Rifleman_Templar",
	      "SFPA_UNSC_M52D_Armor_Scout_Templar",
	      "SFPA_UNSC_M52D_Armor_Light_Templar",
	      "SFPA_UNSC_CH252D_Helmet_Phoenix",
	      "SFPA_UNSC_CH252D_Helmet_Phoenix_dp",
	      "SFPA_UNSC_CH252D_Helmet_Phoenix_medic",
	      "SFPA_UNSC_CH252D_Helmet_Phoenix_medic_dp",
	      "SFPA_UNSC_CH252D_Helmet_Raider",
	      "SFPA_UNSC_CH252D_Helmet_Raider_dp",
	      "SFPA_UNSC_CH252D_Helmet_Raider_medic",
	      "SFPA_UNSC_CH252D_Helmet_Raider_medic_dp",
	      "SFPA_UNSC_CH252D_Helmet_Templar",
	      "SFPA_UNSC_CH252D_Helmet_Templar_dp",
	      "SFPA_UNSC_CH252D_Helmet_Templar_medic",
	      "SFPA_UNSC_CH252D_Helmet_Templar_medic_dp",
	      "SFPA_ANPRC_521_Green",
	      "SFPA_UNSC_Rucksack",
	      "SFPA_ILCS_Rucksack_Black",
	      "SFPA_UNSC_Commpack_Wildcard_Lawrence",
	      "SFPA_UNSC_Commpack_Wildcard_Rock"
	    };
	  };
	};
	class cfgWeapons {
	  //Externals
	  class ItemInfo;
	  class UniformItem;
	  class VestItem;
	  class HeadgearItem;
	  class Uniform_Base;
	  class HitpointsProtectionInfo;

	  class OPTRE_UNSC_M52A_Armor1_WDL;
	  class OPTRE_UNSC_M52D_Armor;
	  class OPTRE_UNSC_M52D_Armor_Demolitions;
	  class OPTRE_UNSC_M52D_Armor_Sniper;
	  class OPTRE_UNSC_M52D_Armor_Medic;
	  class OPTRE_UNSC_M52D_Armor_Marksman;
	  class OPTRE_UNSC_M52D_Armor_Rifleman;
	  class OPTRE_UNSC_M52D_Armor_Scout;
	  class OPTRE_UNSC_M52D_Armor_Light;

	  class OPTRE_UNSC_CH252D_Helmet;
	  class OPTRE_UNSC_CH252D_Helmet_dp;
	  class OPTRE_UNSC_RECON_Helmet;
	  class OPTRE_UNSC_RECON_Helmet_dp;
	  class OPTRE_ILCS_Rucksack_Black;

	  //SFP ODST Vests
	  #include<VestsODSTPhoenix.hpp>

	  #include<VestsODSTRaider.hpp>

	  #include<VestsODSTTemplar.hpp>
 //SFP ODST Helmets
	  #include<HeadgearODST.hpp>

	};
	class cfgVehicles {};
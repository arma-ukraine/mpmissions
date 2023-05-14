#define BLUFOR_SL b_afougf_sergeant_gp25
#define BLUFOR_TL b_afougf_teamleader_gp25
#define BLUFOR_GRENADIER b_afougf_rifleman_gp25
#define BLUFOR_AT_LIGHT b_afougf_rifleman_rpg26
#define BLUFOR_AT_HEAVY b_afougf_pt_fgm148
#define BLUFOR_RIFLEMAN b_afougf_rifleman_ak74
#define BLUFOR_MEDIC b_afougf_medic
#define BLUFOR_AUTORIFLEMAN b_afougf_mg_m240
#define BLUFOR_AA b_afougf_aa_stinger_specialist

#define BLUFOR_MOTORIZED b_afougf_m1151_base
#define BLUFOR_MOTORIZED_GMG b_afougf_m1151_mk19_base
#define BLUFOR_MOTORIZED_HMG b_afougf_m1151_m2_v1

#define BLUFOR_MECHANIZED b_afougf_btr80_common
#define BLUFOR_MECHANIZED_HEAVY b_afougf_bmp2d

#define BLUFOR_ARMORED b_afougf_t80bv

#define BLUFOR_SPECOPS_TL b_afougf_rifleman_sso_lsh_ak74
#define BLUFOR_SPECOPS_RIFLEMAN b_afougf_rifleman_sso_lsh_ak74
#define BLUFOR_SPECOPS_SNIPER b_sso_sniper_z10
#define BLUFOR_SPECOPS_SNIPER_ASSISTANT b_afougf_rifleman_sso_lsh_ak74

class CfgGroups
{
	class West
	{
		name = $STR_A3_CfgGroups_West0;
		side = 1;
		class BLU_F
		{
			name = $STR_A3_CfgGroups_West_BLU_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class KP_Support_B4
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_reconteam0;
					side = 1;
					faction = BLU_F;
					class Unit0
					{
						side = 1;
						vehicle = BLUFOR_SPECOPS_TL;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 1;
						vehicle = BLUFOR_SPECOPS_RIFLEMAN;
						rank = "CORPORAL";
					};
					class Unit2
					{
						side = 1;
						vehicle = BLUFOR_SPECOPS_SNIPER_ASSISTANT;
						rank = "PRIVATE";
					};
					class Unit3
					{
						side = 1;
						vehicle = BLUFOR_SPECOPS_SNIPER;
						rank = "PRIVATE";
					};
				};
				class KP_Support_B8
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_infsquad0;
					side = 1;
					faction = BLU_F;
					class Unit0
					{
						side = 1;
						vehicle = BLUFOR_SL;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 1;
						vehicle = BLUFOR_TL;
						rank = "SERGEANT";
					};
					class Unit2
					{
						side = 1;
						vehicle = BLUFOR_GRENADIER;
						rank = "CORPORAL";
					};
					class Unit3
					{
						side = 1;
						vehicle = BLUFOR_AT_LIGHT;
						rank = "PRIVATE";
					};
					class Unit4
					{
						side = 1;
						vehicle = BLUFOR_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5
					{
						side = 1;
						vehicle = BLUFOR_MEDIC;
						rank = "CORPORAL";
					};
					class Unit6
					{
						side = 1;
						vehicle = BLUFOR_AUTORIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit7
					{
						side = 1;
						vehicle = BLUFOR_AUTORIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class KP_Support_B16
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_infsquad0;
					side = 1;
					faction = BLU_F;
					class Unit0
					{
						side = 1;
						vehicle = BLUFOR_SL;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 1;
						vehicle = BLUFOR_TL;
						rank = "SERGEANT";
					};
					class Unit2
					{
						side = 1;
						vehicle = BLUFOR_GRENADIER;
						rank = "CORPORAL";
					};
					class Unit3
					{
						side = 1;
						vehicle = BLUFOR_AUTORIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit4
					{
						side = 1;
						vehicle = BLUFOR_AUTORIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5
					{
						side = 1;
						vehicle = BLUFOR_AT_LIGHT;
						rank = "CORPORAL";
					};
					class Unit6
					{
						side = 1;
						vehicle = BLUFOR_MEDIC;
						rank = "PRIVATE";
					};
					class Unit7
					{
						side = 1;
						vehicle = BLUFOR_AUTORIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit8
					{
						side = 1;
						vehicle = BLUFOR_GRENADIER;
						rank = "CORPORAL";
					};
					class Unit9
					{
						side = 1;
						vehicle = BLUFOR_AUTORIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit10
					{
						side = 1;
						vehicle = BLUFOR_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit11
					{
						side = 1;
						vehicle = BLUFOR_AT_LIGHT;
						rank = "CORPORAL";
					};
					class Unit12
					{
						side = 1;
						vehicle = BLUFOR_MEDIC;
						rank = "PRIVATE";
					};
					class Unit13
					{
						side = 1;
						vehicle = BLUFOR_RIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit14
					{
						side = 1;
						vehicle = BLUFOR_AT_HEAVY;
						rank = "CORPORAL";
					};
					class Unit15
					{
						side = 1;
						vehicle = BLUFOR_AT_HEAVY;
						rank = "PRIVATE";
					};
				};
				class KP_Support_BAT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = 1;
					faction = BLU_F;
					class Unit0
					{
						side = 1;
						vehicle = BLUFOR_TL;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 1;
						vehicle = BLUFOR_AT_HEAVY;
						rank = "SERGEANT";
					};
					class Unit2
					{
						side = 1;
						vehicle = BLUFOR_AT_HEAVY;
						rank = "PRIVATE";
					};
					class Unit3
					{
						side = 1;
						vehicle = BLUFOR_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class KP_Support_BAA
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_infteam_aa0;
					side = 1;
					faction = BLU_F;
					class Unit0
					{
						side = 1;
						vehicle = BLUFOR_TL;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 1;
						vehicle = BLUFOR_AA;
						rank = "SERGEANT";
					};
					class Unit2
					{
						side = 1;
						vehicle = BLUFOR_AA;
						rank = "PRIVATE";
					};
					class Unit3
					{
						side = 1;
						vehicle = BLUFOR_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class KP_Support_BMotInf_AT
				{
					name = $str_a3_cfggroups_west_blu_f_motorized_bus_motinf_at0;
					side = 1;
					faction = BLU_F;
					class Unit0
					{
						side = 1;
						vehicle = BLUFOR_MOTORIZED;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 1;
						vehicle = BLUFOR_AT_HEAVY;
						rank = "CORPORAL";
					};
					class Unit2
					{
						side = 1;
						vehicle = BLUFOR_AT_HEAVY;
						rank = "CORPORAL";
					};
					class Unit3
					{
						side = 1;
						vehicle = BLUFOR_AUTORIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class KP_Support_BMotInf_GMG
				{
					name = $str_a3_cfggroups_west_blu_f_motorized_bus_motinf_team0;
					side = 1;
					faction = BLU_F;
					class Unit0
					{
						side = 1;
						vehicle = BLUFOR_MOTORIZED_GMG;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 1;
						vehicle = BLUFOR_RIFLEMAN;
						rank = "CORPORAL";
					};
					class Unit2
					{
						side = 1;
						vehicle = BLUFOR_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class KP_Support_BMotInf_HMG
				{
					name = $str_a3_cfggroups_west_blu_f_motorized_bus_motinf_team0;
					side = 1;
					faction = BLU_F;
					class Unit0
					{
						side = 1;
						vehicle = BLUFOR_MOTORIZED_HMG;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 1;
						vehicle = BLUFOR_RIFLEMAN;
						rank = "CORPORAL";
					};
					class Unit2
					{
						side = 1;
						vehicle = BLUFOR_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
			};
			class Mechanized
			{
				name = $str_a3_cfggroups_west_blu_f_mechanized0;
				class KP_Support_BMechL
				{
					name = $str_a3_cfggroups_west_blu_f_mechanized_bus_mechinfsquad0;
					side = 1;
					faction = BLU_F;
					class Unit0
					{
						side = 1;
						vehicle = BLUFOR_MECHANIZED;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 1;
						vehicle = BLUFOR_SL;
						rank = "SERGEANT";
					};
					class Unit2
					{
						side = 1;
						vehicle = BLUFOR_TL;
						rank = "SERGEANT";
					};
					class Unit3
					{
						side = 1;
						vehicle = BLUFOR_GRENADIER;
						rank = "CORPORAL";
					};
					class Unit4
					{
						side = 1;
						vehicle = BLUFOR_AUTORIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5
					{
						side = 1;
						vehicle = BLUFOR_AUTORIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6
					{
						side = 1;
						vehicle = BLUFOR_AT_LIGHT;
						rank = "CORPORAL";
					};
					class Unit7
					{
						side = 1;
						vehicle = BLUFOR_MEDIC;
						rank = "PRIVATE";
					};
					class Unit8
					{
						side = 1;
						vehicle = BLUFOR_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
				class KP_Support_BMechH
				{
					name = $str_a3_cfggroups_west_blu_f_mechanized_bus_mechinfsquad0;
					side = 1;
					faction = BLU_F;
					class Unit0
					{
						side = 1;
						vehicle = BLUFOR_MECHANIZED_HEAVY;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 1;
						vehicle = BLUFOR_SL;
						rank = "SERGEANT";
					};
					class Unit2
					{
						side = 1;
						vehicle = BLUFOR_TL;
						rank = "SERGEANT";
					};
					class Unit3
					{
						side = 1;
						vehicle = BLUFOR_GRENADIER;
						rank = "CORPORAL";
					};
					class Unit4
					{
						side = 1;
						vehicle = BLUFOR_AUTORIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit5
					{
						side = 1;
						vehicle = BLUFOR_AUTORIFLEMAN;
						rank = "PRIVATE";
					};
					class Unit6
					{
						side = 1;
						vehicle = BLUFOR_AT_LIGHT;
						rank = "CORPORAL";
					};
					class Unit7
					{
						side = 1;
						vehicle = BLUFOR_MEDIC;
						rank = "PRIVATE";
					};
					class Unit8
					{
						side = 1;
						vehicle = BLUFOR_RIFLEMAN;
						rank = "PRIVATE";
					};
				};
			};
			class Armored
			{
				class KP_Support_BArm
				{
					name = "Armored";
					side = 1;
					faction = BLU_F;
					class Unit0
					{
						side = 1;
						vehicle = BLUFOR_ARMORED;
						rank = "SERGEANT";
					};
				};
			};
		};
	};
	class East
	{
		name = $STR_A3_CfgGroups_East0;
		side = 0;
		class OPF_F
		{
			name = $STR_A3_CfgGroups_East_OPF_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class KP_Support_O4
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_reconteam0;
					side = 0;
					faction = OPF_F;
					class Unit0
					{
						side = 0;
						vehicle = rhs_vmf_recon_sergeant;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 0;
						vehicle = rhs_vmf_recon_medic;
						rank = "CORPORAL";
					};
					class Unit2
					{
						side = 0;
						vehicle = rhs_vmf_recon_rifleman_scout_akm;
						rank = "PRIVATE";
					};
					class Unit3
					{
						side = 0;
						vehicle = rhs_vmf_recon_marksman;
						rank = "PRIVATE";
					};
				};
				class KP_Support_O8
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_infsquad0;
					side = 0;
					faction = OPF_F;
					class Unit0
					{
						side = 0;
						vehicle = rhs_vdv_sergeant;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 0;
						vehicle = rhs_vdv_efreitor;
						rank = "SERGEANT";
					};
					class Unit2
					{
						side = 0;
						vehicle = rhs_vdv_grenadier;
						rank = "CORPORAL";
					};
					class Unit3
					{
						side = 0;
						vehicle = rhs_vdv_LAT;
						rank = "PRIVATE";
					};
					class Unit4
					{
						side = 0;
						vehicle = rhs_vdv_machinegunner;
						rank = "PRIVATE";
					};
					class Unit5
					{
						side = 0;
						vehicle = rhs_vdv_medic;
						rank = "PRIVATE";
					};
					class Unit6
					{
						side = 0;
						vehicle = rhs_vdv_machinegunner;
						rank = "PRIVATE";
					};
					class Unit7
					{
						side = 0;
						vehicle = rhs_vdv_rifleman;
						rank = "PRIVATE";
					};
				};
				class KP_Support_O16
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_infsquad0;
					side = 0;
					faction = OPF_F;
					class Unit0
					{
						side = 0;
						vehicle = rhs_vdv_sergeant;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 0;
						vehicle = rhs_vdv_efreitor;
						rank = "SERGEANT";
					};
					class Unit2
					{
						side = 0;
						vehicle = rhs_vdv_grenadier;
						rank = "CORPORAL";
					};
					class Unit3
					{
						side = 0;
						vehicle = rhs_vdv_machinegunner;
						rank = "PRIVATE";
					};
					class Unit4
					{
						side = 0;
						vehicle = rhs_vdv_machinegunner;
						rank = "PRIVATE";
					};
					class Unit5
					{
						side = 0;
						vehicle = rhs_vdv_medic;
						rank = "PRIVATE";
					};
					class Unit6
					{
						side = 0;
						vehicle = rhs_vdv_grenadier;
						rank = "CORPORAL";
					};
					class Unit7
					{
						side = 0;
						vehicle = rhs_vdv_machinegunner;
						rank = "PRIVATE";
					};
					class Unit8
					{
						side = 0;
						vehicle = rhs_vdv_machinegunner;
						rank = "PRIVATE";
					};
					class Unit9
					{
						side = 0;
						vehicle = rhs_vdv_medic;
						rank = "PRIVATE";
					};
					class Unit10
					{
						side = 0;
						vehicle = rhs_vdv_rifleman;
						rank = "PRIVATE";
					};
					class Unit11
					{
						side = 0;
						vehicle = rhs_vdv_LAT;
						rank = "CORPORAL";
					};
					class Unit12
					{
						side = 0;
						vehicle = rhs_vdv_LAT;
						rank = "PRIVATE";
					};
					class Unit13
					{
						side = 0;
						vehicle = rhs_vdv_rifleman;
						rank = "PRIVATE";
					};
					class Unit14
					{
						side = 0;
						vehicle = rhs_vdv_LAT;
						rank = "PRIVATE";
					};
					class Unit15
					{
						side = 0;
						vehicle = rhs_vdv_LAT;
						rank = "PRIVATE";
					};
				};
				class KP_Support_OAT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = 0;
					faction = OPF_F;
					class Unit0
					{
						side = 0;
						vehicle = rhs_vdv_efreitor;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 0;
						vehicle = rhs_vdv_at;
						rank = "SERGEANT";
					};
					class Unit2
					{
						side = 0;
						vehicle = rhs_vdv_at;
						rank = "PRIVATE";
					};
					class Unit3
					{
						side = 0;
						vehicle = rhs_vdv_rifleman;
						rank = "PRIVATE";
					};
				};
				class KP_Support_OAA
				{
					name = $str_a3_cfggroups_west_blu_f_infantry_bus_infteam_aa0;
					side = 0;
					faction = OPF_F;
					class Unit0
					{
						side = 0;
						vehicle = rhs_vdv_efreitor;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 0;
						vehicle = rhs_vdv_aa;
						rank = "SERGEANT";
					};
					class Unit2
					{
						side = 0;
						vehicle = rhs_vdv_aa;
						rank = "PRIVATE";
					};
					class Unit3
					{
						side = 0;
						vehicle = rhs_vdv_rifleman;
						rank = "PRIVATE";
					};
				};
			};
			class Motorized
			{
				name = $STR_A3_cfggroups_East_OPF_F_Motorized_MTP0;
				class KP_Support_OMotInf_AT
				{
					name = $str_a3_cfggroups_east_opf_f_motorized_mtp_oia_motinf_at0;
					side = 0;
					faction = OPF_F;
					class Unit0
					{
						side = 0;
						vehicle = rhs_tigr_vdv;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 0;
						vehicle = rhs_vdv_at;
						rank = "CORPORAL";
					};
					class Unit2
					{
						side = 0;
						vehicle = rhs_vdv_at;
						rank = "PRIVATE";
					};
					class Unit3
					{
						side = 0;
						vehicle = rhs_vdv_machinegunner;
						rank = "PRIVATE";
					};
				};
				class KP_Support_OMotInf_HMG
				{
					name = $str_a3_cfggroups_east_opf_f_motorized_mtp_oia_motinfteam0;
					side = 0;
					faction = OPF_F;
					class Unit0
					{
						side = 0;
						vehicle = rhs_tigr_m_vdv;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 0;
						vehicle = rhs_vdv_rifleman;
						rank = "CORPORAL";
					};
					class Unit2
					{
						side = 0;
						vehicle = rhs_vdv_rifleman;
						rank = "PRIVATE";
					};
				};
				class KP_Support_OMotInf_GMG
				{
					name = $str_a3_cfggroups_east_opf_f_motorized_mtp_oia_motinfteam0;
					side = 0;
					faction = OPF_F;
					class Unit0
					{
						side = 0;
						vehicle = rhs_tigr_sts_vdv;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 0;
						vehicle = rhs_vdv_rifleman;
						rank = "CORPORAL";
					};
					class Unit2
					{
						side = 0;
						vehicle = rhs_vdv_rifleman;
						rank = "PRIVATE";
					};
				};
			};
			class Mechanized
			{
				name = $str_a3_cfggroups_east_opf_f_mechanized0;
				class KP_Support_OMechL
				{
					name = $STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = 0;
					faction = OPF_F;
					class Unit0
					{
						side = 0;
						vehicle = rhs_btr80_vdv;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 0;
						vehicle = rhs_vdv_sergeant;
						rank = "SERGEANT";
					};
					class Unit2
					{
						side = 0;
						vehicle = rhs_vdv_efreitor;
						rank = "SERGEANT";
					};
					class Unit3
					{
						side = 0;
						vehicle = rhs_vdv_grenadier;
						rank = "CORPORAL";
					};
					class Unit4
					{
						side = 0;
						vehicle = rhs_vdv_machinegunner;
						rank = "PRIVATE";
					};
					class Unit5
					{
						side = 0;
						vehicle = rhs_vdv_machinegunner;
						rank = "PRIVATE";
					};
					class Unit6
					{
						side = 0;
						vehicle = rhs_vdv_LAT;
						rank = "CORPORAL";
					};
					class Unit7
					{
						side = 0;
						vehicle = rhs_vdv_medic;
						rank = "PRIVATE";
					};
					class Unit8
					{
						side = 0;
						vehicle = rhs_vdv_rifleman;
						rank = "PRIVATE";
					};
				};
				class KP_Support_OMechH
				{
					name = $STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = 0;
					faction = OPF_F;
					class Unit0
					{
						side = 0;
						vehicle = rhs_bmp2d_vdv;
						rank = "SERGEANT";
					};
					class Unit1
					{
						side = 0;
						vehicle = rhs_vdv_sergeant;
						rank = "SERGEANT";
					};
					class Unit2
					{
						side = 0;
						vehicle = rhs_vdv_efreitor;
						rank = "SERGEANT";
					};
					class Unit3
					{
						side = 0;
						vehicle = rhs_vdv_grenadier;
						rank = "CORPORAL";
					};
					class Unit4
					{
						side = 0;
						vehicle = rhs_vdv_machinegunner;
						rank = "PRIVATE";
					};
					class Unit5
					{
						side = 0;
						vehicle = rhs_vdv_machinegunner;
						rank = "PRIVATE";
					};
					class Unit6
					{
						side = 0;
						vehicle = rhs_vdv_LAT;
						rank = "CORPORAL";
					};
					class Unit7
					{
						side = 0;
						vehicle = rhs_vdv_medic;
						rank = "PRIVATE";
					};
					class Unit8
					{
						side = 0;
						vehicle = rhs_vdv_rifleman;
						rank = "PRIVATE";
					};
				};
			};
			class Armored
			{
				class KP_Support_OArm
				{
					name = "Armored";
					side = 1;
					faction = OPF_F;
					class Unit0
					{
						side = 0;
						vehicle = rhs_t90a_tv;
						rank = "SERGEANT";
					};
				};
			};
		};
	};
};

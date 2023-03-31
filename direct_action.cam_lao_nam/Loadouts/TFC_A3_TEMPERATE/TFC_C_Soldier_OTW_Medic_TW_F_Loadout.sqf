
_obj = param [0];

if (!local _obj) exitWith {};

comment "Remove existing items";
removeAllWeapons _obj;
removeAllItems _obj;
removeAllAssignedItems _obj;
removeUniform _obj;
removeVest _obj;
removeBackpack _obj;
removeHeadgear _obj;
removeGoggles _obj;

comment "Add weapons";
_obj addWeapon "TFC_W_c8a3";
_obj addPrimaryWeaponItem "acc_flashlight";
_obj addPrimaryWeaponItem "TFC_WA_C79_Elcan";
_obj addPrimaryWeaponItem "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red";
_obj addWeapon "tfc_w_bhp";
_obj addHandgunItem "16Rnd_9x21_Mag";

comment "Add containers";
_obj forceAddUniform "TFC_CU_CombatUniform_otw_cadpat_TW";
_obj addVest "TFC_CV_Tacvest_tw";
_obj addBackpack "TFC_CB_Medbag_tw";

comment "Add binoculars";
_obj addWeapon "rhsusf_bino_m24";

comment "Add items to containers";
for "_i" from 1 to 3 do {_obj addItemToUniform "FirstAidKit";};
for "_i" from 1 to 2 do {_obj addItemToUniform "16Rnd_9x21_Mag";};
_obj addItemToVest "TFC_WA_opsinc_556";
for "_i" from 1 to 2 do {_obj addItemToVest "rhs_mag_m67";};
_obj addItemToVest "rhs_mag_m18_red";
_obj addItemToVest "rhs_mag_m18_green";
for "_i" from 1 to 2 do {_obj addItemToVest "rhs_grenade_anm8_mag";};
_obj addItemToVest "rhs_mag_m18_purple";
for "_i" from 1 to 6 do {_obj addItemToVest "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red";};
for "_i" from 1 to 10 do {_obj addItemToBackpack "FirstAidKit";};
_obj addItemToBackpack "Medikit";
_obj addHeadgear "TFC_CH_CG634_CADPAT_TW";
_obj addGoggles "rhs_googles_clear";

comment "Add items";
_obj linkItem "ItemMap";
_obj linkItem "ItemCompass";
_obj linkItem "ItemWatch";
_obj linkItem "ItemRadio";
_obj linkItem "ItemGPS";
_obj linkItem "rhsusf_ANPVS_14";


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
_obj addWeapon "UK3CB_BAF_L85A2";
_obj addPrimaryWeaponItem "UK3CB_BAF_SFFH";
_obj addPrimaryWeaponItem "rhsusf_acc_su230";
_obj addPrimaryWeaponItem "UK3CB_BAF_556_30Rnd";
_obj addWeapon "UK3CB_BAF_L131A1";
_obj addHandgunItem "UK3CB_BAF_9_17Rnd";

comment "Add containers";
_obj forceAddUniform "UK3CB_BAF_U_CombatUniform_MTP_RM";
_obj addVest "UK3CB_BAF_V_Osprey_Rifleman_A";
_obj addBackpack "UK3CB_BAF_B_Bergen_MTP_JTAC_L_A";

comment "Add binoculars";
_obj addMagazine "Laserbatteries";
_obj addWeapon "Laserdesignator";

comment "Add items to containers";
for "_i" from 1 to 3 do {_obj addItemToUniform "FirstAidKit";};
_obj addItemToUniform "UK3CB_BAF_9_17Rnd";
for "_i" from 1 to 8 do {_obj addItemToVest "UK3CB_BAF_556_30Rnd";};
_obj addItemToVest "rhs_mag_m18_green";
_obj addItemToVest "rhs_mag_m18_red";
_obj addItemToVest "rhs_mag_m67";
_obj addItemToVest "rhs_grenade_anm8_mag";
_obj addItemToVest "Laserbatteries";
_obj addItemToBackpack "SatchelCharge_Remote_Mag";
_obj addHeadgear "UK3CB_BAF_H_Boonie_MTP_PRR";
_obj addGoggles "UK3CB_BAF_G_Tactical_Clear";

comment "Add items";
_obj linkItem "ItemMap";
_obj linkItem "ItemCompass";
_obj linkItem "ItemWatch";
_obj linkItem "ItemRadio";
_obj linkItem "ItemGPS";
_obj linkItem "UK3CB_BAF_HMNVS";


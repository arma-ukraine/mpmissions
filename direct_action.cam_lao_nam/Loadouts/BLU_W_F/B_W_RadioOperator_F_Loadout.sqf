
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
_obj addWeapon "arifle_MX_Black_F";
_obj addPrimaryWeaponItem "acc_flashlight";
_obj addPrimaryWeaponItem "optic_Hamr";
_obj addPrimaryWeaponItem "30Rnd_65x39_caseless_black_mag";
_obj addWeapon "hgun_P07_blk_F";
_obj addHandgunItem "muzzle_snds_L";
_obj addHandgunItem "16Rnd_9x21_Mag";

comment "Add containers";
_obj forceAddUniform "U_B_CombatUniform_mcam_wdl_f";
_obj addVest "V_PlateCarrier1_wdl";
_obj addBackpack "B_RadioBag_01_wdl_F";

comment "Add binoculars";
_obj addMagazine "Laserbatteries";
_obj addWeapon "Laserdesignator_03";

comment "Add items to containers";
for "_i" from 1 to 3 do {_obj addItemToUniform "FirstAidKit";};
_obj addItemToUniform "SmokeShellGreen";
_obj addItemToUniform "SmokeShellRed";
_obj addItemToUniform "SmokeShellBlue";
_obj addItemToVest "muzzle_snds_H";
for "_i" from 1 to 2 do {_obj addItemToVest "SmokeShell";};
for "_i" from 1 to 8 do {_obj addItemToVest "30Rnd_65x39_caseless_black_mag";};
for "_i" from 1 to 2 do {_obj addItemToVest "HandGrenade";};
for "_i" from 1 to 3 do {_obj addItemToVest "16Rnd_9x21_Mag";};
_obj addItemToBackpack "SatchelCharge_Remote_Mag";
_obj addHeadgear "H_Booniehat_wdl";

comment "Add items";
_obj linkItem "ItemMap";
_obj linkItem "ItemCompass";
_obj linkItem "ItemWatch";
_obj linkItem "ItemRadio";
_obj linkItem "ItemGPS";
_obj linkItem "NVGoggles_INDEP";




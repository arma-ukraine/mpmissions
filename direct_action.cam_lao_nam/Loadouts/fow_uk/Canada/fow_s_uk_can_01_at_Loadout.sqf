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
_obj addWeapon "LIB_LeeEnfield_No4";
_obj addPrimaryWeaponItem "LIB_10Rnd_770x56";
_obj addPrimaryWeaponItem "LIB_10rnd_MUZZLE_FAKEMAG";
_obj addWeapon "LIB_PIAT";
_obj addSecondaryWeaponItem "LIB_1Rnd_89m_PIAT";
_obj addWeapon "LIB_Webley_mk6";
_obj addHandgunItem "LIB_6Rnd_455";

comment "Add containers";
_obj forceAddUniform "fow_u_uk_bd40_can_02_private";
_obj addVest "fow_v_uk_base_green";
_obj addBackpack "fow_b_uk_p37_blanco";

comment "Add binoculars";
_obj addWeapon "LIB_Binocular_UK";

comment "Add items to containers";
for "_i" from 1 to 3 do {_obj addItemToUniform "FirstAidKit";};
for "_i" from 1 to 2 do {_obj addItemToUniform "LIB_6Rnd_455";};
_obj addItemToVest "fow_e_no36mk1";
_obj addItemToVest "fow_e_no77";
for "_i" from 1 to 15 do {_obj addItemToVest "LIB_10Rnd_770x56";};
for "_i" from 1 to 2 do {_obj addItemToBackpack "LIB_1Rnd_89m_PIAT";};
_obj addHeadgear "fow_h_uk_mk2_net";

comment "Add items";
_obj linkItem "ItemMap";
_obj linkItem "ItemCompass";
_obj linkItem "ItemWatch";
_obj linkItem "ItemRadio";
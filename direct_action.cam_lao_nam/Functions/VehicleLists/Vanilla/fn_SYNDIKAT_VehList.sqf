	
	_type = _this select 0;
	
		_type = toUpper _type;
	
	_bikes = [

		"I_G_Quadbike_01_F"
	
	];
	
	_carsUnarmed = [
		
		"I_G_Offroad_01_F",
		"I_C_Offroad_02_unarmed_F",
		"I_G_Offroad_01_armor_base_lxWS"

	];
		
		
	_carsArmed = [
		
		"I_G_Offroad_01_AT_F",
		"I_G_Offroad_01_armed_F",
		"I_C_Offroad_02_AT_F",
		"I_C_Offroad_02_LMG_F",
		"I_G_Offroad_01_armor_AT_lxWS",
		"I_G_Offroad_01_armor_armed_lxWS"

	];
		
		
	_trucks = [
		
		"I_G_Van_01_transport_F",
		"I_G_Van_02_vehicle_F",
		"I_G_Van_02_transport_F"

	];
		
		
	_apcs = [

		"I_APC_Wheeled_03_cannon_F",
		"I_APC_tracked_03_cannon_F",
		"d2x_marid_aaf_hmg",
		"d2x_aaf_marid_rcws",
		"I_LT_01_cannon_F",
		"I_LT_01_AT_F"

	];
		
		
	_AAs = [
		
		"I_LT_01_AA_F",
		"I_A_Truck_02_aa_lxWS"

	];
		
		
	_tanks = [
		
		"I_MBT_03_cannon_F"

	];
		
		
	_artys = [
		
		"I_Truck_02_MRL_F"
		
	];
		
	_transportHelis = [
		
		"I_Heli_Transport_02_F",
		"I_Heli_light_03_unarmed_F",
		"d2x_aaf_orca"

	];
		
		
	_attackHelis = [
		
		"I_Heli_light_03_dynamicLoadout_F",
		"d2x_aaf_orca_armed"
		
	];
		
		
	_capPlanes = [
		
		"I_Plane_Fighter_04_F"

	];
		
		
	_casPlanes = [
	
		"I_Plane_Fighter_03_dynamicLoadout_F"

	];

	_ships = [
		
		"I_Boat_Armed_01_minigun_F"
		
	];
	
	_staticGun = [
		
		"I_G_HMG_02_high_F"
		
	];
	
	
	_staticAA = [
		
		"I_static_AA_F"
		
	];
	
	
	_staticAT = [
		
		"I_static_AT_F"
		
	];
	
	
	_staticMortar = [
		
		"I_Mortar_01_F"
	
	];
	
	_return = switch (_type) do {

		case "BIKE": {_bikes};
		case "U_CAR": {_carsUnarmed};
		case "A_CAR": {_carsArmed};
		case "TRUCK": {_trucks};
		case "APC": {_apcs};
		case "AA": {_AAs};
		case "TANK": {_tanks};
		case "ARTY": {_artys};
		case "T_HELI": {_transportHelis};
		case "A_HELI": {_attackHelis};
		case "CAP": {_capPlanes};
		case "CAS": {_casPlanes};
		case "SHIP": {_ships};
		case "STATIC_GUN": {_staticGun};
		case "STATIC_AA": {_staticAA};
		case "STATIC_AT": {_staticAT};
		case "STATIC_MORTAR": {_staticMortar};
		

	};
	
	_return;

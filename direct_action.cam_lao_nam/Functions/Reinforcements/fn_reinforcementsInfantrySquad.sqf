		
		private [
			
			"_veh",
			"_faction",
			"_side",
			"_squadCap",
			"_spawnPos",
			"_infGroup"
		
		];
		
		
		_veh = param [0];	
		_faction = param [1, "BLU"];
		_side = param [2, WEST];
		_squadCap = param [3, 10];
		_spawnPos = getPos _veh;
		
		
		// Force Paratroopers If WW2
		
			if (BEW_v_WW2) then {
				
				if (_side == WEST) then {_faction = "BLU_SOF"};
				if (_side == resistance) then {_faction = "BLU_SOF"};
				if (_side == EAST) then {_faction = "OPF_SOF"};
				
			};
		
		
		// Define Translation List
			
			_translationList = call compile format ["
			
				_translationList = [[BLU_Map_Translist , %1_New_Translist]];
				
				_translationList
				
			", _faction];
		
		
		// Calculate Units To Spawn

			_numUnitsToSpawn = _squadCap - ([] call BEW_FNC_CountAllGroupsWithPlayers);
			_unitTypesToSpawn = [];
			
		
		// Define Unit Types
		
			private _allTypes = [
				
				"B_engineer_F",
				"B_medic_F",
				"B_soldier_AT_F",
				"B_soldier_AA_F",
				"B_soldier_AR_F",
				"B_soldier_M_F",
				"B_Soldier_GL_F",				
				"B_Soldier_F",
				"B_recon_JTAC_F",
				"B_soldier_UAV_F"
			
			];
			
			
			// Remove AA
	
				if ((BEW_V_Vietnam or BEW_V_WW2) and !(BEW_v_ForceVanilla)) then {
		
					_allTypes = _allTypes - ["B_soldier_AA_F"];
		
				};
				
				
			// Remove UAV
	
				if ((BEW_v_ColdWar or BEW_V_Vietnam or BEW_V_WW2) and !(BEW_v_ForceVanilla)) then {
		
					_allTypes = _allTypes - ["B_soldier_UAV_F"];
		
				};			
			
		// Create Temporary Group
		
			_infGroup = createGroup [_side, true];
		

		// Spawn Units
			
			for "_i" from 0 to (_numUnitsToSpawn - 1) do {
			
				private _type = _allTypes select _i;				
				
				if (isNil "_type") then {_type = selectRandom _allTypes}; 
				
				_type = [_type, _translationList] call BEW_FNC_TranslateClassNames;	
							
				_unit = [_type, _spawnPos, _infGroup] call BEW_FNC_spawnRecruit;
						
				// Set Recruit Name
				
					[_unit] call BEW_FNC_SetRecruitName;
	
			};
			
			
		// Move In Cargo
			
			{
			
				_x moveInCargo _veh;

			} forEach units _infGroup;
				
		
		_infGroup

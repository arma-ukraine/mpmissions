class CfgDifficultyPresets
{
	defaultPreset = Custom;

	// Parameters that affect difficulty and which are shared among presets
	myArmorCoef = 1.0;
	groupArmorCoef = 1.0;

	// Parameters that affect the Limited distance choice for Group Indicators, Friendly Name Tags, Enemy Name Tags and Detected Mines.
	// They determine on which distance the indicators are fully visible and how many more meters it takes until the indicator fades-out completely.
	fadeDistanceStart = 0;
	fadeDistanceSpan = 0;

	recoilCoef = 1.0;
	visionAidCoef = 1.0;
	divingLimitMultiplier = 1.0; // Multiplier to limit capacity of lungs for soldiers.

	animSpeedCoef = 0;
	cancelThreshold = 0; // Threshold used for interrupting action.
	showCadetHints = 0;	 // (0 = disabled, 1 = enabled; see `cadetMode` command)
	showCadetWP = 0;		 // (0 = disabled, 1 = enabled)

	class Custom
	{
		displayName = $STR_Difficulty_Custom;											// Name of the difficulty preset.
		optionDescription = "";																		// Description
		optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa"; // Picture
		levelAI = "AILevelMedium";																// Level of AI skill

		class Options
		{
			// Simulation
			reducedDamage = 0; // Reduced damage		(0 = disabled, 1 = enabled)

			// Situational awareness
			groupIndicators = 0; // Group indicators		(0 = never, 1 = limited distance, 2 = always)
			friendlyTags = 0;		 // Friendly name tags	(0 = never, 1 = limited distance, 2 = always)
			enemyTags = 0;			 // Enemy name tags		(0 = never, 1 = limited distance, 2 = always)
			detectedMines = 0;	 // Detected mines		(0 = never, 1 = limited distance, 2 = always)
			commands = 0;				 // Commands				(0 = never, 1 = fade out, 2 = always)
			waypoints = 0;			 // Waypoints			(0 = never, 1 = fade out, 2 = always)
			tacticalPing = 0;		 // Tactical Ping		(0 = disabled, 1 = enabled)

			// Personal awareness
			weaponInfo = 0;			 // Weapon info			(0 = never, 1 = fade out, 2 = always)
			stanceIndicator = 0; // Stance indicator		(0 = never, 1 = fade out, 2 = always)
			staminaBar = 0;			 // Stamina bar			(0 = disabled, 1 = enabled)
			weaponCrosshair = 0; // Weapon crosshair		(0 = disabled, 1 = enabled)
			visionAid = 0;			 // Vision aid			(0 = disabled, 1 = enabled)

			// View
			thirdPersonView = 0; // 3rd person view		(0 = disabled, 1 = enabled, 2 = enabled for vehicles only (Since Arma 3 v1.99))
			cameraShake = 1;		 // Camera shake			(0 = disabled, 1 = enabled)

			// Multiplayer
			scoreTable = 0;		 // Score table			(0 = disabled, 1 = enabled)
			deathMessages = 0; // Killed by			(0 = disabled, 1 = enabled)
			vonID = 0;				 // VON ID				(0 = disabled, 1 = enabled)

			// Misc
			mapContent = 0;					// Extended map content (0 = disabled, 1 = enabled) // before Arma 3 v1.68
			mapContentFriendly = 0; // Map friendlies		(0 = disabled, 1 = enabled) // since Arma 3 v1.68
			mapContentEnemy = 0;		// Map Enemies			(0 = disabled, 1 = enabled) // since Arma 3 v1.68
			mapContentMines = 0;		// Map Mines			(0 = disabled, 1 = enabled) // since Arma 3 v1.68
			autoReport = 0;					// Automatic reporting	(0 = disabled, 1 = enabled)
			multipleSaves = 0;			// Multiple saves		(0 = disabled, 1 = enabled)
		};
	};
};

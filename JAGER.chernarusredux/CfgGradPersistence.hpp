class CfgGradPersistence {
    missionTag = "JAGER";
    loadOnMissionStart = 1;
    missionWaitCondition = "true";
    playerWaitCondition = "true";

		// 1 - only editor placed
		// 2 - all
		// 3 - only script or curator placed during the mission
    saveUnits = 0;
    saveVehicles = 3;
    saveContainers = 3;
    saveStatics = 0;
    saveGradFortificationsStatics = 0;
    saveMarkers = 0;
    saveTasks = 0;
    saveTriggers = 0;

		// 0 - off
		// 1 -on
    savePlayerInventory = 1;
    savePlayerDamage = 0;
    savePlayerPosition = 1;
    savePlayerMoney = 1;

    saveTeamAccounts = 0;

    blacklist[] = {};
		
    class customVariables {
        class var1 {
            varName = "mcd_myVariable_test";
            varNamespace = "mission";
            public = 0;
        };
        class var2 {
            varName = "mcd_myPublicVariableOnAUnit_test";
            varNamespace = "unit";
            public = 1;
        };
    };
};

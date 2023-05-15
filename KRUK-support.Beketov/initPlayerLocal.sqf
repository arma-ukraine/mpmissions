[] execVM "fnc_loadBriefing.sqf";

// Intro.
[] spawn {
	sleep 15;
	["Не помиляється тільки той, хто нічого не робить."] spawn BIS_fnc_EXP_camp_SITREP;
};
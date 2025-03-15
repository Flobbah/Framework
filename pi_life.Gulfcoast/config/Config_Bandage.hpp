#define true 1
#define false 0

class Config_Bandage {
	/*
		bandageTime: (INTEGER) The time in SECONDS it takes to apply the bandage

		bandageSetHealth: (BOOLEAN) When using the bandage it will set the players health
			to the same everytime. Otherwise, it will add to the players current health.

		bandageMaxHealth: (INTEGER) The max amount of health a player can receive from
			using a bandage. If bandageSetHealth = true then this is how much health they will receive

		bandageHealing: (INTEGER) The amount of health given to the player everytime they
			use a bandage. 0 = 100%, 1 = dead
			* NOTE: This will only be used if bandageSetHealth = false

	*/

	class Civilian {
		bandageTime = 15;
		bandageSetHealth = false;
		bandageMaxHealth = 0.8;
		bandageHealing = 0.2;
	}

	class Cop {
		bandageTime = 10;
		bandageSetHealth = false;
		bandageMaxHealth = 0.8;
		bandageHealing = 0.2;
	}

	class Medic {
		bandageTime = 5;
		bandageSetHealth = false;
		bandageMaxHealth = 0.8;
		bandageHealing = 0.2;
	}
}
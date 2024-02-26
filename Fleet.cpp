#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <iterator>
#include "Fleet.h"
#include "Robot.h"
#include "Battlefield.h"

using namespace std;

Fleet::Fleet(int fleetName, int fleetHealth, int fleetDef, int fleetPowerLevel)
{
	
	Robot robo1{ 1, 100, 100, 100 };
	Robot robo2(2, 100, 100, 100);
	Robot robo3(3, 100, 100, 100);

	list<Robot> list_robots{ robo1, robo2, robo3 };


	robo1.roboHealth = fleetHealth;

	robo1.roboDamage = fleetDamage;

	robo1.roboDef = fleetDef;

	robo1.roboPowerLevel = fleetPowerLevel;


}

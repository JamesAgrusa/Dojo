#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <iostream>
#include <iterator>
#include "Fleet.h"
#include "Robot.h"
#include "Battlefield.h"

using namespace std;

Fleet::Fleet(int fleetName, int fleetHealth, int fleetDef, int fleetPowerLevel)
{
	Robot robo1(1, 100, 100, 100);
	Robot robo2(2, 100, 100, 100);
	Robot robo3(3, 100, 100, 100);

	
	int roboHealth[3];
	roboHealth[0] = 100;
	roboHealth[1] = 100;
	roboHealth[2] = 100;

	fleetHealth = roboHealth[0] + roboHealth[1] + roboHealth[2];
	
	int roboDef[3];
	roboDef[0] = 100;
	roboDef[1] = 100;
	roboDef[2] = 100;

	fleetDef = roboDef[0] + roboDef[1] + roboDef[2];

	int roboPowerLevel[3];
	roboPowerLevel[0] = 100;
	roboPowerLevel[1] = 100;
	roboPowerLevel[2] = 100;

	fleetPowerLevel = roboPowerLevel[0] + roboPowerLevel[1] + roboPowerLevel[2];


}

#include <iostream>
#include <list>
#include <string>
#include <vector>
#include "Fleet.h"
#include "Robot.h"
#include "Battlefield.h"

using namespace std;

Fleet::Fleet()
{
	Robot robo1(1, 100, 100, 100);
	Robot robo2(1, 100, 100, 100);
	Robot robo3(1, 100, 100, 100);

	Robot* fleet[]
	{
		&robo1,
		&robo2,
		&robo3
	};

}
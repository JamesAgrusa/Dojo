#include "Herd.h"
#include "Dinosaur.h"

Herd::Herd(int type, int herdHealth, int herdDef, int herdAttackPower)
{
	Dinosaur dino1(1, 100, 100, 100, 100);
	Dinosaur dino2(1, 100, 100, 100, 100);
	Dinosaur dino3(1, 100, 100, 100, 100);

	int dinoHealth[3];
	dinoHealth[0] = 100;
	dinoHealth[1] = 100;
	dinoHealth[2] = 100;

	herdHealth = dinoHealth[0] + dinoHealth[1] + dinoHealth[2];

	int dinoDef[3];
	dinoDef[0] = 100;
	dinoDef[1] = 100;
	dinoDef[2] = 100;

	herdDef = dinoDef[0] + dinoDef[1] + dinoDef[2];

	int dinoAttackPower[3];
	dinoAttackPower[0] = 100;
	dinoAttackPower[1] = 100;
	dinoAttackPower[2] = 100;

	herdAttackPower = dinoAttackPower[0] + dinoAttackPower[1] + dinoAttackPower[2];

}
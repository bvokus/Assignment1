#include "CrazyRandomSword.h"
#include <cmath>

double CrazyRandomSword::hit (double armor)
{

	int number = (int) armor/2;

	double damage = 0;

	damage = rand() % number;

	damage = hitPoints - damage;

	return damage;



}

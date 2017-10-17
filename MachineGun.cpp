#include <cmath>
#include <ctime>
#include <cstdlib>

#include "MachineGun.h"

double MachineGun::hit(double armor){


double damage;

damage = hitPoints + rand() % 5; //random amount of damage depending on how many bullets hit

return damage;

}



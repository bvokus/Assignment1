#include <string>
#include "Weapon.h"

ifndef MACHINEGUN_H
#define MACHINEGUN_H

class MachineGun : public Weapon {
	public:

		MachineGun : Weapon("MachineGun", 30) {}
		virtual ~MachineGun() {};
		virtual double hit (double armor);
};



#endif

#include "Weapon.h"
#include <string>

#ifndef CRAZYRANDOMSWORD_H
define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon
{


	public:
		CrazyRandomSword() : Weapon ("CrazyRandomSword", rand() % 100+10){}
		
		virtual ~ CrazyRandomSword();
		virtual double hit(double armor);
};



#endif

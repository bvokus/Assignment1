#include <string>
#include "Weapon.h"


#ifndef SIMPLEAXE_H
#define SIMLPEAXE_H

class SimpleAxe : public Weapon {
	public:
		SimpleAxe() : Weapon ("SimpleAxe",60.0){}
		virtual ~SimpleAxe() {};
		virtual double hit (double armor);
	};


#endif

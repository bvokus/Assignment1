#include "SimpleAxe.h"

double SimpleAxe::hit (double armor){
	if (armor < 20 && armor > 0){
		double damage = hitpoints;
		} else {
			double damage = hitpoints - armor;
		}

	if (damage < 0){
		return 0;
	}

	return damage;

}

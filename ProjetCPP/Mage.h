/*
 * Mage.h
 *
 *  Created on: 28 sept. 2018
 *      Author: DYLAN-MSI
 */

#ifndef MAGE_H_
#define MAGE_H_

#include "Character.h"
#include "Weapon.h"

namespace std {

class Mage : public Character {
public:
	Mage();
	Mage(int);
	Mage(Weapon&);
	Mage(int, Weapon&);
	virtual ~Mage();
	// methods
	void initProp();
	string getName();
	bool isDead();
	void useWeapon(Character&);
	void changeWeapon(Weapon&);
	void dealDamage(Character&, int);
	string exportDatas();
};

} /* namespace std */

#endif /* MAGE_H_ */

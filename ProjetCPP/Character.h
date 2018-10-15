/*
 * Character.h
 *
 *  Created on: 28 sept. 2018
 *      Author: DYLAN-MSI
 */

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <iostream>
#include <fstream>
#include <sstream>

#include "Weapon.h"

namespace std {

class Character {
public:
	Character();
	Character(int);
	Character(Weapon&);
	Character(int, Weapon&);
	virtual ~Character();
	// attributes
	int hitPoints;
	Weapon weapon;
	// methods
	virtual void initProp();
	virtual bool isDead() {
		return true;
	};
	virtual void useWeapon(Character&);
	virtual void changeWeapon(Weapon&);
	virtual string exportDatas();
};

} /* namespace std */

#endif /* CHARACTER_H_ */
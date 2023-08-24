#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanB();
	HumanB(std::string input);
	void attack();
	void setWeapon(Weapon& given_weapon);
};

#endif

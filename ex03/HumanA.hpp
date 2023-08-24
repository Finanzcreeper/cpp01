#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA();
	HumanA(std::string input, Weapon &given_weapon);
	void attack();
};

#endif

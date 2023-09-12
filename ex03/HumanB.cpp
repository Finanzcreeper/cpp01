#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &givenweapon)
{
	weapon = &givenweapon;
}

void HumanB::attack()
{
	if (this->weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their bare hands" << std::endl;
}

HumanB::HumanB(std::string input)
{
	name = input;
	this->weapon = NULL;
}

HumanB::HumanB()
{
	this->weapon = NULL;
}

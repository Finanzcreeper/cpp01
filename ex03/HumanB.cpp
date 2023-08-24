#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &givenweapon)
{
	weapon = &givenweapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB(std::string input)
{
	name = input;
}

HumanB::HumanB(){}
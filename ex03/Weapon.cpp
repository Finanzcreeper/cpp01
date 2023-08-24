#include "Weapon.hpp"

void Weapon::setType(std::string input)
{
	type = input;
}

const std::string Weapon::getType(void)
{
	return(type);
}

Weapon::Weapon(std::string input)
{
	type = input;
}

Weapon::Weapon(){}

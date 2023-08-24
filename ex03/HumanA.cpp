#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string input, Weapon &given_weapon) :
name(input), weapon(given_weapon)
{
}


#include "Zombie.hpp"

Zombie::Zombie(std::string input)
{
	name = input;
	announce();
}

Zombie::~Zombie(void)
{
	std::cout << name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

#include "Zombie.hpp"

Zombie::Zombie(std::string input)
{
	name = input;
}

Zombie::~Zombie(void)
{
	std::cout << name << " got absolutely Wrecked!"<< std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

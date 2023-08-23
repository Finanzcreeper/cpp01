#include "Zombie.hpp"

Zombie::Zombie(){}

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

void Zombie::nameZombie(std::string input)
{
	name = input;
}

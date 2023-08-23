#include "Zombie.hpp"

int	main(void)
{
	Zombie *mike;

	randomChump("jake");
	mike = newZombie("mike");
	mike->announce();
	delete mike;
}



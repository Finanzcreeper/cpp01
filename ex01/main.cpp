#include "Zombie.hpp"

int	main(void)
{
	Zombie* horde;

	horde = zombieHorde(10, "HungryHenry");
	for(int i = 0; i < 10; i++)
		horde[i].announce();
	// for(int i = 0; i < 10; i++)
	// 	horde[i].~Zombie();
	delete [] horde;
}

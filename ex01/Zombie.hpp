#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class Zombie
{
	public:

	Zombie();
	Zombie(std::string input);
	~Zombie();
	void announce(void);
	void nameZombie(std::string input);
	private:

	std::string name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
Zombie*	zombieHorde( int N, std::string name );
#endif

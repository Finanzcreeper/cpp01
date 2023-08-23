#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class Zombie
{
	public:

	Zombie(std::string input);
	~Zombie();
	void announce(void);

	private:

	std::string name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
#endif

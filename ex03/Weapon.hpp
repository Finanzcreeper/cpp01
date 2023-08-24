#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string input);
	const std::string getType();
	void setType(std::string input);
};

#endif

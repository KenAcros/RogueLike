#pragma once
#include <string>

class Weapon
{
private:
	std::string name;
	int damage;
public:
	Weapon();
	~Weapon();
	Weapon(int _damage, std::string _name);

	int getDamage();
	std::string getName();
};


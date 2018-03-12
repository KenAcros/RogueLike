#pragma once
#include <string>

class Armor
{
private:
	std::string name;
	int armorValue;

public:
	Armor();
	~Armor();
	Armor(int _armorValue, std::string _name);

	int getArmorValue();
	std::string getName();
};


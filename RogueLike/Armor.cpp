#include "stdafx.h"
#include "Armor.h"

Armor::Armor()
{
}

Armor::~Armor()
{
}

Armor::Armor(int _armorValue, std::string _name)
{
	if (_armorValue >= 0) armorValue = _armorValue;
	else armorValue = 0;
	name = _name;
}

int Armor::getArmorValue()
{
	return armorValue;
}

std::string Armor::getName()
{
	return name;
}

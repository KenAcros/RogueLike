#include "stdafx.h"
#include "Weapon.h"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon(int _damage, std::string _name)
{
	if (_damage >= 0) damage = _damage;
	else damage = 0;
	name = _name;
}

int Weapon::getDamage()
{
	return damage;
}

std::string Weapon::getName()
{
	return name;
}

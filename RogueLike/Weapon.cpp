#include "stdafx.h"
#include "Weapon.h"


Weapon::Weapon(int _damage, std::string _name)
{
	damage = _damage;
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
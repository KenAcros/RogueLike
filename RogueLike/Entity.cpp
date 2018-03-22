#include "stdafx.h"
#include "Entity.h"

Entity::Entity()
{

}

int Entity::getLevel()
{
	return lvl;
}

void Entity::setLevel(int _lvl)
{
	if (_lvl > 0) lvl = _lvl;
	else lvl = 0;
}

int Entity::getHp()
{
	return hp;
}

void Entity::takeDamage(int _damage)
{
	hp -= _damage;
}

void Entity::attack(Entity & _entity)
{
	_entity.takeDamage(weapon.getDamage());
}

int Entity::getMana()
{
	return mana;
}

void Entity::useMana(int _manaCost)
{
	mana -= _manaCost;
}

std::string Entity::getName()
{
	return name;
}

void Entity::setWeapon(Weapon _weapon)
{
	weapon = _weapon;
}

Weapon Entity::getWeapon()
{
	return weapon;
}

void Entity::setArmor(Armor _armor)
{
	armor = _armor;
}

Armor Entity::getArmor()
{
	return armor;
}

int Entity::getMaxHp()
{
	return maxHp;
}

int Entity::getMaxMana()
{
	return maxMana;
}


#include "stdafx.h"
#include "Entity.h"

Entity::Entity()
{
}

Entity::~Entity()
{
}

Entity::Entity(int _lvl, int _maxHp, int _maxMana)
{
	if (_lvl > 0) lvl = _lvl;
	else lvl = 0;
	if (_maxHp > 0) maxHp = _maxHp;
	else maxHp = 0;
	if (_maxMana > 0) maxMana = _maxMana;
	else maxMana = 0;
}

Entity::Entity(Entity &_entity)
{
	this->name = _entity.getName();
	this->weapon = _entity.getWeapon();
	this->armor = _entity.getArmor();
	this->maxHp = _entity.getMaxHp();
	this->maxMana = _entity.getMaxMana();
	this->lvl = _entity.getLevel();
	this->hp = this->getMaxHp();
	this->mana = this->getMaxMana();
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

Weapon Entity::getWeapon()
{
	return weapon;
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


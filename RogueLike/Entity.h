#pragma once
#include "Weapon.h"
#include "Armor.h"
#include "Spell.h"
class Entity
{
protected:
	std::string name;
	int lvl;
	int hp;
	int maxHp;
	int mana;
	int maxMana;
	Weapon weapon;
	Armor armor;

public:
	Entity();
	~Entity();
	Entity(int _lvl, int _maxHp, int _maxMana);
	Entity(Entity &_enemy);

	int getLevel();
	void setLevel(int _lvl);
	int getHp();
	void takeDamage(int _damage);
	int getMana();
	void useMana(int _manaCost);
	std::string getName();
	Weapon getWeapon();
	Armor getArmor();
	int getMaxHp();
	int getMaxMana();
};
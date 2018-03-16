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
	int getLevel();
	void setLevel(int _lvl);
	int getHp();
	void takeDamage(int _damage);
	int getMana();
	void useMana(int _manaCost);
	std::string getName();
	void setWeapon(Weapon _weapon);
	Weapon getWeapon();
	void setArmor(Armor _armor);
	Armor getArmor();
	int getMaxHp();
	int getMaxMana();
};
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
	int posX;
	int posY;
	Weapon weapon = Weapon(0,"");
	Armor armor = Armor(0,"");	
	Entity();
	
public:
	int getPosX();
	void setPosX(int _posX);
	int getPosY();
	void setPosY(int _posY);
	int getLevel();
	void setLevel(int _lvl);
	int getHp();
	void takeDamage(int _damage);
	void attack(Entity & _entity);
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
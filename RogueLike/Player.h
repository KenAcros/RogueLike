#pragma once
#include "Weapon.h"
#include "Armor.h"
#include "Spell.h"
#include "Enemy.h"

class Player
{
private:
	std::string name;
	int lvl;
	int hp;
	int maxHp;
	int mana;
	int maxMana;
	Weapon weapon;
	Armor armor;
	
public:
	Player();
	~Player();
	Player(int _maxHp, int _maxMana);

	int hitEnemy(const Enemy &ennemy);
	int takeDamage(const Weapon &ennArme);
	int getLvl();
	void setLvl();
	int getHp(int _lvl);
	int getMana();
	void setMana(int _mana);
	Weapon getWeapon();
	void setWeapon(Weapon _weapon);
	Armor getArmor();
	void setArmor(Armor _armor);
	std::string getName();
};



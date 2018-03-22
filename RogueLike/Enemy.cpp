#include "stdafx.h"
#include "Enemy.h"

Enemy::Enemy(int _lvl, int _maxHp, int _maxMana, std::string _name)
{
	lvl = _lvl;
	maxHp = _maxHp;
	hp = maxHp;
	maxMana = _maxMana;	
	mana = maxMana;
	name = _name;
}

#pragma once
#include "Entity.h"


class Enemy
{
private:
	Entity entity;

public:
	Enemy();
	~Enemy();
	Enemy(int _lvl, int _maxHp, int _maxMana);
	Enemy(Enemy &_enemy);
};


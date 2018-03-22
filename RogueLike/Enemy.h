#pragma once
#include "Entity.h"


class Enemy : public Entity
{
public:
	Enemy(int _lvl, int _maxHp, int _maxMana, std::string name);
};


#include "stdafx.h"
#include "Player.h"


Player::Player()
{
}


Player::~Player()
{
}

Player::Player(int _maxHp, int _maxMana)
{
}

int Player::hitEnemy(const Enemy & ennemy)
{
	return 0;
}

int Player::takeDamage(const Weapon & ennArme)
{
	return 0;
}

int Player::getLvl()
{
	return 0;
}

void Player::setLvl()
{
}

int Player::getHp(int _lvl)
{
	return 0;
}

int Player::getMana()
{
	return 0;
}

void Player::setMana(int _mana)
{
}

Weapon Player::getWeapon()
{
	return Weapon();
}

void Player::setWeapon(Weapon _weapon)
{
}

Armor Player::getArmor()
{
	return Armor();
}

void Player::setArmor(Armor _armor)
{
}

std::string Player::getName()
{
	return std::string();
}

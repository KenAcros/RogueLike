#include "stdafx.h"
#include "Player.h"

Player::Player(std::string _name, int _difficultyLevel)
{
	name = _name;
	difficultyLevel = _difficultyLevel;	
}

void Player::savePlayerState()
{
}

int Player::getRoomNumber()
{
	return roomNumber;
}

int Player::getDifficultyLevel()
{
	return difficultyLevel;
}

#include "stdafx.h"
#include "Player.h"

Player::Player(std::string _name, int _difficultyLevel)
{
	name = _name;
	difficultyLevel = _difficultyLevel;	
}

void Player::savePlayerState()
{
	//TODO : write player data in a savefile. Do when file gestion is added to the project 
}

int Player::getRoomNumber()
{
	return roomNumber;
}

int Player::getDifficultyLevel()
{
	return difficultyLevel;
}

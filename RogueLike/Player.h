#pragma once
#include "Entity.h"

class Player : public Entity
{
private:
	std::string SaveFile;
	int roomNumber;
	int difficultyLevel;
public:
	Player(std::string _name, int _difficultyLevel);
	void savePlayerState();
	int getRoomNumber();
	int getDifficultyLevel();
};



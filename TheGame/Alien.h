#pragma once
#include "DrawableObj.h"

class  Alien: DrawableObj
{
public:
	Alien();
	
	void Act();
	void MoveUp();

	void MoveDown();

	void MoveForward();

	void MoveBack();
	

private:
	sf::Sprite sprite;

	
};


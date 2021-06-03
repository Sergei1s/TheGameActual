#include "LongDistanceBus.h"

LongDistanceBus::LongDistanceBus() 
{
	defspeed = 20;
	maxFuel = 200;
	currentFuel = maxFuel;
	pos.x = 15;
	pos.y = 700;
	spritePosition.x = pos.x;
	spritePosition.y = pos.y;
	spriteScale = Vector2f(1, 1);
	LongDistanceBus::setPath(LongDistanceBusTexturePath);
	LongDistanceBus::setSprite();
}

LongDistanceBus::~LongDistanceBus()
{
}

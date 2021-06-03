#include "Bus.h"
#include <iostream>


Vector2f Bus::ToVector2f(Position pos)
{
	Vector2f vector;
	vector.x = pos.x;
	vector.y = pos.y;
	return vector;
}

Bus::Bus()
{
	maxFuel = 100;
	currentFuel = maxFuel;
	pos.x = 400;
	pos.y = 700;
	spritePosition.x = pos.x;
	spritePosition.y = pos.y;
	Bus:: setPath(OriginalBusTexturePath);
	Bus::setSprite();
};


void Bus::MoveUp() 
{
	this->MoveOn(Vector2f(0, -(*speed)));
	
}

void Bus::MoveDown()
{
	this->MoveOn(Vector2f(0, (*speed)));
	
}

void Bus::MoveForward()
{
	this->MoveOn(Vector2f((*speed), 0));
	
}

void Bus::MoveBack()
{
	this->MoveOn(Vector2f(-(*speed), 0));
	
}

void Bus::MoveOn(Vector2f vectorPosition)
{
	this->pos.x += (int)vectorPosition.x;
	this->pos.y += (int)vectorPosition.y;
	sprite.move(vectorPosition);
}

void Bus::MoveAt(Vector2f vectorPosition)
{
	this->pos.x = (int)vectorPosition.x;
	this->pos.y = (int)vectorPosition.y;
	sprite.setPosition(vectorPosition);
}

Sprite Bus::getSprite()
{
	return sprite;
}

void Bus::SetPosition(Bus::Position nextPosition)
{
	this->pos = nextPosition;
}

Bus::Position Bus::GetPosition()
{
	return this->pos;
}



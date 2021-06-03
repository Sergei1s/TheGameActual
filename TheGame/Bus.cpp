#include "Bus.h"


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
	/*sprite.move(Vector2f(0, -(*speed)));
	Vector2f busPosition = sprite.getPosition();
	pos = {(int)busPosition.x, (int)busPosition.y};*/
}

void Bus::MoveDown()
{
	this->MoveOn(Vector2f(0, (*speed)));
	/*sprite.move(Vector2f(0, (*speed)));
	Vector2f busPosition = sprite.getPosition();
	pos = { (int)busPosition.x, (int)busPosition.y };*/
}

void Bus::MoveForward()
{
	this->MoveOn(Vector2f((*speed), 0));
	/*sprite.move(Vector2f( (*speed),0));
	Vector2f busPosition = sprite.getPosition();
	pos = { (int)busPosition.x, (int)busPosition.y };*/
}

void Bus::MoveBack()
{
	this->MoveOn(Vector2f(-(*speed), 0));
	//sprite.move(this->ToVector2f(this->GetPosition()));
	/*Vector2f busPosition = sprite.getPosition();
	pos = { (int)busPosition.x, (int)busPosition.y };*/
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
	cout <<"OLD x: "<< this->pos.x;
	cout << "OLD y: " << this->pos.y;
	return this->pos;
}



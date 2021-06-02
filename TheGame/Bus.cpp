#include "Bus.h"




Bus::Bus()
{
	pos.x = 10;
	pos.y = 10;
	Bus:: setPath(OriginalBusTexturePath);
	Bus::setSprite();
};

//void Bus::setSprite() 
//{
//	OriginalBusTexturePath = textureFolderPath + textureTitle;
//	texture.loadFromFile(OriginalBusTexturePath);
//	sprite.setTexture(texture);
//	sprite.setScale(spriteScale);
//	sprite.setPosition(Vector2f(pos.x, pos.y));
//}

void Bus::MoveUp() 
{
	sprite.move(Vector2f(0, -(*speed)));
	Vector2f busPosition = sprite.getPosition();
	pos = {(int)busPosition.x, (int)busPosition.y};
}

void Bus::MoveDown()
{
	sprite.move(Vector2f(0, (*speed)));
	Vector2f busPosition = sprite.getPosition();
	pos = { (int)busPosition.x, (int)busPosition.y };
}

void Bus::MoveForward()
{
	sprite.move(Vector2f( (*speed),0));
	Vector2f busPosition = sprite.getPosition();
	pos = { (int)busPosition.x, (int)busPosition.y };
}

void Bus::MoveBack()
{
	sprite.move(Vector2f(-(*speed), 0));
	Vector2f busPosition = sprite.getPosition();
	pos = { (int)busPosition.x, (int)busPosition.y };
}


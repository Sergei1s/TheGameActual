#include "BackGroundObj.h"

BackgroundObject::BackgroundObject()
{
	pos.x = 0;
	pos.y = -50;
	spritePosition.x = pos.x;
	spritePosition.y = pos.y;
	spriteScale = Vector2f(2, 2);
	BackgroundObject::setPath(BackgroundTexturePath);
	BackgroundObject::setSprite();
}

BackgroundObject::~BackgroundObject()
{

}

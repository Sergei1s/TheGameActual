#include "Fueler.h"

Fueler::Fueler()
{
	pos.x = 1000;
	pos.y = 10;
	spritePosition.x = pos.x;
	spritePosition.y = pos.y;
	spriteScale = Vector2f(0.07, 0.07);
	Fueler::setPath(FuelerTexturePath);
	Fueler::setSprite();
	
}

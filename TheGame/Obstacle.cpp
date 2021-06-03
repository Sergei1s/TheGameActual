#include "Obstacle.h"

Obstacle::Obstacle()
{
	pos.x = 1000;
	pos.y = 700;
	spritePosition.x = pos.x;
	spritePosition.y = pos.y;
	spriteScale = Vector2f(0.7, 0.7);
	Obstacle::setPath(ObstacleTexturePath);
	Obstacle::setSprite();
}

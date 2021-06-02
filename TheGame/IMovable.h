#pragma once

#include "Point.h"
#include <SFML\Window\Event.hpp>

class IMovable
{
public:
	Point position;




	/*void MoveUp()
	{
		sprite.move(Vector2f(0, -(*speed)));
		Vector2f busPosition = sprite.getPosition();
		pos = { (int)busPosition.x, (int)busPosition.y };
	}

	void MoveDown()
	{
		sprite.move(Vector2f(0, (*speed)));
		Vector2f busPosition = sprite.getPosition();
		pos = { (int)busPosition.x, (int)busPosition.y };
	}

	void MoveForward()
	{
		sprite.move(Vector2f((*speed), 0));
		Vector2f busPosition = sprite.getPosition();
		pos = { (int)busPosition.x, (int)busPosition.y };
	}

	void MoveBack()
	{
		sprite.move(Vector2f(-(*speed), 0));
		Vector2f busPosition = sprite.getPosition();
		pos = { (int)busPosition.x, (int)busPosition.y };
	}*/
	//Event move;

};


#pragma once
#include <SFML/Graphics.hpp>
#include "Point.h"
#include "DrawableObj.h"
#include "ObserverPattern.h"
#include <vector>
#include "ICollider.h"
#include "IFilling.h"
#include "IFillable.h"
using namespace sf;


class Bus : public DrawableObj,  public IFillable
{
protected:

	typedef struct Position
	{
		int x, y;
	};
	Position pos;
	
	/*auto operator+ (Position _pos)
	{
		Position pos;
		pos.x += _pos.x ;
		pos.y = _pos.y;
		return pos;
	}; */

	//путь к текстуре для спрайта
	string OriginalBusTexturePath = "D:\\University\\OOP\\The Game\\BUS.png";
	
	//основные параметры
	int armor = 10, capacity = 10, defspeed = 10;
	int* speed = &defspeed;
	
public:
	Bus();
	Vector2f ToVector2f(Position pos);
	virtual void SpendFuel() 
	{
		currentFuel -= 0.01*(*speed);
	}
	
	void OnCollision(ICollider* obj)override 
	{

	}
	//нужно это реализовать, но с другой стороны. т.е со стороны заправщика.
	

	Sprite getSprite();
	void SetPosition(Position nextPosition);
	Position GetPosition();
	void MoveUp();
	void MoveDown();
	void MoveForward();
	void MoveBack();

	void MoveOn(Vector2f vectorPosition);
	void MoveAt(Vector2f vectorPosition);
};


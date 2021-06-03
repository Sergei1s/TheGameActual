#pragma once
#include <SFML/Graphics.hpp>
#include "DrawableObj.h"
#include <vector>
#include "ICollider.h"
#include "IFillable.h"
#include <string>
using namespace sf;


class Bus : public DrawableObj,  public IFillable
{
protected:

	typedef struct Position
	{
		int x, y;
	};
	Position pos;
	
		//путь к текстуре для спрайта
	std::string OriginalBusTexturePath = "D:\\University\\OOP\\The Game\\BUS.png";
	
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


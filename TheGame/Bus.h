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


class Bus : public DrawableObj, public ICollider, public IFillable//,DrawableObj// ISubject
{
protected:
	
	//Point position;
	
	struct Position 
	{
		int x, y;
	};
	Position pos;
	

	//путь к текстуре для спрайта
	string OriginalBusTexturePath = "D:\\University\\OOP\\The Game\\BUS.png";
	//"D: / University / OOP / The Game /forGame /BUS.png";
	
	//основные параметры
	int armor = 10, capacity = 10, defspeed = 10;
	int* speed = &defspeed;

	
	//работа с текстурой и спрайтом
	//Texture texture;
	//Sprite Sprite;
	//string textureFolderPath = "D:/University/OOP/The Game/", textureTitle = "BUS.png", OriginalBusTexturePath;
	//Vector2f spriteScale = Vector2f(0.5, 0.5);
	/*void setSprite()override 
	{

	}*/

	//void setSprite() override;
	//std::list<IObserver*> list_observer_;

	//void Attach(IObserver* observer) override 
	//{
	//	list_observer_.push_back(observer);
	//}
	//void Detach(IObserver* observer) override 
	//{
	//	list_observer_.remove(observer);
	//}

	//void Notify() override 
	//{

	//}
	
	
public:
	
	
	Bus();

	void Shoot() 
	{

	}
	
	//нужно это реализовать, но с другой стороны. т.е со стороны заправщика.
	void OnCollision(ICollider* obj) override
	{
		if (typeid(obj) == typeid(IFilling)) 
		{
			//тут нужно добавить бензина
		}
	}

	Sprite getSprite()
	{
		return sprite;
	}

	void SetPosition(Point nextPosition)
	{
		pos.x = nextPosition.GetX();
		pos.y = nextPosition.GetY();
	}

	/// дебагинг
	float GetXPosition( )
	{
		return pos.x; 
	}
	/// дебагинг
	float GetYPosition()
	{
		return pos.y;
	}

	/// <summary>
	/// Moves on dx/dy conventional distance
	/// </summary>
	/// <param name="dx">movement along x</param>
	/// <param name="dy">movement along y</param>
	/// <returns></returns>
	/*void MoveAt(Point nextPosition) override
	{
		position = nextPosition;
		Sprite.setPosition(nextPosition.GetX(), nextPosition.GetY());
	}*/

	//void MoveOn(Point positionDifference) override
	/*{
		position = position + positionDifference;
		Sprite.setPosition(position.GetX(), position.GetY());
	}*/


	void MoveUp();

	void MoveDown();

	void MoveForward();

	void MoveBack();

};


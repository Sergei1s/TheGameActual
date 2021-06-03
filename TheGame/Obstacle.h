#pragma once
#include "DrawableObj.h"
#include "Bus.h"


class Obstacle : public DrawableObj
{
public:
	Obstacle();
	~Obstacle() {};
	void OnCollision(ICollider* obj) override 
	{
		if (auto bus = dynamic_cast<Bus*>(obj))
		{
			obj->SetState(true);
			//удалить все обьекты и вывести картинку - игра закончена

		}
	};

private:
	typedef struct Position
	{
		int x, y;
	};
	Position pos;
	std::string ObstacleTexturePath = "D:\\University\\OOP\\The Game\\Obstacle.png";
};



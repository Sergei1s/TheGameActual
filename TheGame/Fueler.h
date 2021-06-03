#pragma once
#include "ICollider.h"
#include "IFillable.h"
#include <typeinfo>
#include "DrawableObj.h"
#include <string>
#include <iostream>

class Fueler :public DrawableObj
{
public:
	Fueler() ;
	~Fueler() {};

	void OnCollision(ICollider* obj) override
	{

		if (auto bus = dynamic_cast<IFillable*>(obj))
		{
			this->Fuel(bus);
			this->IsDestructed = true;
		}
	}

	void Fuel(IFillable*  obj) 
	{
		(*obj).GetFuel(oil);
	}

private:
	typedef struct Position
	{
		int x, y;
	};
	Position pos;
	int oil = 10;
	std::string FuelerTexturePath = "D:\\University\\OOP\\The Game\\Fueler.png";
};


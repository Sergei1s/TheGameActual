#pragma once
#include "ICollider.h"
#include "IFillable.h"
#include <typeinfo>

class Fueler :public ICollider
{
public:
	Fueler() {};
	~Fueler() {};

	void OnCollision(ICollider* obj) override
	{
		if (typeid(obj) == typeid(IFillable))
		{
			this->Fuel(
				dynamic_cast<IFillable*>(obj));
		}
	}

	void Fuel(IFillable*  obj) 
	{
		(*obj).GetFuel(oil);
	}

private:
	int oil = 10;

};


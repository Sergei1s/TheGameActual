#pragma once
#include "Bus.h"
class LongDistanceBus : public Bus//,public DrawableObj, public ICollider, public IFillable
{
public:
	LongDistanceBus();
	~LongDistanceBus();

	 void SpendFuel() override
	{
		currentFuel -= 0.01 * ((*speed)^2);
	}
private:
	string LongDistanceBusTexturePath =  "D:\\University\\OOP\\The Game\\LongDistanceBus.png";
};


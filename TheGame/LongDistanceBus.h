#pragma once
#include "Bus.h"
#include <string>
class LongDistanceBus : public Bus
{
public:
	LongDistanceBus();
	~LongDistanceBus();

	 void SpendFuel() override
	{
		currentFuel -= 0.01 * ((*speed)^2);
	}
private:
	std::string LongDistanceBusTexturePath =  "D:\\University\\OOP\\The Game\\LongDistanceBus.png";
};


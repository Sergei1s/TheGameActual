#pragma once

class IFillable
{
public:
	IFillable() {  };
	~IFillable() {};

	virtual void GetFuel(int _fuel)
	{
		currentFuel += _fuel;
		if (currentFuel > maxFuel) currentFuel = maxFuel;
	};
protected:
	int currentFuel;
	int maxFuel;
};


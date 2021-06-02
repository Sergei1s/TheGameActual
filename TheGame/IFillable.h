#pragma once

class IFillable
{
public:
	IFillable() {  };
	~IFillable() {};

	virtual void GetFuel(int _fuel) { fuel += _fuel; };

protected:
	int fuel;
};


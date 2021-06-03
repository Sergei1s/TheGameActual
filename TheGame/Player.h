#pragma once
#include "Bus.h"
#include "LongDistanceBus.h"
#include "Drawer.h"

class Player
{
public:
	

	Player( ObjectPool* pool)
	{
		Bus* bus = new Bus();
		Bus* longDistBus = new LongDistanceBus();
		
		posibleBuses[0] = bus;
		posibleBuses[1] = longDistBus;
		currentBus = posibleBuses[0];
		this->pool = pool;
		pool->Add(currentBus);
	}

	void ChangeBus(int number)
	{
		int index = number - 1;
		
		Bus* newBus = posibleBuses[index];
		ChangePosition(currentBus, newBus);

		pool->Remove(currentBus);
		pool->Add(newBus);

		this->currentBus = newBus;
	}

	Bus* getCurrentBus()
	{
		return currentBus;
	}
private:
	Bus* posibleBuses[2];
	int count;

	Bus* currentBus;
	ObjectPool* pool;
	
	void ChangePosition(Bus* oldBus, Bus* newBus)
	{
		newBus->MoveAt(newBus->ToVector2f( oldBus->GetPosition()));
	}

};

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
		//Bus* _posibleBuses[2] = { bus, longDistBus };
		//posibleBuses = _posibleBuses;
		currentBus = posibleBuses[0];
		//currentBus = *posibleBuses;
		this->pool = pool;
		pool->Add(currentBus);
	}

	void ChangeBus(int number)
	{
		int index = number - 1;
		
		//newBus = this->posibleBuses[index];
		Bus* newBus = posibleBuses[index];
		//std::cout<<"NewBus POs x"<< this->newBus->GetPosition().x;
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
	Bus* posibleBuses[2];///=new Bus[][2];
	int count;

	Bus* currentBus;
	//Bus* newBus;
	ObjectPool* pool;
	
	void ChangePosition(Bus* oldBus, Bus* newBus)
	{
		//newBus.position = (oldBus)->position;
		//newBus->SetPosition(oldBus->GetPosition());
		newBus->MoveAt(newBus->ToVector2f( oldBus->GetPosition()));
	}

};

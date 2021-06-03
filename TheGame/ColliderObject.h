#pragma once
#include "Drawer.h"
#include < iterator >
using namespace sf;

class Physics 
{
public:
	Physics(ObjectPool* _pool) {};
	void update(ObjectPool* pool) {
		
		for(DrawableObj* iter1: (*pool).getList())
		{
			for (DrawableObj* iter2 : (*pool).getList())
			{
				if (iter1 != iter2) {
					if ((iter1)->sprite.getGlobalBounds().intersects((iter2)->sprite.getGlobalBounds())) {
						
						if (iter1->GetState())
						{
							pool->Remove(iter1);
						}
						else
							(iter1)->OnCollision(iter2);
						
					}
				}
			}
		}

		return;
	};
};
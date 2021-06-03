#pragma once
//#include "Rectangle.h"
#include "Drawer.h"
//#include "DrawableObj.h"
#include < iterator >
using namespace sf;
//
//class ColliderObject : public DrawableObj
//{
//public:
//	Rectangle* getCollider(DrawableObj* obj);
//	virtual void onCollision(ColliderObject* obj);
//	bool IsIntersection(ColliderObject obj);
//	ColliderObject();
//private:
//	Rectangle bounds;
//
//	
//};
//
class Physics 
{
	//ObjectPool pool;
public:
	Physics(ObjectPool* _pool) {};
	void update(ObjectPool* pool) {
		/*ColliderObject* collider1;
		ColliderObject* collider2;*/


		/*for (auto iter1 = (*pool).begin(); iter1 != (*pool).end(); iter1++)
		{

			for (auto iter2 = (*pool).begin(); iter2 != (*pool).end(); iter2++)
			{
				if (iter1 != iter2) {
					if ((*iter1)->sprite.getGlobalBounds().intersects((*iter2)->sprite.getGlobalBounds())) {
						(*iter1)->OnCollision(*iter2);
					}
				}
			}
		}*/
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

		/*for (ColliderObject collider1 : *pool)
			for (ColliderObject collider2 : *pool) {
				if (&collider1 != &collider2) {
					if (collider1.IsIntersection(collider2)) {
						collider1.onCollision(collider2);
						collider2.onCollision(collider1);
					}
				}
			}*/
		return;
	};
};
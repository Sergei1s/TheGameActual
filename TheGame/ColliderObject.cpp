#include "ColliderObject.h"
#include "DrawableObj.h"
#include "Drawer.h"
//
//Physics::Physics(ObjectPool* _pool)
//{
//	//ObjectPool* pool = _pool;
//}

//void Physics::update(ObjectPool* pool) {
//	/*ColliderObject* collider1;
//	ColliderObject* collider2;*/
//
//
//	for (DrawableObj* iter1 = (*pool).begin(); iter1 != (*pool).end(); iter1++)
//	{
//
//		for (DrawableObj* iter2 = (*pool).begin(); iter2 != (*pool).end(); iter2++)
//		{
//			if (iter1 != iter2) {
//				if (iter1->sprite.getGlobalBounds().intersects(iter2->sprite.getGlobalBounds())) {
//					iter1->OnCollision(iter2);
//					iter2->OnCollision(iter1);
//				}
//			}
//		}
//	}
//	/*for (ColliderObject collider1 : *pool)
//		for (ColliderObject collider2 : *pool) {
//			if (&collider1 != &collider2) {
//				if (collider1.IsIntersection(collider2)) {
//					collider1.onCollision(collider2);
//					collider2.onCollision(collider1);
//				}
//			}
//		}*/
//	return;
//};
//
//Rectangle* ColliderObject::getCollider(DrawableObj* obj)
//{
//	//(*obj).sprite.getScale();
//	int x = (*obj).spritePosition.x;
//	int y = (*obj).spritePosition.y;
//	float height = (*obj).spriteScale.x;
//	float width = (*obj).spriteScale.y;
//	//Rectangle* rectangle = new Rectangle(x, (*obj).spritePosition.y), (*obj).spriteScale.x, (*obj).spriteScale.y);
//	Rectangle* rect = new Rectangle(x,y,height,width);
//	return rect;
//}
//
//void ColliderObject::onCollision(ColliderObject obj)
//{///тут нужен другой код. код того как один обьект влияет на другой обект 
//
//
//	float x1 = this->bounds.getX1();
//	float x2 = this->bounds.getX2(); 
//	float y2 = this->bounds.getY2();
//	float y1 = this->bounds.getY1();
//
//	if (((x1 <= obj.bounds.getX1()) && (x2 >= obj.bounds.getX1())) && ((y2 <= obj.bounds.getY1() 
//		&& y1 >= obj.bounds.getY1() ) || (y2 <= obj.bounds.getY2() && y1 >= obj.bounds.getY2())))
//	{
//	}
//}
//
//bool ColliderObject::IsIntersection(ColliderObject obj)
//{
//	float x1 = this->bounds.getX1();
//	float x2 = this->bounds.getX2();
//	float y2 = this->bounds.getY2();
//	float y1 = this->bounds.getY1();
//
//	if (((x1 <= obj.bounds.getX1()) && (x2 >= obj.bounds.getX1())) && ((y2 <= obj.bounds.getY1()
//		&& y1 >= obj.bounds.getY1()) || (y2 <= obj.bounds.getY2() && y1 >= obj.bounds.getY2())))
//	{
//		//удаляем все обьекты с поля и выводим картинку, что игра завершена
//	}
//
//	return false;
//}
//
//ColliderObject::ColliderObject()
//{
//};
//
//

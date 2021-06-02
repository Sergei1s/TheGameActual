#pragma once

#include <SFML/Graphics.hpp>
#include <list>
#include "DrawableObj.h"
#include < iterator >
using namespace sf;


class ObjectPool {
private:
	std::list<DrawableObj*> pool;
public:
	void Add(DrawableObj* obj);
	void Remove(DrawableObj* obj);
	DrawableObj* begin();
	DrawableObj* end();
	int GetSize();

};


//не понимаю как рисовать из пула обьектов. Мне все обьекты сразу рисовать?
class Drawer {
public:
	Drawer(ObjectPool* pool);

	void draw(RenderWindow* window, ObjectPool* pool);
	
};


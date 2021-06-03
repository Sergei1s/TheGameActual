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
	auto begin();
	auto end();
	int GetSize();
	std::list<DrawableObj*> getList();
	
};

class Drawer {
public:
	Drawer(ObjectPool* pool);
	void draw(RenderWindow* window, ObjectPool* pool);
	
};


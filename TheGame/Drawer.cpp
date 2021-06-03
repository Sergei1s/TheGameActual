#include "Drawer.h"


void ObjectPool::Add(DrawableObj* obj)
{
	pool.push_back(obj);
	
}

void ObjectPool::Remove(DrawableObj* obj)
{
	pool.remove(obj);
}

auto ObjectPool::begin()
{
	return pool.begin();
}

auto ObjectPool::end()
{
	return pool.end();
}
//DrawableObj* ObjectPool::end()
//{
//	return *pool.end();
//}


int ObjectPool::GetSize()
{
	return pool.size();
}

std::list<DrawableObj*> ObjectPool:: getList()
{
	return pool;
};

void Drawer::draw(RenderWindow* window, ObjectPool* pool)
{
	//рисую все обьекты сразу
	//нужно обратится к обьекту списка, у этого обьекта обратится к его спрайту и достать его
	// рисуем окном обьект из ObjectPool. Т.к там лежат DrawableObj, то у них есть спрайты, значит нужно их достать и нарисоватью
	
	for (auto iter = (*pool).begin(); iter != (*pool).end();iter++)
	{
		window->draw((*iter)->sprite);
	}
	
}


Drawer::Drawer(ObjectPool* pool)
{
	
};

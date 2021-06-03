
#include <SFML/Graphics.hpp>
#include "Bus.h"
#include "Drawer.h"
#include "ColliderObject.h"
#include "Player.h"
#include "Fueler.h"
#include "Obstacle.h"
#include "BackGroundObj.h"

using namespace sf;


int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(1280, 800), "TheGame!");

	ObjectPool* pool = new ObjectPool();
	Drawer* drawer = new Drawer(pool);
	Fueler* fueler = new Fueler();
	Obstacle* obstacle = new Obstacle();
	BackgroundObject* backgroundObj = new BackgroundObject();
	Physics* physics = new Physics(pool);
	pool->Add(backgroundObj);
	pool->Add(fueler);
	pool->Add(obstacle);
	Player* player = new Player(pool);
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;

		while (window.pollEvent(event))
		{
			
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();

			if (event.type == Event::KeyPressed)
			{
				if (event.key.code == Keyboard::Up)
				{
					std::cout << "w";
					player->getCurrentBus()->MoveUp();
				}

				if (event.key.code == Keyboard::Down)
				{
					std::cout << "D";
					player->getCurrentBus()->MoveDown();
				}

				if (event.key.code == Keyboard::Left)
				{
					player->getCurrentBus()->MoveBack();
				}

				if (event.key.code == Keyboard::Right)
				{
					player->getCurrentBus()->MoveForward();
				}

				if (event.key.code == Keyboard::Num1)
				{
					player->ChangeBus(1);
				}

				if (event.key.code == Keyboard::Num2)
				{
					player->ChangeBus(2);
				}
			}

		}
		
		physics->update(pool);
		window.clear();
		//
		//// Отрисовка окна	
		(*drawer).draw(&window,pool);
		window.display();
	}

	return 0;
}
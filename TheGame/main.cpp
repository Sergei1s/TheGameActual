
#include <SFML/Graphics.hpp>
#include "Bus.h"
#include "Point.h"
#include "Drawer.h"
#include "ColliderObject.h"
#include "Player.h"
#include "Fueler.h"
#include "Obstacle.h"
#include "BackGroundObj.h"

using namespace sf;

/* TODO
* 0) посмотреть циклы в физикс
1) чекнуть работу коллайдеров*/

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(1280, 800), "TheGame!");

	Texture texture;

	Point spawnPoint;
	spawnPoint.SetX(10);
	spawnPoint.SetY(10);

	ObjectPool* pool = new ObjectPool();
	//Bus* bus = new Bus;
	////bus->sprite.getGlobalBounds().intersects
	//(*pool).Add(bus);
	
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

		//Point IterablePos = new Point(10,10);
		Point IterablePos(100, 100);

		
		//window.draw(bus->getSprite());

		while (window.pollEvent(event))
		{
			//window.draw(bus.getSprite());
			//window.draw(bus1Sprite);
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();

			if (event.type == Event::KeyPressed)
			{
				if (event.key.code == Keyboard::Up)
				{
					cout << "w";
					player->getCurrentBus()->MoveUp();
					//bus->MoveUp();
					
				}

				if (event.key.code == Keyboard::Down)
				{
					cout << "D";
					player->getCurrentBus()->MoveDown();
					//bus->MoveDown();
				}

				if (event.key.code == Keyboard::Left)
				{
					//bus->MoveBack();
					player->getCurrentBus()->MoveBack();
				}

				if (event.key.code == Keyboard::Right)
				{
					//bus->MoveForward();
					player->getCurrentBus()->MoveForward();
				}

				if (event.key.code == Keyboard::Num1)
				{
					//bus->MoveForward();
					player->ChangeBus(1);
				}

				if (event.key.code == Keyboard::Num2)
				{
					//bus->MoveForward();
					player->ChangeBus(2);
				}
			}

		}
		//window.clear(Color(250, 220, 100, 0));
		//
		//CircleShape wheel(50.f);
		//wheel.setFillColor(Color(0, 0, 0));
		//wheel.move(15,15);
		//window.draw(wheel);

		//CircleShape busBody(65.f, 4);
		////RectangleShape busBody();
		//busBody.setPosition(600, 400);
		//busBody.setFillColor(Color::Red);
		//busBody.setRotation(45);
		//window.draw(busBody);

		/*ConvexShape busBody;
		busBody.setPointCount*/

		 
		
		physics->update(pool);
		window.clear();
		//
		//// Отрисовка окна	
		(*drawer).draw(&window,pool);
		//window.draw(bus->getSprite());
		window.display();
	}

	return 0;
}
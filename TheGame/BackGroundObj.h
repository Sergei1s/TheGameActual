#pragma once
#include "DrawableObj.h"

class BackgroundObject :public DrawableObj
{
public:
	BackgroundObject();
	~BackgroundObject();

	void OnCollision(ICollider* obj) override{};
private:
	typedef struct Position
	{
		int x, y;
	};
	Position pos;
	std::string BackgroundTexturePath = "D:\\University\\OOP\\The Game\\BackGround.png";
};


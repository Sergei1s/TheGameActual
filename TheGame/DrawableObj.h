#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <SFML\Graphics\Texture.hpp>
#include <SFML\System\String.hpp>
#include <SFML\Graphics\Sprite.hpp>
#include <SFML\Graphics\Shader.hpp>
#include "ICollider.h"
using namespace sf;

class DrawableObj : public ICollider//DrawableObj
{
protected:
	
public:
	sf::Texture texture;
	std::string textureFolderPath;
	std::string textureTitle;
	std::string texturePath;
	Vector2f spriteScale = Vector2f(0.5, 0.5);
	sf::Sprite sprite;
	//virtual void setSprite() = 0;

	struct SpritePosition
	{
		int x, y;
	};
	SpritePosition spritePosition;
	virtual void setSprite()
	{
		//texturePath = textureFolderPath + textureTitle;
		texture.loadFromFile(texturePath);
		sprite.setTexture(texture);
		sprite.setScale(spriteScale);
		sprite.setPosition(Vector2f(spritePosition.x, spritePosition.y));
	}

	virtual void setPath(String path) 
	{
		texturePath = path;
	}
};
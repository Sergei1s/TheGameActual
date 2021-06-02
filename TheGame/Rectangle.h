#pragma once
#include <iostream>
#include <conio.h>

class Rectangle
{
private:
    float height, width;
    struct Position
    {
        int x1,x2, y1,y2;
    };
    Position pos;
public:
   // Rectangle(int _x1, int _y1, float height, float width);
    Rectangle(int _x1, int _y1, float height, float width)
    {
        pos.x1 = _x1;
        pos.x2 = _x1 + width;
        pos.y1 = _y1;
        pos.y2 = _y1 - height;

        set(height, width);
    }
    void set(float _height, float _width)
    {
        height = _height;
        width = _width;
    }
    float getHigh() { return height; }
    float getWidth() { return width; }
    float GetPerimeter() { return (height + width) * 2 ; }
    float GetSquare() { return height * width; }
    float getX1() { return pos.x1; }
    float getX2() { return pos.x2; }
    float getY1() { return pos.y1; }
    float getY2() { return pos.y2; }
};


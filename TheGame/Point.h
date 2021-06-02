#pragma once
class Point
{
private:
	int x;
	int y;
public:
	Point() {}
	Point(int _x, int _y) {
		x = _x;
		y = _y;
	}

	int GetX() { return x; }
	void SetX(int _x) { x = _x; }
	int ChangeOnX(int dx) { x += dx; }

	int GetY() { return y; }
	void SetY(int _y) { y = _y; }
	int ChangeOnY(int dy) { y += dy; }

	Point operator+(Point p)
	{
		return Point(this->x + p.x, this->y + p.y);
	}
};


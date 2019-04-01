#pragma once
class Obj
{
public:
	void move();

	int x, y;
	int vx=5, vy=5;
	int width = 50;
	int height = 50;
	int gravity;
};

class rect
{
public:
	void props(int x,int y,int width,int height);

	int x,y;
	int width = 120,height=22;
};
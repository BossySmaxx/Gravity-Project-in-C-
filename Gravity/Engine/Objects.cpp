#include "Objects.h"
#include "Graphics.h"
void Obj::move()
{
	if (y<=0+100)
	{
		y = 0 + 100;
	}
	if (y>=Graphics::ScreenHeight-100)
	{
		y = Graphics::ScreenHeight - 100;
	}
}

void rect::props(int playerX,int playerY,int playerWdith,int playerHeight)
{
	const int playerBottom = playerY + playerHeight;
	const int playerRight = playerX + playerWdith;
	const int rectRight = x + width;
	const int rectBottom = y + height;

	if (playerRight>=x && playerX<=rectRight && playerY<=rectBottom && playerBottom>=y)
	{
		playerY = y;
	}
}

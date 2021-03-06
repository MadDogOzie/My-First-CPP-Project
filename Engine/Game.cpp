/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
	//Define Location of Crosshair

	int x = 400;
	int y = 300;

	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		x = x + 100;
	}

	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		x = x - 100;
	}

	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		y = y + 100;
	}

	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		y = y - 100;
	}

	//Define Colour of Crosshair

	int R = 255;
	int G = 255;
	int B = 255;

	if (wnd.kbd.KeyIsPressed(VK_SPACE))
		{
			G = G - 255;
			B = B - 255;
		}

	//Define Shape of Crosshair

	if (wnd.kbd.KeyIsPressed(VK_SHIFT))
		{
			gfx.PutPixel(x - 5, y - 5, R, G, B);
			gfx.PutPixel(x - 5, y - 4, R, G, B);
			gfx.PutPixel(x - 5, y - 3, R, G, B);
			gfx.PutPixel(x - 4, y - 5, R, G, B);
			gfx.PutPixel(x - 3, y - 5, R, G, B);
			gfx.PutPixel(x - 5, y + 5, R, G, B);
			gfx.PutPixel(x - 5, y + 4, R, G, B);
			gfx.PutPixel(x - 5, y + 3, R, G, B);
			gfx.PutPixel(x - 4, y + 5, R, G, B);
			gfx.PutPixel(x - 3, y + 5, R, G, B);
			gfx.PutPixel(x + 5, y - 5, R, G, B);
			gfx.PutPixel(x + 5, y - 4, R, G, B);
			gfx.PutPixel(x + 5, y - 3, R, G, B);
			gfx.PutPixel(x + 4, y - 5, R, G, B);
			gfx.PutPixel(x + 3, y - 5, R, G, B);
			gfx.PutPixel(x + 5, y + 5, R, G, B);
			gfx.PutPixel(x + 5, y + 4, R, G, B);
			gfx.PutPixel(x + 5, y + 3, R, G, B);
			gfx.PutPixel(x + 4, y + 5, R, G, B);
			gfx.PutPixel(x + 3, y + 5, R, G, B);
		}
	else
		{
			gfx.PutPixel(x - 5, y, R, G, B);
			gfx.PutPixel(x - 4, y, R, G, B);
			gfx.PutPixel(x - 3, y, R, G, B);
			gfx.PutPixel(x + 3, y, R, G, B);
			gfx.PutPixel(x + 4, y, R, G, B);
			gfx.PutPixel(x + 5, y, R, G, B);
			gfx.PutPixel(x, y - 5, R, G, B);
			gfx.PutPixel(x, y - 4, R, G, B);
			gfx.PutPixel(x, y - 3, R, G, B);
			gfx.PutPixel(x, y + 3, R, G, B);
			gfx.PutPixel(x, y + 4, R, G, B);
			gfx.PutPixel(x, y + 5, R, G, B);
		}
}

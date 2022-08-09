#include "Level.h"
#include <iostream>
#include <thread>
#include <chrono>
//#include "Player.h"
#include <Windows.h>
#include <conio.h>
#include "Player.cpp"
//#include "Projectile.cpp"

Level::Level()
{
	DisplayMap();
}

void Level::DisplayMap()
{
	Player player;
	int p_X;
	int p_Y;
	char c = 'x';

	while (MapActive)
	{
	
		if (_kbhit())
		{
			player.GetAction();
		}

		p_X = player.GetPlayerX();
		p_Y = player.GetPlayerY();
		
		for (int y = 0; y < 12; y++)
		{
			for (int x = 0; x < 13; x++)
			{
				if (x != p_X || y != p_Y)
				{
					std::cout << map[y][x];
				}
				else
				{
					std::cout << 'X';
				}

			}
			std::cout << std::endl;
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(50));
		system("cls");
	}
}
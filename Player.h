#include <stdlib.h>
#include <conio.h>

#pragma once
class Player
{
public:

	int x = 5;
	int y = 10;

	int GetPlayerX() { return x; };
	int GetPlayerY() { return y; };

	void MoveLeft() { if (x > 1) { x--; } };
	void MoveRight() { if (x < 11) { x++; } };
	void GetAction() {
		switch (_getch())
		{
		case 'd':
			MoveRight();
			break;
		case 'a':
			MoveLeft();
			break;
		case ' ':
			//Fire(Player::x, Player::y);
			break;
		}
	};
	//void Fire(int x, int y);

};


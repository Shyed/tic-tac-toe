//Game Program for TicTac Toe
#pragma once
#include <iostream>
#include<list>
#include <cstdlib>
#include<string>
#include <ctime>
#include <windows.h>
#include "Player.h"
#include "SystemMessages.h"
using namespace std;

typedef struct //Assigning a new symbolic name for existing name in C program
{
	int* row; // pointer variable
}WinList;


class Game
{
//declare private variables that the program  will use
private:
	char board[9]; 
	int emptyIndex[9];
	int gameOn, againstComputer;
	int emptyCount;
	int counter = 0;
	WinList winlist[8];

//declaring methods of the program
public:
	void displayBoard();
	void computerInput();
	void playerInput(Player& player);
	void checkWin(Player& p1, Player& p2);
	void play(Player& p1, Player& p2);
	void displayScore(Player& p1, Player& p2);
	void initiate();
	void onePlayerGame();
	void twoPlayerGame();

	Game() : emptyCount{ 0 }, gameOn{ 1 }, againstComputer{ 0 } // Winning Combinations
	{
		initiate();
		winlist[0].row = new int[3]{ 0,1,2 };
		winlist[1].row = new int[3]{ 3,4,5 };
		winlist[2].row = new int[3]{ 6,7,8 };
		winlist[3].row = new int[3]{ 0,3,6 };
		winlist[4].row = new int[3]{ 1,4,7 };
		winlist[5].row = new int[3]{ 2,5,8 };
		winlist[6].row = new int[3]{ 0,4,8 };
		winlist[7].row = new int[3]{ 2,4,6 };
	}
};


//Contains the set messages that will be displayed on the screen for this application
#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class SystemMessages
{
//Declaring private method used by the program
private:
	void wait(int seconds);

//Declaring methods of the program
public:
	void Welcome();
	void DisplayMenu();
	void Error();
	void Exit();
	void About();
	void ComputerWon();
	void Player1Won();
	void Player2Won();
	void NoWinner();
	void vsAI();
	void vsPlayer2();
	void Occupied();
};


/*
	Name: Sheila Demonteverde
	Course: MAC 125
	Date: 11/03/2019
	Purpose: Tic Tac Toe Game Program with multiple player
	and the option to play against a computer
*/

#include <iostream>
#include "SystemMessages.h"
#include "ExecuteMenu.h"

using namespace std;

int main()
{
	//Displays the Welcome message only once
	static bool initialized;
	if (!initialized)
	{
		initialized = true;
		SystemMessages Hello;
		Hello.Welcome();
	}

	//Displays the menu and allows user to enter selection from the values of 1-4
	//The menu will continue to be displayed (loop) until the user selects exit from the menu
	char command;
	do
	{
		ExecuteMenu menu;
		ExecuteMenu ex;
		command = menu.MainMenu();
		ex.Execute(command);
	} while ((command) != 4);
}




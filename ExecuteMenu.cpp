#include "ExecuteMenu.h"

char ExecuteMenu::MainMenu()
{
	//Display the Main Menu
	int choice = 0;
	SystemMessages Display; 
	Display.DisplayMenu(); 
	cin >> choice; //Read user input
	system("cls"); //Clear the screen
	return choice;
}

//MENU EXECUSION
void ExecuteMenu::Execute(const char ch)
{
	//Selection Statements for Main Menu
	switch (ch)
	{
	case 1: // Inititalize game where user will play against the computer
	{
		Game* game = new Game;
		game->initiate();
		game->onePlayerGame();
	}
	break;
	
	case 2: // Inititalize game where user will play against another player
	{
		Game* game = new Game;
		game->initiate();
		game->twoPlayerGame();
	}
	break;
	
	case 3: // Display game information
		SystemMessages A;
		A.About();
		break;

	case 4: // Display an exit message before terminating the program
		SystemMessages E;
		E.Exit();
		break;

	default: // Display error message if user selection is invalid
		SystemMessages Er;
		Er.Error();
		break;
	}
	system("cls");
}


//System Messages to be displayed on the screen

#include "SystemMessages.h"

void SystemMessages::Welcome()
{
	cout << "\n\n"
		"\n\t\t|========================================================|"
		"\n\t\t|                                                        |"
		"\n\t\t|***** * *****  ***** ***** *****  ***** ***** ***** **  |"
		"\n\t\t|  *   * *        *   *   * *        *   *   * *     **  |"
		"\n\t\t|  *   * *        *   ***** *        *   *   * ****  **  |"
		"\n\t\t|  *   * *        *   *   * *        *   *   * *         |"
		"\n\t\t|  *   * *****    *   *   * *****    *   ***** ***** **  |"
		"\n\t\t|                                                        |"
		"\n\t\t|========================================================|" << endl;
	wait(2); //PAUSE THE SCREEN FOR 2 SECONDS
	system("CLS"); //CLOSE SCREEN AND OPEN NEXT SCREEN
}

void SystemMessages::wait(int seconds)
{
	clock_t endwait;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endwait) {}
}

void SystemMessages::DisplayMenu()
{
	cout << "\n\t\t|=======================|"
		"\n\t\t|                       |"
		"\n\t\t|         MENU          |"
		"\n\t\t|                       |"
		"\n\t\t|=======================|"
		"\n\t\t|                       |"
		"\n\t\t| [1] 1 Player game     |"
		"\n\t\t|                       |"
		"\n\t\t| [2] 2 Player game     |"
		"\n\t\t|                       |"
		"\n\t\t| [3] About             |"
		"\n\t\t|                       |"
		"\n\t\t| [4] Exit              |"
		"\n\t\t|                       |"
		"\n\t\t|=======================|";
	cout << "\n\t\t Select an option: ";

}

void SystemMessages::Error()
{
	cout << "\a"
		"\n\t\t|===================|"
		"\n\t\t|                   |"
		"\n\t\t|  Invalid Option!  |"
		"\n\t\t|                   |"
		"\n\t\t| Please try again  |"
		"\n\t\t|                   |"
		"\n\t\t|===================|" << endl;
	wait(2);
	system("cls");
}

void SystemMessages::Exit()
{
	cout << "\n\n"
		"\n\t\t|==========================================================|"
		"\n\t\t|                                                          |"
		"\n\t\t|***** *   * ***** **    * *    *  *     * ***** *   * **  |"
		"\n\t\t|  *   *   * *   * * *   * *  *     *   *  *   * *   * **  |"
		"\n\t\t|  *   ***** ***** *  *  * **         *    *   * *   * **  |"
		"\n\t\t|  *   *   * *   * *   * * *  *       *    *   * *   *     |"
		"\n\t\t|  *   *   * *   * *    ** *   *      *    ***** ***** **  |"
		"\n\t\t|                                                          |"
		"\n\t\t|==========================================================|" << endl;
	wait(2);
	system("cls");
	return;
}

void SystemMessages::About()
{
	cout << "\n\t\t|===================================================|"
		"\n\t\t|                    ABOUT                          |"
		"\n\t\t|===================================================|"
		"\n\t\t| Tic Tac Toe is a game where two player can take   |"
		"\n\t\t| alternate turns to complete a row, column, or     |"
		"\n\t\t| diagonal with either three O's or X's.            |"
		"\n\t\t|                                                   |"
		"\n\t\t|===================================================|"
		"\n\t\t|              RULES OF THE GAME                    |"
		"\n\t\t|===================================================|"
		"\n\t\t| [1] The game is played on a grid with 3x3 squares |"
		"\n\t\t| [2] You are X and your opponent is O. Each player |"
		"\n\t\t|     takes turns putting their mark in the empty   |"
		"\n\t\t|     squares.                                      |"
		"\n\t\t| [3] The first player to get 3 marks in a row wins!|"
		"\n\t\t|===================================================|" << endl;
	cout << endl;
	system("pause");
}

void SystemMessages::ComputerWon()
{
	cout << "\n\t\t|====================================|"
		"\n\t\t|           Computer WON             |"
		"\n\t\t|====================================|" << endl;
}

void SystemMessages::Player1Won()
{
	cout << "\n\t\t|====================================|"
		"\n\t\t|            Player 1 WON            |"
		"\n\t\t|====================================|" << endl;
}

void SystemMessages::Player2Won()
{
	cout << "\n\t\t|====================================|"
			"\n\t\t|           Player 2 WON             |"
			"\n\t\t|====================================|" << endl;
}

void SystemMessages::NoWinner()
{
	cout << "\n\t\t|====================================|"
			"\n\t\t|           No Winner                |"
			"\n\t\t|====================================|" << endl;
}

void SystemMessages::vsAI()
{
	cout << "\n\t\t|====================================|"
		"\n\t\t|   Player I: X   |   Computer: O    |"
		"\n\t\t|====================================|" << endl;
}

void SystemMessages::vsPlayer2()
{
	cout << "\n\t\t|====================================|"
		"\n\t\t|   Player I: X   |   Player II: O   |"
		"\n\t\t|====================================|" << endl;
}

void SystemMessages::Occupied()
{
	cout << "\n\t\t|====================================|"
		"\n\t\t|      Possition not Empty           |"
		"\n\t\t|====================================|" << endl;
}
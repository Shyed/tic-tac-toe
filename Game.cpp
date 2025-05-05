#include "Game.h"

//Display gameboard and numbers that the player can select to fill on the board
void Game::displayBoard()
{
	cout << "\n\n\t\t=====================================\n";
	for (int i = 0; i < 9; i++)
		std::cout << "\t\t| " << board[i] << " |" << (i % 3 == 2 ? '\n' : ' ');
	cout << "\t\t=====================================\n\n";
}

//The computer selects random positions on the board on sections that are not occupied
void Game::computerInput()
{
	int pos;
	pos = rand() % 10;

	if (emptyIndex[pos] == 1)
	{
		if (emptyCount < 0)
			return;
			computerInput();
	}
	else
	{
		cout << "Computer choose: " << pos + 1 << endl;
		emptyIndex[pos] = 1;
		emptyCount -= 1;
		board[pos] = 'O';
		system("cls");
	}
}

//Allows the player to select preferred position on the board. Cheks if a position is empty or occupied
void Game::playerInput(Player& player)
{
	int pos;

	cout << endl;
	cout << "\t" << player.getName() << " Turn: ";
	cout << "\t Enter the position ";
	cin >> pos;	
	pos -= 1;	

	//If the selected position is not empty display a message to inform the user that space is occupied
	if (emptyIndex[pos] == 1) {
		SystemMessages occupied;
		occupied.Occupied();
		playerInput(player);
	}
	else 
	{
		emptyIndex[pos] = 1;
		emptyCount -= 1;
		player.getName().compare("Player I") == 0 ? board[pos] = 'X' : board[pos] = 'O';
	}
	system("cls");
}

//Analyzes the game winner and provides a confirmation depending on the type of opponent (player 2 or computer)
void Game::checkWin(Player& p1, Player& p2)
{
	int i, j, k;
	bool flag = false;
	char first_symbol;

	for (i = 0; i < 8; i++)
	{
		first_symbol = board[winlist[i].row[0]];

		if ((first_symbol != 'X') && (first_symbol != 'O')) {
			flag = false;
			continue;
		}
		flag = true;
		for (j = 0; j < 3; j++) {
			if (first_symbol != board[winlist[i].row[j]]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			gameOn = 0;
			//Player 1 is the winner
			if (first_symbol == 'X') {
				system("cls");
				SystemMessages PL1;
				PL1.Player1Won();
				p1.won();
			}
			else//Player 1 is the winner
			{
				system("cls");
				SystemMessages PL2;
				PL2.Player2Won();
				p2.won();

				//Computer is the winner
				if (againstComputer) {
					system("cls");
					SystemMessages comp; 
					comp.ComputerWon();

				}
				else //Player 2 is the winner
				{
					SystemMessages PL2;
					PL2.Player2Won();
				}
			}
			//Display the score
			displayScore(p1, p2);
			break;
		}
	}
}

//Initiates game play sequence and asks user if they would like to play again
void Game::play(Player& p1, Player& p2) 
{
	char rematch = '\0';
	int hand = 0;
	gameOn = 1;
	displayBoard();
	while ((emptyCount > 0) && (gameOn != 0)) {

		if (againstComputer)
			hand == 1 ? computerInput() : playerInput(p2);
		else
			hand == 1 ? playerInput(p1) : playerInput(p2);
		hand = !hand;
		displayBoard();
		checkWin(p1, p2);
	}
	//There are no winners
	if (emptyCount <= 0) {
		system("cls");
		SystemMessages tie;
		tie.NoWinner();
	}
	//Ask the user to play again
	cout << endl;
	cout << "Rematch Y/N: ";
	cin >> rematch;
	if ((rematch == 'Y') || (rematch == 'y')) {
		initiate();
		play(p1, p2);
	}

}

//Display final score depending on opponent
void Game::displayScore(Player& p1, Player& p2) {
	cout << endl;
	cout << "\t SCORE: \t";
	if (againstComputer)
		cout << " Player I: " << p1.getScore() << " \t Computer: " << p2.getScore() << endl;
	else
		cout << " Player I: " << p1.getScore() << " \t Player II: " << p2.getScore() << endl;
}

//Starts the game with a clear board
void Game::initiate()
{
	gameOn = 1;
	emptyCount = 0;
	srand(time(0));

	for (size_t i = 0; i < 10; i++)
	{
		emptyIndex[i] = 0;
		board[i] = (i + 1) + '0';
		emptyCount++;
	}
	emptyCount--;
}

//Creating player vs computer
void Game::onePlayerGame() 
{	
	Player p("Player I");
	Player c("Computer");
	SystemMessages AI; 
	AI.vsAI();
	againstComputer = 1;
	play(c, p);

}
//Creating player vs player
void Game::twoPlayerGame() 
{
	Player p("Player I");
	Player c("Player II");
	SystemMessages PLY2;
	PLY2.vsPlayer2();
	againstComputer = 0;
	play(c, p);
}




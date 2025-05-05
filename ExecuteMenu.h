//Displays the main menu, allows the user to input selection, and executes user selection
#pragma once
#include "SystemMessages.h"
#include "Player.h"
#include "Game.h"

class ExecuteMenu
{
public:
	char MainMenu(); // Display Main Menu
	void Execute(const char ch); // Execute User Selection
};


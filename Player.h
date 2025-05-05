//Displaying player information
#pragma once
#include <iostream>
#include<list>
#include<string>

using namespace std;

class Player
{
//Declare variables that the program will use
private:
	string name;
	int score;

//Declaring methods of the program
public:
	Player() :Player{ "" } {}
	Player(string n) :score{ 0 }, name{ n }{}
	void won();
	int getScore();
	string getName();
};



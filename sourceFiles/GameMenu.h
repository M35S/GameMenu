#pragma once

#include "GameData.h"
#include <iostream>

class GameMenu
{
public:
	// Constructor
	GameMenu();

	// Destructor
	~GameMenu();

	// Variables
	static const int EASY = 1;		// Difficulty based variables.
	static const int MEDIUM = 2;
	static const int HARD = 3;

	// Methods
	void startMenu();				// Main Menu switch case

private:
	// Variables / Instance Members
	MenuChoices menuChoice;			// Instance of enum MenuChoices.
	bool finished = false;			// Loop condition for startMenu().

	// Functions
	MenuChoices menu();				// Function of enum MenuChoices.
	void play();					// Function for PLAY option.
	void setDifficulty();			// Function for SET_DIFFICULTY option.
};
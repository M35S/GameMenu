#include "GameMenu.h"

// Constructor
GameMenu::GameMenu()
{
}

// Destructor
GameMenu::~GameMenu()
{
}

// Playing Game mode - This is where you would insert your core game code!
void GameMenu::play()
{
	bool playing = true;
	int choice = 0;
	std::cout << "\nInitialize Players and Monsters..." << std::endl;
	while (playing)
	{
		// Display output functions for monsters and player here.
		std::cout << "Playing game now..." << std::endl;
		std::cout << "Display Monsters..." << std::endl;
		std::cout << "Display Player..." << std::endl;
		std::cout << "Enter 1 to carry on or 2 to exit." << std::endl;
		std::cin >> choice;
		std::cout << std::endl;

		// If statement below to break from this loop.
		if (choice == 1)
		{
			std::cout << "Carry on playing..." << std::endl;
		}
		else
		{
			playing = false;
			break;
		}
	}
}

// The Main Menu
void GameMenu::startMenu()
{
	while (!finished)
	{
		menuChoice = menu();	// enum MenuChoices instance = function.
		switch (menuChoice)
		{
		case PLAY: play();
			break;

		case SET_DIFFICULTY: setDifficulty();
			break;

		case QUIT: finished = true;
			break;
		}
	}
}

// Main Menu screen
MenuChoices GameMenu::menu()
{
	int choice = -1;
	do
	{
		std::cout << "Enter one of the numbers below for a menu option:\n";
		std::cout << "1: Play\n2: Set Difficulty\n3: Quit\n";
		std::cin >> choice;
	} while (choice < MenuChoices::PLAY || choice > MenuChoices::QUIT);
	return (MenuChoices)choice;
}

// Set Difficulty Menu
void GameMenu::setDifficulty()
{
	int choice = 0;
	do
	{
		std::cout << "Enter one of the numbers below for a difficulty option:\n";
		std::cout << "1: Easy\n2: Medium\n3: Hard\n";
		std::cin >> choice;
	} while (choice < EASY || choice > HARD);

	switch (choice)
	{
	case EASY: std::cout << "You selected Easy mode.\n" << std::endl;
		break;
	case MEDIUM: std::cout << "You selected Medium mode.\n" << std::endl;
		break;
	case HARD: std::cout << "You selected Hard mode.\n" << std::endl;
		break;
	}
}
#include "Menus.h"
#include "ConsoleUtils.h"
#include "Game.h"

using namespace std;

int main()
{
	bool exit = false;
	Game game;

	while (!exit)
	{
		MainMenuState mainMenuState = Menus::mainMenu();

		switch (mainMenuState)
		{

		case MainMenuState::SetNames:
			
			break;

		case MainMenuState::Start:

			clear_screen();
			game.start();
			break;

		case MainMenuState::ReversedGame:
			//ReversedGame
			break;

		case MainMenuState::ResetScore:
			//ResetScore
			break;

		case MainMenuState::Exit:
			clear_screen();
			exit = true;
			break;
		default:
			break;

		}

	}
	return 0;
}

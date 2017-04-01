#include "Menus.h"
#include "ConsoleUtils.h"
#include "PrintUtils.h"
#include "conio.h"

MainMenuState Menus::mainMenu()
{
	char input;

	clear_screen();
	PrintUtils::printInitialMenu();

	input = getch();

	switch (input)
	{
	// Menu opthins
	case '1':
		return MainMenuState::SetNames;

	case '2':
		return MainMenuState::Start;

	case '3':
		return MainMenuState::ReversedGame;

	case '4':
		return MainMenuState::ResetScore;
		
	case '9':
		return MainMenuState::Exit;
	default:
		return MainMenuState::Exit; //??
	}


}

SeconderyMenuState Menus::seconderyMenu()
{
	char input;

	PrintUtils::printSecondaryMenu();

	input = getch();

	while (true)
	{
		switch (input)
		{
			// Start Simulation
		case '1':
			return SeconderyMenuState::Continue;

			// Open Instrucation
		case '2':
			return SeconderyMenuState::Restart;

		case '8':
			return SeconderyMenuState::MainMenu;

			// Exit
		case '9':
			return SeconderyMenuState::Exit;

		default:
			input = getch();
		}
	}
}
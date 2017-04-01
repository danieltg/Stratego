#ifndef _MENUS_H_
#define _MENUS_H_

enum class MainMenuState { SetNames, Start, ReversedGame, ResetScore, Exit };
enum class SeconderyMenuState { Continue, Restart, MainMenu, Exit };

class Menus
{

public:
	static MainMenuState mainMenu();

	static SeconderyMenuState seconderyMenu();

};

#endif
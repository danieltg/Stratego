#include "PrintUtils.h"
#include <iostream>

using  namespace std;

void PrintUtils::printInitialMenu()
{
	cout << "1- Set Names" << endl;
	cout << "2- Start Game" << endl;
	cout << "3- Start Reversed Game" << endl;
	cout << "4- Reset Score" << endl;
	cout << "9- Exit" << endl;
}

void PrintUtils::printSecondaryMenu()
{
	cout << "1- Continue " << "2- Restart " << "8- Go to main menu " << " 9- Exit " << endl;
}
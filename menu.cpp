#include <iostream>
#include "menu.h"


//Graphical Menu for user. Will return selection.
int menu_n::menu()
{
	int selection = -1;
	std::cout << "1) Enter Cashier Terminal Application\n";
	std::cout << "2) Enter Item Creation Application\n";
	std::cout << "3) Enter Grocery Information Services\n";
	std::cout << "4) Enter Warehouse Information Services\n";
	std::cout << "0) Exit Program";
	std::cout << "\nSelection: ";
	std::cin >> selection;
	
	//Validation for this menu//
	while (selection != 1 && selection != 2 && selection != 3 && selection != 4 && selection != 0 || std::cin.fail()){
		std::cout << "Invalid Selection!\n";
		std::cin.clear(); 
		std::cin.ignore(100, '\n');
		std::cin >> selection;
	}

	return selection;


}

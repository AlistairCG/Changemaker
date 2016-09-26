#include <iostream>
#include "change.h"
#include "menu.h"

using namespace std;

//Alistair Godwin
//Sep 25th 2016
//Changemaker App
//agodwin@myseneca.ca
//godwinalistair@hotmail.com




//Todo setup menu and file read for a denom?
//Program makes change and shows most efficient set to give back to user(if any)
//Version 0.1 Prototype.
int main() {

	int input = 0;
	cout << "Change Maker  v0.1 \n";
	cout << "================\n";
	input = menu_n::menu();
	while (input != 1 && input != 0) {
		cout << "**Sorry this selection is not yet available!**\n";
		input = menu_n::menu();
	}
	if(input == 1) change_n::additems();


	system("Pause");
	return 0;

}
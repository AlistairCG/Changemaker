#include <iostream>
#include <math.h>
#include <iomanip>

#include "change.h"

using namespace std;

//Get a validated int from user and find each items price//
void change_n::additems()
{
	int items = 0;
	double totalcost = 0.00;
	double itemcost = 0.00;
	cout << "\nHow many items?\n";
	cin >> items;
	cin.ignore(100, '\n');
	//===========Validation=================//
	while ( items <= 0 || cin.fail() ) {
		cout << "Enter an positive int. Try Again: How many items?\n";
		cin.clear();
		cin.ignore(100, '\n');
		cin >> items;
	}
	//=======================================//
	for (int i = 0; i < items; i++) {
		cout << "\nPrice of item " << (i + 1) << ": ";
		cin >> itemcost;
		totalcost += itemcost;
		
	}
	
	makechange(getmoney(totalcost));

	

}

//Get taxable total(in canada this is 13% of total) and get validated cash given
double change_n::getmoney(double items)
{
	double input = 0.00;
	cout << "\n\nTOTAL: $";

	items *= 1.13;
	cout << setprecision(3)<< items;
	cout << "\nCash Given: $";
	//=========Validation============//
	do {

		cin >> input;
		if (input < items || cin.fail()) {
			cout << "\nNot enough money! Cash given: ";
			cin.clear();
			cin.ignore(100, '\n');
		
		}
	} while (input < items || cin.fail() );
	//================================//


		return input - items;




}
//Make the change, go from highest denomination to lowest until amount is at nearest (denom >= 0), show cashier most efficient cash flow.
//Note: Plan to replace function with an Object oriented one for X demoninations regardless of currency.
void change_n::makechange(double cost)
{
	int hund = 0, 
		fift = 0 , twen = 0 , ten = 0 , five = 0 , C_two = 0 , C_one = 0 , C_twfv = 0 , C_dime = 0 , C_nick = 0 ;

	cout << "\nChange Given: " << setprecision(3) <<  cost;
	while (cost >= 100.00)  { hund++;    cost -= 100.00;}
	while (cost >= 50.00 )  { fift++;    cost -= 50.00; }
	while (cost >= 20.00 )  { twen++;    cost -= 20.00; }
	while (cost >= 10.00 )  { ten++;     cost -= 10.00; }
	while (cost >= 5.00  )  { five++;    cost -= 5.00;  }
	while (cost >= 2.00  )  { C_two++;   cost -= 2.00;  }
	while (cost >= 1.00  )  { C_one++;   cost -= 2.00;  }
	while (cost >= 0.25  )  { C_twfv++;  cost -= 0.25;  }
	while (cost >= 0.10  )  { C_dime++;  cost -= 0.10;  }
	while (cost >= 0.05  )  { C_nick++;  cost -= 0.05;  }

	//TODO move to new function output( currency name, amount );
	//TODO use enums on this!

	//===========Output==========//
	cout << "Please give Customer the following: \n=========================\n";
	if (hund > 0) cout <<"$100: " << hund << endl;
	if (fift > 0) cout << "$50: " << fift << endl;
	if (twen > 0) cout << "$20: " << twen << endl;
	if (ten > 0) cout <<  "$10: " << ten << endl;
	if (five > 0) cout << "$5: " << five << endl;
	if (C_two > 0) cout << "$2: " << C_two << endl;
	if (C_one > 0) cout << "$1: " << C_one << endl;
	if (C_twfv > 0) cout << "$0.25: " << C_twfv << endl;
	if (C_dime > 0) cout << "$0.10: " << C_dime << endl;
	if (C_nick > 0) cout << "$0.05: " << C_nick << endl;
	//=============================//



}

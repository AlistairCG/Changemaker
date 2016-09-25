# Changemaker Version 0.1
This program will act like a simple cash register. You input X items in, tax them, get cash from the user, and finally make change.

Notably, the program will output the most efficient cash denominations for the user as change(if any).

#TO DO:
Currently the program is very structured; I want to change this to Object oriented shortly along with a large expansion of cababilities.
Over time, I would like this program to act as both the register and the database for items(inc checking for stock and restocking).

0) Make a menu to start the program.
1) Turn the item input process into dynamic object creation of items:
            Object will include:
                                Name
                                Cost
                                Sale Flag
                                Sale Cost
                                Serial Number
           
 
2) Change the entirety of the makechange() function to utilise enums and the new OO methods.
3) Make an inventory of Objects ready made as csv file and make creating new objects as a menu option.

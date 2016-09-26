# Changemaker Version 0.2
This program will act like a simple cash register. You input X items in, tax them, get cash from the user, and finally make change.

Notably, the program will output the most efficient cash denominations for the user as change(if any).

#New in Version 0.2
Added a menu function.
Fixed some awful looking typos and formatted.
Added Validation to several inputs.

#TO DO(See Issues):
Currently the program is very structured; I want to change this to Object oriented shortly along with a large expansion of capabilities.
Over time, I would like this program to act as both the register and the database for items(inc checking for stock and restocking).

1) Turn the item input process into dynamic object creation of items:
            Object will include:
                                Name
                                Cost
                                Sale Flag
                                Sale Cost
                                Serial Number
                                Quantity in stock.
           
 
2) Change the entirety of the makechange() function to utilise enums and the new OO methods.
3) Make an inventory of Objects ready made as csv file and make creating new objects as a menu option.
4) Make A grocery store information service attached as parent to a supply list of "item" objects.
5) Make a warehouse information service for grocery store to query for supplies of item.

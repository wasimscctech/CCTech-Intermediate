Vending Machine
===============

Features
========

Display
-------

The display function will show the available items, a message for insert coins when it is needed and the amount added by the customer.

Accept Coins
------------ 

Using "addCoin()" function the vending machine will accept valid coins (dollars, nickels, dimes, and quarters) and reject invalid ones.  When a
valid coin is inserted the amount of the coin will be added to the current amount and the display will be updated.
When there are no coins inserted, the machine displays INSERT COIN.  Rejected coins are placed in the coin return.

It will ask for two inputs: 
1. number of coins
2. type of coin(dollar, nickel, dime, and quarter)

Select Product
--------------

There are three products: cola for $1.00, chips for $0.50, and candy for $0.65.
selectProduct() function will ask for a code to select the product. 
  

Make Change
-----------

When a product is selected that costs less than the amount of money in the machine, then the remaining amount is placed
in the coin return using returnChange() funcion.


Return Coins
------------

returnCoins() funcion will return the money the customer has placed in the machine and the display shows
INSERT COIN.


Sold Out
--------

availability() validate if the product is present and gives the option to choose different product or return the coin.

When the item selected by the customer is out of stock, the machine displays SOLD OUT.  If the display is checked again,
it will display the amount of money remaining in the machine or INSERT COIN if there is no money in the machine.

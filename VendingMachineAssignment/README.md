Vending Machine
===============

Features
========

Display
-------

Main perpose of display function is to show a message for `INSERT COIN` when it is needed and the `added coin` by the customer.
We have used this to Display either `EXACT CHANGE ONLY` or `INSERT COIN`.
It will also display the `available items` at the start because we can not see which item is present in the vending machine as we can see in real life scenario.


Accept Coins
------------ 

Using `addCoin()` function the vending machine will accept valid coins (dollars, nickels, dimes, and quarters) and reject invalid ones.
When a valid coin is inserted the amount of the coin will be added to the current amount and the display will be updated.
When there are no coins inserted, the machine displays INSERT COIN. 
Rejected coins are placed in the coin return.

It will ask for two inputs:
1. number of coins
2. type of coin(dollar, nickel, dime, and quarter)


Select Product
--------------

There are three products: cola for $1.00, chips for $0.50, and candy for $0.65.
`selectProduct()` function will ask customer for a code to select the product.
1. Cola
2. Chips
3. Candy
0. Return Coins
  

Sufficient coins
----------------

`validateSufficientCoins()` wil validate if the sufficient coin is provided, if the product value is greater than the added coin then it will ask for the remaing coins.
Even after adding the coins for the second time is not enough the machine will ask again. 


Make Change
-----------

When a product is selected that costs less than the amount of money in the machine, then the remaining amount is placed
in the coin return using `returnChange()` funcion.


Return Coins
------------

`returnCoins()` funcion will return the added coins to the customer and update the display with
`INSERT COIN` message.


Sold Out
--------

`productAvailability()` function will validate if the product is present and it gives the option to choose different product or return the coin.

When the item selected by the customer is out of stock, the machine displays `SOLD OUT`.  If the display is checked again,
it will display the amount of `money remaining` in the machine or INSERT COIN if there is no money in the machine.


Makefile
--------

`make clean` to delete object and executable files(i.e .o and .exe).
`make compile` to compile the program. 
`make run` to run the program.


Exact Change Only
-----------------

When the machine is not able to make change. It will display `EXACT CHANGE ONLY` instead of `INSERT COIN`.

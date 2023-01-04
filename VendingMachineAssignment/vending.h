#ifndef VENDING_H
#define VENDING_H 1

#include <iostream>
#include <stdlib.h>
using namespace std;

class VendingMachine
{
    const float Quarter = 0.25, Dime = 0.10, Nickel = 0.05, Dollar = 1;
    const float colaPrice = 1, chipsPrice = 0.5, candyPrice = 0.65;
    string product[3] = {"Cola", "Chips", "Candy"};
    float addedcoin = 0.00;
    string coin;
    int numberofcoins;
    int productcode;
    int inventory[3] = {2, 2, 2};

public:
    void vendingMachine();
    void display();
    void addCoin();
    void selectProduct();
    void returnChange(float, string);
    void isSufficientCoins(float);
    void returnCoins();
    void availability();
};

#endif
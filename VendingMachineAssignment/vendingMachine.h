#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H 1

#include <iostream>
#include <stdlib.h>
using namespace std;

class VendingMachine
{
private:
    const float Quarter = 0.25, Dime = 0.10, Nickel = 0.05, Dollar = 1;
    const float colaPrice = 1, chipsPrice = 0.5, candyPrice = 0.65;
    string coin;
    string product[3] = {"Cola", "Chips", "Candy"};
    int inventory[3] = {2, 2, 2};
    float addedcoin = 0.00;
    int numberofcoins;
    int productcode;
    static float moneyInMachine;

public:
    void vendingMachine();
    void display();
    void addCoin();
    void selectProduct();
    void productAvailability();
    void validateSufficientCoins(float);
    void returnChange(float, string);
    void returnCoins();
    void addMoneyInMachine(float);
};

#endif
#include "vendingMachine.h"

void VendingMachine::vendingMachine()
{
    if (inventory[0] > 0 || inventory[1] > 0 || inventory[2] > 0)
    {
        addCoin();
    }
    else
    {
        cout << "SOLD OUT!" << endl;
        exit(0);
    }
}

float VendingMachine::moneyInMachine;

void VendingMachine::display()
{
    string display = (moneyInMachine == 0) ? "EXACT CHANGE ONLY" : "INSERT COIN";
    cout << display << endl;
}

void VendingMachine::addCoin()
{
    cout << "available cola: " << inventory[0] << "\navailable chips: " << inventory[1] << "\navailable candy: " << inventory[2] << endl;
    cout << "added money: $" << addedcoin << endl;
    display();
    cin >> numberofcoins >> coin;
    if (coin == "quarter")
    {
        addedcoin += numberofcoins * Quarter;
        cout << "added money: $" << addedcoin << endl;
    }
    else if (coin == "dime")
    {
        addedcoin += numberofcoins * Dime;
        cout << "added money: $" << addedcoin << endl;
    }
    else if (coin == "nickel")
    {
        addedcoin += numberofcoins * Nickel;
        cout << "added money: $" << addedcoin << endl;
    }
    else if (coin == "dollar")
    {
        addedcoin += numberofcoins * Dollar;
        cout << "added money: $" << addedcoin << endl;
    }
    else
    {
        cerr << "INVALID COINS RETURNED, PLEASE COLLECT IT AND TRY AGAIN WITH VALID COINS." << endl;
        addCoin();
    }
    selectProduct();
}

void VendingMachine::selectProduct()
{
    cout << "1. Cola\n2. Chips\n3. Candy\n0. Return Coins" << endl;
    cin >> productcode;
    switch (productcode)
    {
    case 1:
        productAvailability();
        validateSufficientCoins(colaPrice);
        inventory[productcode - 1]--;
        addMoneyInMachine(colaPrice);
        returnChange(colaPrice, product[0]);
        break;
    case 2:
        productAvailability();
        validateSufficientCoins(chipsPrice);
        inventory[productcode - 1]--;
        addMoneyInMachine(chipsPrice);
        returnChange(chipsPrice, product[1]);
        break;
    case 3:
        productAvailability();
        validateSufficientCoins(candyPrice);
        inventory[productcode - 1]--;
        addMoneyInMachine(candyPrice);
        returnChange(candyPrice, product[2]);
        break;
    case 0:
        returnCoins();
        addCoin();
    default:
        cerr << "INVALID SELECTION! PLEASE TRY AGAIN!" << endl;
        selectProduct();
        break;
    }
}

void VendingMachine::validateSufficientCoins(float productPrice)
{
    if (addedcoin < productPrice)
    {
        cout << "insufficient coins! Added money: " << addedcoin << " \nProduct price: " << productPrice << " \nplease add: " << productPrice - addedcoin << " or more to proceed." << endl;
        addCoin();
        validateSufficientCoins(productPrice);
    }
}

void VendingMachine::returnChange(float productPrice, string product)
{
    if (addedcoin > productPrice)
    {
        cout << "Collect your change: " << addedcoin - productPrice << endl;
        cout << "& collect your " << product << endl;
        cout << "THANK YOU." << endl
             << "---------------------" << endl;
        addedcoin = 0;
        vendingMachine();
    }
    else if (addedcoin == productPrice)
    {
        addedcoin = 0;
        cout << "THANK YOU." << endl
             << "---------------------" << endl;
        vendingMachine();
    }
}

void VendingMachine::returnCoins()
{
    cout << "COINS RETURNED! Please collect your $" << addedcoin << endl
         << "THANK YOU." << endl;
    addedcoin = 0;
    vendingMachine();
}

void VendingMachine::productAvailability()
{
    if (inventory[productcode - 1] == 0)
    {
        cout << inventory[productcode - 1] << " SOLD OUT! Please choose different option." << endl;
        selectProduct();
    }
}

void VendingMachine::addMoneyInMachine(float productSold)
{
    moneyInMachine += productSold;
}

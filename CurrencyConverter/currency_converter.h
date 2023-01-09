#ifndef CURRENCY_CONVERTER_H
#define CURRENCY_CONVERTER_H 1

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>
#include <stdexcept>
#include <limits>
using namespace std;

class CurrencyConvertor
{
private:
    string USD, GBP, INR, EUR, CHF, AUD, SGD, CNY, JPY;
    vector<float> toUSD;
    vector<float> toGBP;
    vector<float> toINR;
    vector<float> toEUR;
    vector<float> toCHF;
    vector<float> toAUD;
    vector<float> toSGD;
    vector<float> toCNY;
    vector<float> toJPY;

    vector<string> currency_list{"USD", "GBP", "INR", "EUR", "CHF", "AUD", "SGD", "CNY", "JPY"};
    int lengthOfCuurencyList = currency_list.size();
    unsigned int ip_cur_code;
    unsigned int op_cur_code;
    float amount;
    float convertedAmount;
    char anotherConv;

public:
    void readFile();
    void getInputCurrency();
    void getOutputCurrency();
    void getAmount();
    void Conversion();
    void printConvertedAmount();
    char anotherConversion();
    void currencyConverter();
};

#endif
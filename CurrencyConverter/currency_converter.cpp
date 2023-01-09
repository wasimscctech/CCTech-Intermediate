#include "currency_converter.h"

void CurrencyConvertor::currencyConverter()
{
    cout << "Welcome to CCTech Currency converter:" << endl;
    do
    {
        readFile();
        getInputCurrency();
        getOutputCurrency();
        getAmount();
        Conversion();
        printConvertedAmount();
        anotherConversion();
    } while (anotherConv == 'y' || anotherConv == 'Y');
}

void CurrencyConvertor::readFile()
{
    ifstream coeff("currencyRates.txt");
    if (coeff.is_open())
    {
        string line;
        getline(coeff, line);
        while (!coeff.eof())
        {
            getline(coeff, USD, ',');
            toUSD.push_back(stof(USD));
            getline(coeff, GBP, ',');
            toGBP.push_back(stof(GBP));
            getline(coeff, INR, ',');
            toINR.push_back(stof(INR));
            getline(coeff, EUR, ',');
            toEUR.push_back(stof(EUR));
            getline(coeff, CHF, ',');
            toCHF.push_back(stof(CHF));
            getline(coeff, AUD, ',');
            toAUD.push_back(stof(AUD));
            getline(coeff, SGD, ',');
            toSGD.push_back(stof(SGD));
            getline(coeff, CNY, ',');
            toCNY.push_back(stof(CNY));
            getline(coeff, JPY, '\n');
            toJPY.push_back(stof(JPY));
        }
        coeff.close();
    }
    else
    {
        cerr << "UNABLE TO OPEN THE FILE!" << endl;
        exit(1);
    }
}

void CurrencyConvertor::getInputCurrency()
{
    cout << "Select the input currency from the list" << endl;
    for (int i = 0; i < lengthOfCuurencyList; i++)
    {
        cout << i + 1 << ". " << currency_list[i] << endl;
    }

    cin >> ip_cur_code;

    if (cin.fail())
    {
        cout << "Please enter a valid number" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getInputCurrency();
    }
    else if (ip_cur_code < 1 || ip_cur_code > lengthOfCuurencyList)
    {
        cout << "The number is out of range" << endl;
        getInputCurrency();
    }
}

void CurrencyConvertor::getOutputCurrency()
{
    cout << "Select the output currency from the list" << endl;

    for (int i = 0; i < lengthOfCuurencyList; i++)
    {
        if (i == (ip_cur_code - 1))
            continue;
        cout << i + 1 << ". " << currency_list[i] << endl;
    }

    cin >> op_cur_code;
    if (cin.fail() || op_cur_code == ip_cur_code)
    {
        cout << "Please enter a valid number" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getOutputCurrency();
    }
    else if (op_cur_code < 1 || op_cur_code > lengthOfCuurencyList)
    {
        cout << "The number is out of range" << endl;
        getOutputCurrency();
    }
}

void CurrencyConvertor::getAmount()
{
    cout << "Please enter the amount" << endl;
    cin >> amount;
    if (cin.fail())
    {
        cout << "The amount entered is not valid, Please enter a valid amount" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getAmount();
    }
}

void CurrencyConvertor::Conversion()
{
    switch (op_cur_code)
    {
    case 1: convertedAmount = amount * toUSD[ip_cur_code - 1]; break;
    case 2: convertedAmount = amount * toGBP[ip_cur_code - 1]; break;
    case 3: convertedAmount = amount * toINR[ip_cur_code - 1]; break;
    case 4: convertedAmount = amount * toEUR[ip_cur_code - 1]; break;
    case 5: convertedAmount = amount * toCHF[ip_cur_code - 1]; break;
    case 6: convertedAmount = amount * toAUD[ip_cur_code - 1]; break;
    case 7: convertedAmount = amount * toSGD[ip_cur_code - 1]; break;
    case 8: convertedAmount = amount * toCNY[ip_cur_code - 1]; break;   
    case 9: convertedAmount = amount * toJPY[ip_cur_code - 1]; break;
    }
}

void CurrencyConvertor::printConvertedAmount()
{
    cout << amount << " " << currency_list[ip_cur_code - 1] << " would be " << convertedAmount << " " << currency_list[op_cur_code - 1] << " on 2023-01-06 " << endl;
}

char CurrencyConvertor::anotherConversion()
{
    cout << "Do you wish to continue with another conversion (Y/N)" << endl;
    cin >> anotherConv;
    if (anotherConv != 'n' && anotherConv != 'N' && anotherConv != 'y' && anotherConv != 'Y')
    {
        cerr << "Invalid input, please enter Y or N" << endl;
        anotherConversion();
    }

    else if (anotherConv == 'n' || anotherConv == 'N')
    {
        cout << "Thank you for using CCTech Currency converter." << endl;
        exit(0);
    }
    return anotherConv;
}
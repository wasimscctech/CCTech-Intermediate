
# Currency Converter

This is "CCTech Currency Converter". The aim of this project is to convert the currencies by reading a text file in which the converted data for several currencies are stored.


## Description

### What this program does? 
1. asks a user to select the input and output Currency respectively.
2. Asks for an amount which he wants to convert.
3. Read the converted data from the text file.
4. Converts the input amount as per the input and output currency type.
5. Prints the converted amount.
6. Asks if the user wants to make another conversion.
7. Terminates the program successfully if user doesn't want do another conversion.

### Errors handled for the following scenarios:
1. Input / Output currency user input is not a number.
2. Input / Output currency user input is a number outside the range.
3. The currency amount entered is not a valid number.
4. Invalid character instead of Y/N for continuing the conversion.


## Methods
`readFile()` - Read the text file and return unsuccessful termination of the program if text file doesn't open.

`getInputCurrency()` - gets the input currency from the user and handles the errors.

`getOutputCurrency()` - gets the output currency from the user and handles the errors.

`getAmount()` - gets the amount from the user and handles the errors.

`Conversion()` - Does the conversion.

`printConvertedAmount()`- Prints the converted amount for the user.

`anotherConversion()` - asks for another conversion, if user doesn't want to continue it terminates the program successfully. And handle error for invalid response.

## code

In `readFile()` the below code is used to read the data of USD collumn and it converts the string to float and the float value then get added to the vector `toUSD`.
```
getline(coeff, USD, ',');
toUSD.push_back(stof(USD));
```

#### _Note: Infinite loop occurs with cin when user passes a string while a number is expected._

As per some online reference, the reason is because cin fails in the situation you describe and won't read any more input into those variables. By giving cin bad input, cin gets in the fail state and stops prompting the command line for input causing the loop to free run.
To prevent the infinite loop we have used the below code: 

```
if (cin.fail())
{
    cout << "Please enter a valid number" << endl;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
```

## Makefile
#### To delete the object and executables
`make clean`

#### To compile the program
`make compile`

#### To compile & run the program
`make run`

### Conversion Table in the text file
_Rows represent the input currency & Columns represent the output currency_
![This is an image](CurrencyConversionTable.jpeg)




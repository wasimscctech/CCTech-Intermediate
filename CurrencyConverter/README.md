
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


## Makefile
#### To delete the object and executables
`make clean`

#### To compile the program
`make compile`

#### To compile & run the program
`make run`

### Conversion Table in the text file
![This is an image](CurrencyConverter/CurrencyConversionTable.png)




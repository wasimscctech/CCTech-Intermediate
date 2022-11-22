#include <iostream>
#include <stdlib.h>
#include <limits.h>

using namespace std;

void unsignedType()
{
    unsigned int a, b, result;
    char operation;
    cout << UINT_MAX << endl;
    cin >> a >> operation >> b;
    try
    {
        switch (operation)
        {
        case '+':
            if (UINT_MAX - a < b)
                throw invalid_argument("Overflow!");
            result = a + b;
            break;
        case '-':
            if (a < b)
                throw invalid_argument("Underflow!");
            result = a - b;
            break;
        case '*':
            if (UINT_MAX / a < b)
                throw invalid_argument("Overflow!");
            result = a * b;
            break;
        case '/':
            if (b == 0)
                throw invalid_argument("Undefined!");
            result = a / b;
            break;
        default:
            throw invalid_argument("invalid operation selected");
            break;
        }
        cout << a << " " << operation << " " << b << " = " << result << endl;
    }
    catch (invalid_argument &err)
    {
        cerr << "Unable to process with the operation. Found the following error: " << err.what() << endl;
    }
}

void signedType() {
    unsigned int a, b, result;
    char operation;
    cout << UINT_MAX << endl;
    cin >> a >> operation >> b;
    try
    {
        switch (operation)
        {
        case '+':
            if (INT_MAX - a < b)
                throw invalid_argument("Overflow!");
            result = a + b;
            break;
        case '-':
            if (a < b)
                throw invalid_argument("Underflow!");
            result = a - b;
            break;
        case '*':
            if (INT_MAX / a < b)
                throw invalid_argument("Overflow!");
            result = a * b;
            break;
        case '/':
            if (b == 0)
                throw invalid_argument("Undefined!");
            result = a / b;
            break;
        default:
            throw invalid_argument("invalid operation selected");
            break;
        }
        cout << a << " " << operation << " " << b << " = " << result << endl;
    }
    catch (invalid_argument &err)
    {
        cerr << "Unable to process with the operation. Found the following error: " << err.what() << endl;
    }
}
int main()
{   
    char calcType;
    cout<<"please select the calculator type from below:"<<endl<<"1 = Unsigned\n2 = Signed\n3 = Floating point"<<endl;
    cin>>calcType;
    switch (calcType)
    {
    case '1':
        unsignedType();
        break;
    case '2':
        signedType();
        break;
    // case '3':
    //     break;
    // default:
    //     break;
    }    
    return EXIT_SUCCESS;
}
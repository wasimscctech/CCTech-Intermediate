#include <iostream>
#include <limits.h>
#include <stdlib.h>
using namespace std;

unsigned int UINT_Addition(unsigned int a, unsigned int b)
{
    try
    {
        if (UINT_MAX - a < b)
        {
            throw UINT_MAX;
        }
    }
    catch (unsigned int e)
    {
        cout << "the addition is out of range: " << e <<endl;
    }
    return a + b;
}

unsigned int UINT_Substraction(unsigned int a, unsigned int b)
{
    try
    {
        if (a < b)
        {
            throw a;
        }
    }
    catch (unsigned int e)
    {
        cout <<"2nd number should be lower than: "<<e<<endl;
    }
    return a - b;
}

// void Operations() {
//     char operation;
//     int x, y;
//     cout<<"please enter your two values"<<endl;
//     cin>>x>>y;
//     cout<<"Please select your operation"<<endl;
//     cin>>operation;

//     switch (operation)
//     {
//     case '+':
//         cout<<"Sum of two numbers is"<<UINT_Addition(x, y);
//         break;
//     // case '-':
//     //     cout<<"differance of two numbers is"<<UINT_Substraction(x, y);
//     //     break;
//     // case '*':
//     //     cout<<"multiplication of two numbers is"<<UINT_Multiply(x, y);
//     //     break;
//     // case '/':
//     //     cout<<"division of two numbers is"<<UINT_Divide(x, y);
//     //     break;
//     default:
//         cout<<"invalid operation selected";
//         break;
//     }
// }

int main()
{
    // Operations();
    char operation;
    unsigned int x, y;
    cout << "please enter possitive values" << endl;
    cin >> x >> y;
    cout << "Please select your operation" << endl;
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << UINT_Addition(x, y);
        break;
    case '-':
        cout<<UINT_Substraction(x, y);
        break;
    // case '*':
    //     cout<<UINT_Multiply(x, y);
    //     break;
    // case '/':
    //     cout<<UINT_Divide(x, y);
    //     break;
    default:
        cout << "invalid operation selected";
        break;
    }
    return EXIT_SUCCESS;
}

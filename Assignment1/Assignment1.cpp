#include <iostream>
#include <string.h>
#include <stdlib.h>
// #include "assignment1.h"
#include <assert.h>
#include <algorithm>
#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    char s[] = "/hiker";
    char slash = '/';
    char *ptrslash = strrchr(s, slash);

    int index1 = ptrslash - s;
    cout << index1 << endl;

    char dot = '.';
    char *ptrdot = strrchr(s, dot);

    int index2 = ptrdot - s;
    cout << index2 << endl;

    // string str(s + index1 + 1, s + index2);
    string str(s, s + index2);
    cout << str;

    list<string> listOfStrs = {
        "steps_", "_steps","Steps_", "_Steps","steps.", ".steps","Steps.", ".Steps","steps-", "-steps","Steps-", "-Steps", "tests_", "_tests", "Tests_", "_Tests","tests.", ".tests", "Tests.", ".Tests","tests-", "-tests", "Tests-","-Tests","spec_", "_spec", "Spec_", "_Spec", "spec.",".spec", "Spec.", ".Spec", "spec-","-spec", "Spec-", "-Spec",
        "test_", "_test", "Test_", "_Test","test.", ".test", "Test.", ".Test","test-", "-test", "Test-", "-Test",
        "Tests", "tests", "steps", "Steps", "Spec", "spec", "Test", "test"
        };

    list<string>::iterator it1, it2, it3;
    // string str = "wibble/test/hiker_spec";
    int n = str.length();
    cout<<n<<endl;

    for (int i = index1; i <= n - 1; i++)
    {
        it1 = find(listOfStrs.begin(), listOfStrs.end(), str.substr(i, 6));
        it2 = find(listOfStrs.begin(), listOfStrs.end(), str.substr(i, 5));
        it3 = find(listOfStrs.begin(), listOfStrs.end(), str.substr(i, 4));

        if (it1 != listOfStrs.end())
        {   
            cout<<str.substr(i, 6);
            if (i == index1+1) cout << "[" << i + 6 << "," << n << "]";
            else cout << "[" << index1+1 << "," << i << "]";
            break;
        }
        else if (it2 != listOfStrs.end())
        {   
            cout<<str.substr(i, 5);
            if (i == index1+1) cout << "[" << i + 5 << "," << n << "]";
            else cout << "[" << index1+1 << "," << i << "]";
            break;
        }
        else if (it2 != listOfStrs.end())
        {   
            cout<<str.substr(i, 4);
            if (i == index1+1) cout << "[" << i + 4 << "," << n << "]";
            else cout << "[" << index1+1 << "," << i << "]";
            break;
        }
        else {

        }
    }

    // int n = str.length();

    // for (int i = 0; i <= n - 1; i++)
    // {
    //     // if (str.substr(i,5) == "tests" || str.substr(i,5) == "Tests" || str.substr(i,4) == "test" || str.substr(i,4) == "Test" || str.substr(i,4) == "spec" || str.substr(i,4) == "Spec")
    //     if (str.substr(i, 5) == "tests" || str.substr(i, 5) == "Tests")
    //     {
    //         // cout<<i;
    //         if (i == 0)
    //         {
    //             cout << "[" << i + 5 << "," << n << "]";
    //         }
    //         else
    //         {
    //             cout << "[" << 0 << "," << i << "]";
    //         }
    //     }
    //     else if (str.substr(i, 4) == "test" || str.substr(i, 4) == "Test" || str.substr(i, 4) == "spec" || str.substr(i, 4) == "Spec")
    //     {
    //         if (i == 0)
    //         {
    //             cout << "[" << i + 4 << "," << n << "]";
    //         }
    //         else
    //         {
    //             cout << "[" << 0 << "," << i << "]";
    //         }
    //     }
    // }
    return EXIT_SUCCESS;
}
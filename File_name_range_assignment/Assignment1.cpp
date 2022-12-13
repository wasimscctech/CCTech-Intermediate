#include <iostream>
#include <sstream>
#include <string.h>
#include <stdlib.h>
// #include "assignment1.h"
#include <assert.h>
#include <algorithm>
#include <list>

using namespace std;

class fileNameRange
{
public:
    int *index1;
    int *index2;
    int indx1;
    int indx2;
    string result;
    stringstream ss;

    string removeSlashAndDots(string);
    void searchStr(char *);
    void searchDash(string);
};

string fileNameRange::removeSlashAndDots(string ipstr)
{
    char s[ipstr.length() + 1];
    strcpy(s, ipstr.c_str());

    signed int size = sizeof(s) / sizeof(s[0]);

    for (int i = 0; i < size - 1; i++)
    {
        if (s[i] == '/')
        {
            char *ptrslash = strrchr(s, '/');
            indx1 = ptrslash - s;
            index1 = &indx1;
        }
        else if (indx1 < 0 || indx1 >= size)
        {
            indx1 = 0;
            index1 = &indx1;
        }
        if (s[i] == '.')
        {
            char *ptrdot = strrchr(s, '.');
            indx2 = ptrdot - s;
            index2 = &indx2;
        }
        else if (indx2 < 0 || indx2 > size - 1)
        {
            indx2 = size - 1;
            index2 = &indx2;
        }
    }
    string str = ipstr.substr(0, *index2);
    cout<<str;
    searchDash(str);

//     searchStr(s);
//     ss >> result;
//     return result;
}

void fileNameRange::searchDash(string str){
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
    if(str.substr(i, 1)=="." || str.substr(i, 1)=="-" || str.substr(i, 1)=="_") 
        
        cout<<i<<endl;
    }
    

}


// void fileNameRange::searchStr(char s[])
// {
//     list<string> listOfStrs = {
//         "steps_", "_steps", "Steps_", "_Steps", "steps.", ".steps", "Steps.", ".Steps", "steps-", "-steps", "Steps-", "-Steps", "tests_", "_tests", "Tests_", "_Tests", "tests.", ".tests", "Tests.", ".Tests", "tests-", "-tests", "Tests-", "-Tests", "spec_", "_spec", "Spec_", "_Spec", "spec.", ".spec", "Spec.", ".Spec", "spec-", "-spec", "Spec-", "-Spec",
//         "test_", "_test", "Test_", "_Test", "test.", ".test", "Test.", ".Test", "test-", "-test", "Test-", "-Test",
//         "Tests", "tests", "steps", "Steps", "Spec", "spec", "Test", "test"};

//     list<string>::iterator it1, it2, it3;

//     string str(s, s + *index2);
//     int n = str.length();

//     for (int i = *index1; i < n; i++)
//     {
//         it1 = find(listOfStrs.begin(), listOfStrs.end(), str.substr(i, 6));
//         it2 = find(listOfStrs.begin(), listOfStrs.end(), str.substr(i, 5));
//         it3 = find(listOfStrs.begin(), listOfStrs.end(), str.substr(i, 4));

//         if (it1 != listOfStrs.end())
//         {
//             if (i == *index1 + 1 || i == *index1)
//                 ss << "[" << i + 6 << "," << n << "]";

//             else if (str.substr(*index1, 1) != "/")
//                 ss << "[" << *index1 << "," << i << "]";

//             else
//                 ss << "[" << *index1 + 1 << "," << i << "]";
//             break;
//         }
//         else if (it2 != listOfStrs.end())
//         {
//             if (i == *index1 + 1 || i == *index1)
//                 ss << "[" << i + 5 << "," << n << "]";
//             else
//                 ss << "[" << *index1 + 1 << "," << i << "]";
//             break;
//         }
//         else if (it3 != listOfStrs.end())
//         {
//             if (i == *index1 + 1 || i == *index1)

//                 ss << "[" << i + 4 << "," << n << "]";
//             else
//                 ss << "[" << (*index1 + 1) << "," << i << "]";
//             break;
//         }
//     }
// }

int main()
{
    fileNameRange obj1;
    // assert(obj1.removeSlashAndDots("hikertest.vh")=="[0,5]");
    obj1.removeSlashAndDots("ads/tests_hiker.sh");
}
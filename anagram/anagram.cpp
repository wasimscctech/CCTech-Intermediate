#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void anagram(string str, int start, int end)
{
    if (start == end)
    {
        cout << str << " ";
    }
    else
    {
        for (int i = start; i <= end; i++)
        {
            swap((str[start]), (str[i]));
            anagram(str, start + 1, end);
            swap((str[start]), (str[i]));
        }
    }
}

int main()
{
    string string;
    cout << "Enter a string to get the anagram: ";
    cin >> string;
    int n = string.length();
    anagram(string, 0, n - 1);
    return EXIT_SUCCESS;
}
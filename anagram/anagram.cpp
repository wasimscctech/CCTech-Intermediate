#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <assert.h>

using namespace std;

string anagram(string str, int start, int end)
{
    stringstream ss;
    string result_str;
    if (start == end)
    {
        ss<< str <<" ";
        // ss>>result_str;
        return ss;
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
    // assert(anagram(string, 0, n - 1)=="biro bior brio broi bori boir ibro ibor irbo irob iorb iobr ribo riob rbio rboi robi roib oirb oibr orib orbi obri obir ");
    // assert(anagram("abc", 0, 2)=="abc acb bac bca cba cab");
    cout<<anagram(string, 0, n - 1);
    return EXIT_SUCCESS;
}
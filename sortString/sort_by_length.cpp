#include <iostream>
#include "sort_string_by_length.h"
#include <stdlib.h>

using namespace std;

int main() {
    string str1, str2, str3;
    cin>>str1>>str2>>str3;
    sort_by_length(str1, str2, str3);
    makefile();
    return EXIT_SUCCESS;
}
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
    string output_string = "";
    for (int i = 1; i < argc; ++i)
    {
        output_string = output_string + argv[i] + " ";
    }
    cout << output_string << endl;
    return EXIT_SUCCESS;
}
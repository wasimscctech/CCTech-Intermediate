#include <iostream>
#include <sstream>

using namespace std;

stringstream echo(int argc, string argv[])
{
    stringstream ss;

    for (int i = 1; i < argc; i++)
    {
        if (i > 1)
            ss << " ";
        ss << argv[i];
    }
    ss << "\n";
    return ss;
}
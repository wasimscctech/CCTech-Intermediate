#include <iostream>
#include <sstream>
#include <fstream>
#include <stdlib.h>

using namespace std;

// void checkPath(const char *file)
// {

//     try
//     {
//         // file = "C:\\Users\\91866\\Desktop\\CppIntermediate\\anagram";
//         struct stat sb;
//         if (stat(file, &sb) == 0)
//             cout << "The path is valid!";
//         else
//         {
//             stringstream ss;
//             ss << "cat: " << file << ": No such file or directory";
//             throw invalid_argument(ss);
//         }
//     }
//     catch (invalid_argument &err)
//     {
//         cerr << err.what() << endl;
//     }
// }

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        char c;
        while (1)
        {
            c = getchar();
            if (c == EOF)
                break;
            putchar(c);
        }
    }

    if (argc == 2)
    {
        string readfile;
        ifstream in;
        in.open("test.txt");
        while (in.eof() == 0)
        {
            getline(in, readfile);
            cout << readfile << endl;
        }
    }
    return EXIT_SUCCESS;
}
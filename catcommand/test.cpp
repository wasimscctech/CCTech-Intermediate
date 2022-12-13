#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    // string addline;
    // addline = "hey this is wasim";
    // ofstream wout;
    // wout.open("test.txt");
    // wout<<addline<<endl<<"we are testing a cat command\nwe will pass the test.";
    // wout.close();

    string readfile;
    ifstream in;
    in.open("test.txt");
    while (in.eof() == 0)
    {
        getline(in, readfile);
        cout << readfile << endl;
    }

    return EXIT_SUCCESS;
}
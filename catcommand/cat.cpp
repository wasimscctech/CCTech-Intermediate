#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, string argv[]) {
    if( argc == 1) {
        char c;
        while (1)
        {
            c = getchar();
            if (c == EOF) break;
            putchar(c);
        } 
    }
    return EXIT_SUCCESS;
}
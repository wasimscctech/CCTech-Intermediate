#include <iostream>
#include "verify.h"
#include <stdlib.h>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    
    VERIFY(a==b);

    return EXIT_SUCCESS;
}
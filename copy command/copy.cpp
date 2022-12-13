#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
    if(argc != 3) {
        fprintf(stderr, "usage: %s source-file destination-file\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    ifstream is;
    is.open(argv[1], ios::in);
    if(!is.is_open()){
        fprintf(stderr, "Couldn't open source file %s for reading", argv[1]);
        exit(EXIT_FAILURE);
    }
    ofstream os;
    os.open(argv[2], ios::out);
    if()
    
    return EXIT_SUCCESS;
}
// #include <iostream>
// #include <stdlib.h>

// using namespace std;

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
// else {
//     for (int i= 1; i<argc; i++) {
//         FILE *file;
//         if(file = fopen(argv[i], "r")) {
//             char c;
//             while(1) {
//                 c = getc(file);
//                 if (c == EOF)
//                     break;
//                 cout << c;
//             }
//             fclose(file);
//         }
//         else {
//             cout<<"cat: " << argv[i] << ": No such file or directory"<<endl;
//         }
//     }
// }

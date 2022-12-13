// #include <iostream>
// #include <stdlib.h>

// using namespace std;

// void f1(){
//     cout<<"start";
// }
// void f2(){
//     cout<<"end";
// }
// int main(void)
// {

// at_quick_exit(f1);
// at_quick_exit(f2);

// quick_exit(0);

// char a[100], b[100];
// printf("first scanf %d", scanf("%d", a)); //O.P is 1
// printf("2nd scanf %d", scanf("%s%s", a, b)); //O.P is 2: it will return the total number of successfully converted strings

// #include <stdio.h>
// #include <sys/stat.h>

// int main(int argc, char* argv[])
// {
//     const char* folder;
//     //folder = "C:\\Users\\SaMaN\\Desktop\\Ppln";
//     folder = "C:\\Users\\91866\\Desktop\\CppIntermediate\\wasim";
//     struct stat sb;
//     if (stat(folder, &sb) == 0 && S_ISDIR(sb.st_mode)) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }
// }

// two header files iostream and fstream is included to enable us to use cout and ifstream. #include <iostream>
#include <fstream>
#include <iostream>

using namespace std;
// defining the file exists function which checks if a file exists or not and returns one if file exists and returns 0 if file do not exist
bool FileExists(string filename)
{
    ifstream file(filename);
    if (file.is_open())
    {
        return 1;
        file.close();
    }
    return 0;
}
// main method is called
int main()
{
    // creating a variable to store the input provided by the user
    char input[10];
    ifstream ifile;
    // creating a new file to store the data provided by the user
    ifile.open("new.txt");
    while (!ifile.eof())
    {
        ifile.getline(input, 10);
        cout << input << endl;
    }
    ifile.close();
    // calling the file exists function to check if the file exists or no
    cout << FileExists("new.txt") << endl;
    return 0;
}
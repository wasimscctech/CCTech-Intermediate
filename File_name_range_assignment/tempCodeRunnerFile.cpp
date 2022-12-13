#include <iostream>
#include <sstream>
#include <stdlib.h>
using namespace std;

struct point{
    int x, y;

    string to_string() const {
        stringstream s;
        string p;
        s<<"("<<x<<", "<<y<<")"<<endl;
        s>>p;
    }
};

int main() {

    point p;
    cin>>p.x;
    cin>>p.y;

    cout<<"the point is: "<<p.to_string();

    // stringstream ss;
    // int k = 20;
    // ss<<"["<<2<<","<<3<<"]";
    // string s;
    // ss>>s;
    // cout<<k<<endl;
    // cout<<s;
    // cout<<sizeof(s);
    // return EXIT_SUCCESS;
}

// void fileNameRange::fileName(string ipstr) {
//     list<string> listOfStr = {"Tests", "tests", "steps", "Steps", "Spec", "spec", "Test", "test"};
//     list<string>::iterator itr;

//     int n = ipstr.length();

//     for (int i = 0; i < n; i++)
//     {
//         itr = find(listOfStr.begin(), listOfStr.end(), ipstr.substr(i, 5));
//         // itr2 = find(listOfStrs.begin(), listOfStrs.end(), str.substr(i, 4));
        
//         if (itr != listOfStr.end())
//             cout<<"it exist";
//             // removeSlashAndDots(ipstr);
//         } }

// #include <iostream>
// #include <sstream>
// #include <sys/stat.h>
// using namespace std;
  
// int main()
// {
//     try
//     {
//         const char *file = "C:\\Users\\91866\\Desktop\\CppIntermediate\\anagram";
//         struct stat sb;
//         if (stat(file, &sb) == 0)
//             cout << "The path is valid!";
//         else
//         {
//             stringstream ss;
//             ss << "cat: " << *file << ": No such file or directory";
//             throw invalid_argument(ss);
//         }
//     }
//     catch (invalid_argument &err)
//     {
//         cerr << err.what() << endl;
//     }
  
//     return 0;
// }
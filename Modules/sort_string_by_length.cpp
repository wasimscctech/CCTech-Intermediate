#include <iostream>
using namespace std;

void sort_String(string str1, string str2, string str3) {
    string ls;
    int a = str1.length();
    int b = str2.length();
    int c = str3.length();

    if (a >= b && a >= c) {
        if(b>=c) cout<<str1<<endl<<str2<<endl<<str3;
        else cout<<str1<<endl<<str3<<endl<<str2;
    }
    if (b >= a && b >= c) {
        if(a>=c) cout<<str2<<endl<<str1<<endl<<str3;
        else cout<<str2<<endl<<str3<<endl<<str1;
    }
    if (c >= a && c >= b) {
        if(a>=b) cout<<str3<<endl<<str1<<endl<<str2;
        else cout<<str3<<endl<<str2<<endl<<str1;
        }
}
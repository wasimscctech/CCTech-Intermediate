#include <iostream>
#include <limits.h>
#include <iomanip>

using namespace std;

int main() {
    // cout<<fixed<<setprecision(1)<<5423545.21<<endl;
    // cout<<0.00000045214389f<<endl;
    // cout<<0.00000045214389f<<endl;
    // cout<<setprecision(9)<<123456789.0f;
    double x = (0.3*3) + 0.1;
    cout<<1.0f<<endl;
    double y = 1;
    if (x == y) {
        cout<<"equal";
    }
    else {
        cout<<"not equal";
    }
    cout<<x;
    cout<<y;
    return 0;
}
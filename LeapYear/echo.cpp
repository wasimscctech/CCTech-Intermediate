#include <iostream>
using namespace std;
  
int main(int argc, char** argv)
{ 
    if(argc<2) cout<<endl;
    for (int i = 0; i < argc; i++)
        cout << argv[i] << " ";
    return 0;
}
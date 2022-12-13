// #include <iostream>
// #include <cmath>
// #include <iomanip>
// #include <float.h>
// #include <inttypes.h>
// #include <limits.h>


// /*The NaN values are used to identify undefined or non-representable values for 
// floating-point elements, such as the square root of negative numbers or the result of 0/0.
// */
// using namespace std;
// void floatToInt(float float_val)
// {
//      int int_val;
//     // int_val = float_val;
//     // cout<<int_val<<endl;
   
//     if (isnan(float_val) ||size_t(INT_MAX) < log2f(fabsf(float_val)) || (float_val != 0.0F && fabsf(float_val) < FLT_MIN))
//     {
//         throw runtime_error("conversion failed");
//     }
//     else
//     {
//         int_val = float_val;
//         cout<<int_val<<endl;
//     }
// }
// void int_To_Float(int int_val)
// {
//     float float_val;
//     if (isnan(int_val) ||size_t(FLT_MAX) < log2f(abs(int_val)) || (int_val != 0 && abs(int_val) < INT_MIN))
//     {
//         throw runtime_error("conversion failed");
//     }
//      else
//     {
//         float_val= int_val ;
//         cout<<setprecision(2)<<float_val<<endl;
//     }
// }
// int main()
// {
//     cout<<fixed;
//     floatToInt(6215.3535);
//     int_To_Float(1023);
//     return 0;
// }
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream my_file;
	my_file.open("sample.txt", ios::in);
	if (!my_file) {
		cout << "No such file";
	}
	else {
		char c;
		while (1) {
			my_file >> c;
			if (my_file.eof())
				break;
			cout << c;
		}
	}
	my_file.close();
	return 0;
}
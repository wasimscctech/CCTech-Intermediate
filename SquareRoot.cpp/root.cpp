#include <bits/stdc++.h>
using namespace std;

double findSqrt(double x)
{
	if (x < 2)
		return x;

	double y = x;
	double z = (y + (x / y)) / 2;

	while (abs(y - z) >= 0.00001) {
		y = z;
		z = (y + (x / y)) / 2;
	}
	return z;
}

int main()
{

	double n = 3;

	double ans = findSqrt(n);
	cout << setprecision(6) << ans
		<< " is the square root of 3" << endl;
	return 0;
}

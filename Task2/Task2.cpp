#include <iostream>
using namespace std;
double t, x;
double f(double x)
{
	cin >> x;
	if (x <= 3)
		t = x * x - 3 * x + 9;
	else
		t = 1 / x * x * x + 6;
	return(t);
}
int Task2()
{
	double t = f(x);
	cout << t;
}

#include <iostream>
using namespace std;
double x, y, t;
bool Task1(double x, double y)
{
	return (x >= 0 != 0 && x <= 1 != 0 && y >= 0 != 0 && y <= 1 != 0 && x * x + y * y >= 1);
}

void Task1()
{
	cin >> x >> y;
	bool t = Task1(x, y);
	cout << t;
}
double f(double x)
{
	cin >> x;
	if (x <= 3)
		t = x * x - 3 * x + 9;
	else
		t = 1 / x * x * x + 6;
	return(t);
}
void Task2()
{
	double t = f(x);
	cout << t;
}
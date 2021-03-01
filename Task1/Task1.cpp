#include <iostream>
using namespace std;
double x, y;
bool task1(double x, double y)
{
	return (x >= 0 != 0 && x <= 1 != 0 && y >= 0 != 0 && y <= 1 != 0 && x * x + y * y >= 1);
}

int Task1()
{
	cin >> x >> y;
	bool t = task1(x, y);
	cout << t;
}

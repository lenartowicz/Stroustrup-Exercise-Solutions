#include "../../std_lib_facilities.h"

int main()
{
	double a = 0, b = 0, c = 0;
	double x0 = 0, x1 = 0, x2 = 0;
	double delta = 0;

	cout << "Enter the parameters of your function (a, b, c): ";
	cin >> a >> b >> c;

	delta = b*b - 4*a*c;

	if (delta < 0)
		cout << "Delta is negative. I am unable to count the roots!\n";
	else if (delta == 0)
	{
		cout << "Delta equals 0.\nThere is only one function root: ";
		x0 = -b / (2*a);
		cout << "\tX0 = " << x0 << '\n';
	}
	else
	{
		cout << "Delta is greater than 0.\nThere are two function roots: ";
		x1 = (-b - sqrt(delta)) / (2*a);
		x2 = (-b + sqrt(delta)) / (2*a);
		cout << "\tX1: " << x1 << "\tX2: " << x2 << '\n';
	}

	return 0;
}

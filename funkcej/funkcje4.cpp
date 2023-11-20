#include <iostream>
#include <cmath>
using namespace std;

void pierwiastki(double a, double b, double c)
{
	double x, x2, delta;

	delta = pow(b, 2) - 4 * a * c;

	if (delta > 0)
	{
		delta = sqrt(delta);
		x = (-b - delta) / (2 * a);
		x2 = (-b + delta) / (2 * a);
		cout << "Są dwa pierwiastki równania: " << x << " " << x2;
	}
	else if (delta == 0)
	{
		x = -b / (2 * a);
		cout << "Jest jeden pierwiastek: " << x;
	}
	else
		cout << "Brak pierwiastków";
}

int main()
{
	double a, b, c;
	cout << "Podaj a, b i c: ";
	cin >> a >> b >> c;
	pierwiastki(a, b, c);

	return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(const double x);

int main()
{
	double tp, tk, z;
	int n;

	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;

	double dt = (tk - tp) / n;
	double t = tp;

	cout << "----------------------------------------" << endl;
	cout << "| " << setw(15) << "t" << " | " << setw(18) << "Y(t)" << " |" << endl;
	cout << "----------------------------------------" << endl;

	while (t <= tk)
	{
		z = f(1 + 2 * t) + pow(f( f(1) + 2 * f(2 * t) ), 2);
		cout << "| " << setw(15) << t << " | " << setw(18) << z << " |" << endl;
		t += dt;
	}
	cout << "----------------------------------------" << endl;
	return 0;
}

double f(const double x)
{
	if (abs(x) >= 1)
	{
		return (2.0 * pow(sin(x), 2)) / (1 + pow(cos(x), 2));
	}
	else
	{
		
		double a = x;
		double S = a;
		int n = 0;

		double x4 = x * x * x * x;

		do
		{
			n++;

			double R = x4 / ((4.0 * n + 1.0) * (4.0 * n) * (4.0 * n - 1.0) * (4.0 * n - 2.0));

			a *= R;
			S += a;

		} while (n < 6);

		return (1.0 / (1.0 + x * x)) * S;
	}
}
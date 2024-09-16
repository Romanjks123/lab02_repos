#include <iostream>

#include <cmath>

using namespace std;
int main()
{
	double a;
	//double z1;
	double z2;

	cout << "a = "; cin >> a;

	//z1 = ((sin(a) + sin(a * 5)) - sin(3 * a)) / ((cos(a) - cos(3 * a)) - cos(5 * a));
	z2 = (sin(3 * a) / cos(3 * a));

	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cout << endl;

	cin.get();

	return 0;
}

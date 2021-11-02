#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
	cout << "Provide a: " << endl;
	float a;
	cin >> a;
	cout << "Provide b: " << endl;
	float b;
	cin >> b;
	cout << "Provide c: " << endl;
	float c;
	cin >> c;

	// Δ = b^2 - 4 * a * c

	float delta = (b * b) - 4 * a * c;
	float xzero = (-b) / (2 * a);
	float xone = ((-b - sqrt(delta)) / (2 * a));
	float xtwo = ((-b + sqrt(delta)) / (2 * a));

	if (delta > 0) {
		cout << "Delta equals: " << delta << endl;
		cout << "x1 equals: " << xone << endl;
		cout << "x2 equals: " << xtwo << endl;
	}
	else if (delta < 0) {
		cout << "Delta equals less than 0." << endl;
		cout << "There is no solution." << endl;
	}
	else if (delta == 0) {
		cout << "Delta equals: 0." << endl;
		cout << xzero << endl;
	}
	system("pause");
}
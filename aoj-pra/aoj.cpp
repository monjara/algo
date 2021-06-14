#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	double pi = 3.14159265359;
	double r;
	cin >> r;
	double a = pi * r * r;
	double l = 2 * pi * r;
	cout << fixed << setprecision(6) << a << " " << l << endl;
	return 0;
}
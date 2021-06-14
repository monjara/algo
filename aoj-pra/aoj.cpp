#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	int d = a / b;
	int r = (int)fmod(a, b);
	double f = a / b;
	cout << d << " " << r << " " << fixed << setprecision(8) << f << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	double a, b, c, x;
	cin >> a >> b >> c >> x;
	if (x <= a) cout << 1.000000 << endl;
	else if (b < x) cout << 0.000000 << endl;
	else {
		cout << fixed << setprecision(10) << c / (b - a) << endl;
	}
	return 0;
}

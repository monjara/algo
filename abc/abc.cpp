#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> x(n);
	for (int i = 0; i < n; i++) cin >> x.at(i);
	long long m = 0;
	double e = 0;
	long long c = -1;
	for (int i = 0; i < n; i++) {
		long long tmp = abs(x.at(i));
		double pow_tmp = pow(tmp, 2);
		m += tmp;
		e += pow_tmp;
		c = max(c, tmp);
	}
	e = sqrt(e);

	cout << m << endl;
	cout << fixed <<  setprecision(15) << e << endl;
	cout << c << endl;
	return 0;
}
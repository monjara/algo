#include <bits/stdc++.h>

using namespace std;

int main() {
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	long long res = max(max(max(a * c, b * d), a * d), b * c);
	cout << res << endl;
	return 0;
}
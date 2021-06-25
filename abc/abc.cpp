#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, x, t;
	cin >> n >> x >> t;
	int res = n % x == 0 ? n / x * t : (n / x + 1) * t;
	cout << res << endl;
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<long long> b(n + 1, 0);
	int mod = 1000000007;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i + 1] = b[i] + a[i];
	}

	long long res = 0;
	for (int i = 0; i < n; i++) {
		long long sum = (b[n] - b[i+1]) % mod;
		res += a[i] * sum;
		res %= mod;
	}
	cout << res << endl;
	return 0;
}
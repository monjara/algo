#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> outs(n);
	bool can = false;
	int res = 1000000001;

	for (int i = 0; i < n; i++) {
		int a, p, x;
		cin >> a >> p >> x;
		if (x - a > 0) {
			can = true;
			outs.at(i) = p;
		}
	}
	for (int i = 0; i < n; i++) {
		if (outs.at(i) > 0) res = min(res, outs.at(i));
	}
	if (can) cout << res << endl;
	else cout << -1 << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a.at(i);
	int ans = 999999999;
	for (int i = -100; i <= 100; i++) {
		int tmp = 0;
		for (int j = 0; j < n; j++) {
			tmp += (a.at(j) - i) * (a.at(j) - i);
		}
		ans = min(ans, tmp);
	}
	cout << ans << endl;
	return 0;
}

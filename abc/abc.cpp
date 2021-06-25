#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a.at(i);

	map<int, int> cnt;
	long long ans = 0;
	for (int j = 0; j < n; j++) {
		ans += j - cnt[a.at(j)];
		cnt[a.at(j)]++;
	}
	cout << ans << endl;
	return 0;
}
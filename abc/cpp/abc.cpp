#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n, q; 
	cin >> n >> q;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) cin >> a.at(i);
	sort(a.begin(), a.end());
	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		auto ans = a.end() - lower_bound(a.begin(), a.end(), x);
		cout << ans << endl;
	}
	return 0;
}

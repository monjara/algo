#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n, k, x, y;
	cin >> n >> k >> x >> y;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (i <= k) ans += x;
		else ans += y;
	}
	cout << ans << endl;
	return 0;
}

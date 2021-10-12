#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n, s, d;
	cin >> n >> s >> d;
	bool ok = false;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x < s && y > d) ok = true;
	}
	if (ok) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

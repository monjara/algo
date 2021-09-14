#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n, r;
	cin >> n >> r;

	int mx = -2000000;
	int mn = r;
	for (int i = 1; i < n; i++) {
		cin >> r;
		chmax(mx, r - mn);
		chmin(mn, r);
	}
	cout << mx << endl;
    return 0;
}

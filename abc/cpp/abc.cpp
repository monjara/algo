#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<int> r(n);
	for (int i = 0; i < n; i++) {
		cin >> r.at(i);
	}

	int mx = -2000000;
	int mn = 2000000;
	for (int i = 1; i < n; i++) {
		chmax(mx, r.at(i) - mn);
		chmin(mn, r.at(i));
	}
	cout << mx << endl;
    return 0;
}

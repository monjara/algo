#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n;
	cin >> n;
	int zeroLength = 2;
	int addAns = 0;

	if (10 <= n && n < 42) {
		zeroLength = 1;
	} else if (42 <= n && n < 100) {
		zeroLength = 1;
		addAns = 1;
	} else if (100 <= n) {
		zeroLength = 0;
		addAns = 1;
	}

	cout << "AGC";
	for (int i = 0; i < zeroLength; ++i) cout << "0";
	cout << n + addAns << endl;

	return 0;
}

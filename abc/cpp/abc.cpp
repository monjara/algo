#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n, p;
	cin >> n >> p;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (p > a) cnt++;
	}
	cout << cnt << endl;
	return 0;
}

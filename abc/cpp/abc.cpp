#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int x;
	cin >> x;
	int ans;
	if (x < 40) {
		ans = 40 - x;
		cout << ans << endl;
		return 0;
	}
	if (x < 70) {
		ans = 70 - x;
		cout << ans << endl;
		return 0;
	}
	if (x < 90) {
		ans = 90 - x;
		cout << ans << endl;
		return 0;
	}
	cout << "expert" << endl;
	return 0;
}

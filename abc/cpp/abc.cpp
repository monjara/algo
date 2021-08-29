#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	ll n;
	cin >> n;
	ll ans = 1;
	for (ll i = 0; i < 70; i++) {
		if (ans > n) {
			cout << i - 1 << endl;
			break;
		}
		ans *= 2;
	}
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int gcd(int x, int y) {
	if (x % y == 0) return y;
	else return gcd(y, x % y);
}

int main() {
	int x, y;
	cin >> x >> y;
	int ans = gcd(x, y);
	cout << ans << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	ll blue = a; 
	ll red = 0;
	for (int i = 1; i <= a; i++) {
		blue += b;
		red += c;
		if (blue <= red * d) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
    return 0;
}
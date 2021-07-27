#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	bool yes = true;
	if (b < c || d < a) yes = false;
	if (yes) cout << "Yes" << endl;
	else cout << "No" << endl;
    return 0;
}
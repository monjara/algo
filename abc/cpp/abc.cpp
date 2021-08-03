#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int x, y;
	cin >> x >> y;
	if (x == y) cout << x << endl;
	else cout << 3 - (x + y) << endl;
    return 0;
}
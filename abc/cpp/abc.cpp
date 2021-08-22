#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n;
	cin >> n;
	if (n < 126) cout << 4 << endl;
	else if (n > 211) cout << 8 << endl;
	else cout << 6 << endl;
    return 0;
}
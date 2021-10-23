#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int x;
	cin >> x;
	if (x == 0) cout << "No" << endl;
	else if (x % 100 == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

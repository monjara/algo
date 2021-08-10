#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int a, b;
	cin >> a >> b;
	if (b == 0) cout << "Gold" << endl;
	else if (a == 0) cout << "Silver" << endl;
	else cout << "Alloy" << endl;
    return 0;
}
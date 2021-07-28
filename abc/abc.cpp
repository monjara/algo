#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a != x) cout << a << " ";
	}
	cout << endl;
    return 0;
}
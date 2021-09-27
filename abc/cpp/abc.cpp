#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = a; i <= b; i++) {
		if (i % c == 0) {
			cout << i << endl;
			return 0;
		}
	}
	cout << "-1" << endl;
    return 0;
}

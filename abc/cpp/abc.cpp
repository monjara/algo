#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (c == 0) {
		if (a > b) {
			cout << "Takahashi" << endl;
			return 0;
		}
		cout << "Aoki" << endl;
		return 0;
	}

	if (c == 1) {
		if (a < b) {
			cout << "Aoki" << endl;
			return 0;
		}
		cout << "Takahashi" << endl;
		return 0;
	}
}

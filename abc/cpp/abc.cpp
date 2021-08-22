#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int s, t;
	cin >> s >> t;
	int cnt = 0;
	for (int a = 0; a <= 100; ++a) {
		for (int b = 0; b <= 100; ++b) {
			for (int c = 0; c <= 100; ++c) {
				if (a + b + c <= s && a * b * c <= t) cnt++;
			}
		}
	}
	cout << cnt << endl;
    return 0;
}
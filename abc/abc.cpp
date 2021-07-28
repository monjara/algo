#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int d_1, d_2;
		cin >> d_1 >> d_2;
		if (d_1 == d_2) cnt++;
		else cnt = 0;
		if (cnt == 3) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
    return 0;
}
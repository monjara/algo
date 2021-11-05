#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int fiveCnt = 0;
    int sevenCnt = 0;
	for (int i = 0; i < 3; i++) {
		int a;
		cin >> a;
		if (a == 5) fiveCnt++;
		if (a == 7) sevenCnt++;
	}
	if (fiveCnt == 2 && sevenCnt == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}

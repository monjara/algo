#include <bits/stdc++.h>

using namespace std;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}


int main() {
	// https://atcoder.jp/contests/dp/tasks/dp_a
	int n, h[100010], dp[100010];
	long long INF = 1LL << 60;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> h[i];
	for (int i = 0; i < 100010; i++) dp[i] = INF;

	dp[0] = 0;
	for (int i = 0; i < n; i++) {
		chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
		chmin(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
	}
	cout << dp[n - 1] << endl;
	return 0;
}
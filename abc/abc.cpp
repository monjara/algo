#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main(){
    ll n, k, h[101000], dp[101000];
	ll INF = 1LL << 60;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> h[i];
    for (int i = 0; i < 101000; i++) dp[i] = INF;
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
        }
    }
    cout << dp[n - 1] << endl;
    return 0;
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
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
    ll n, h[100003], dp[100003];
	ll INF = 1LL << 60;
    cin >> n;
    rep(i, n) cin >> h[i];
    rep(i, 100003) dp[i] = INF;
    dp[0] = 0;
    rep(i, n) {
        chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        chmin(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
    }
    cout << dp[n - 1] << endl;
    return 0;
}
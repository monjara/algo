#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll ans = 9999;
    for (ll i = 0; i < 10000; i++) {
        for (ll j = 0; j < 10000; j++) {
            ll tmp = a * i + b * j;
            if ((n - tmp) % c == 0 && tmp <= n) {
                chmin(ans, i + j + (n - tmp) / c);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
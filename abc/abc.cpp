#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;
    map<ll, ll> ab;
    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        ab[a] += b;
    }

    ll ans = 0;
    for (auto x : ab) {
        if (m == 0) break;
        ll tmp = min(m, x.second);
        ans += tmp * x.first;
        m -= tmp;
    }
    cout << ans << endl;
    return 0;
}
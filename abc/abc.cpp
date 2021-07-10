#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    ll n;
    ll mod = 1000000007;
    cin >> n;
    vector<ll> c(n);
    for (ll i = 0; i < n; i++) cin >> c.at(i);
    sort(c.begin(), c.end());
    ll ans = 1;
    for (ll i = 0; i < n; i++) {
        ans *= c.at(i) - i;
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}
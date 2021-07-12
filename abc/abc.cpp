#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;
    vector<ll> h(n);
    for (int i = 0; i < n; i++) cin >> h.at(i);
    sort(h.begin(), h.end());
    ll ans = 1100000000;
    for (int i = 0; i < n - k + 1; i++) {
        ll tmp = i + k - 1;
        ans = min(ans, h.at(tmp) - h.at(i));
    }
    cout << ans << endl;
    return 0;
}
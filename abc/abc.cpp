#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    vector<ll> b(n);
    for (int i = 0; i < n + 1; i++) cin >> a.at(i);
    for (int i = 0; i < n; i++) cin >> b.at(i);
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        ll f = min(a.at(i), b.at(i));
        a.at(i) -= f;
        b.at(i) -= f;
        cnt += f;

        ll s = min(a.at(i) + a.at(i + 1), b.at(i));
        a.at(i + 1) -= s;
        b.at(i) -= s;
        cnt += s;
    }
    cout << cnt << endl;
    return 0;
}
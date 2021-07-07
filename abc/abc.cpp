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

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll current = min(a.at(i), b.at(i));
        a.at(i) -= current;
        b.at(i) -= current;
        ans += current;

        ll next = min(a.at(i + 1), b.at(i));
        a.at(i + 1) -= next;
        b.at(i) -= next;
        ans += next;
    }
    cout << ans << endl;
    return 0;
}
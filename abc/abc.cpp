#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> b.at(i);
    for (int i = 0; i < n; i++) {
        if (i == 0) a.at(i) = b.at(i);
        else if (i == n - 1) a.at(i) = b.at(i - 1);
        else {
            a.at(i) = min(b.at(i - 1), b.at(i));
        }
    }
    ll ans = accumulate(a.begin(), a.end(), 0);
    cout << ans << endl;
    return 0;
}
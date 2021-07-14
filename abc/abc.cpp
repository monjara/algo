#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    double t, x;
    cin >> t >> x;
    double ans = t / x;
    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}
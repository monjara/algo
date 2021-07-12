#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n;
    cin >> n;
    double ans = 0;
    for (int i = 0; i < n; i++) {
        double a;
        cin >> a;
        ans += 1 / a;
    }
    ans = 1 / ans;
    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}
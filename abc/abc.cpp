#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++) cin >> v.at(i);
    sort(v.begin(), v.end());
    double ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans = (v.at(i) + v.at(i + 1)) / 2.0;
        if (i < n - 1) {
            v.at(i + 1) = (v.at(i) + v.at(i + 1)) / 2;
        }
    }
    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}
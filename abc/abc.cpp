#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n, l;
    cin >> n >> l;
    int mi = 10000;
    int mi_i = 10000;
    for (int i = 1; i <= n; i++) {
        if (chmin(mi, abs(l + i - 1))) mi_i = i;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (i != mi_i) ans += l + i - 1;
    }
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = c - (a - b);
    if (ans < 0) cout << 0 << endl;
    else cout << ans << endl;
    return 0;
}
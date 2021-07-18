#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
 
int main() {
    int n, a, x, y;
    cin >> n >> a >> x >> y;
    int ans;
    if (n >= a) {
        ans = a * x + (n - a) * y;
    }
    else ans = n * x;
    cout << ans << endl;
    return 0;
}
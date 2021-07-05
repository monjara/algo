#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            ans += 100 * i + j;
        }
    }
    cout << ans << endl;
    return 0;
}
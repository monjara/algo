#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int x;
    cin >> x;
    int ans = 1;
    for (int i = 2; i < x; i++) {
        int exp = i * i;
        while (exp <= x) {
            ans = max(ans, exp);
            exp *= i;
        }
    }
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
 
int main() {
    ll a, b, k;
    cin >> a >> b >> k;
    if (a <= k) {
        k -= a;
        a = 0;
    }
    else {
        a -= k;
        k = 0;
    }

    if (b <= k) b = 0;
    else b -= k;

    cout << a << " " << b << endl;
    return 0;
}
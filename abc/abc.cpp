#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
 
int main() {
    ll a, b, k;
    cin >> a >> b >> k;
    ll eat = min(a, k);
    a -= eat;
    k -= eat;
    eat = min(b, k);
    b -= eat;
    k -= eat;
    cout << a << " " << b << endl;
    return 0;
}
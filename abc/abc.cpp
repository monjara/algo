#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int n, d;
    cin >> n >> d;
    int ans;
    if (n % (2 * d + 1) == 0) ans = n / (2 * d + 1);
    else ans = n / (2 * d + 1) + 1;
    cout << ans << endl;
    return 0;
}
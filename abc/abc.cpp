#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int a, b;
    cin >> a >> b;
    int ans = b - a + 1;
    if (a > b) cout << 0 << endl;
    else cout << ans << endl;
    return 0;
}
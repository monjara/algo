#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n, h, w; 
    cin >> n >> h >> w; 
    int ans = (n - h + 1) * (n - w + 1);
    cout << ans << endl;
    return 0;
}
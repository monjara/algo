#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int H, W, h, w;
    cin >> H >> W >> h >> w;
    int ans = (H - h) * (W - w);
    cout << ans << endl;
    return 0;
}
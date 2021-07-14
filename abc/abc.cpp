#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a.at(i).at(j);
        }
    }
    vector<int> rowSum(h), columnSum(w);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            rowSum.at(i) += a.at(i).at(j);
            columnSum.at(j) += a.at(i).at(j);
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int ans = rowSum.at(i) + columnSum.at(j) - a.at(i).at(j);
            if (j == w - 1) cout << ans << endl;
            else cout << ans << " ";
        }
    }
    return 0;
}
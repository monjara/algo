#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int half_idx = n / 2 - 1;
    vector<int> d(n);
    for (int i = 0; i < n; i++) cin >> d.at(i);
    sort(d.begin(), d.end());
    int ans = d.at(half_idx + 1) - d.at(half_idx);
    cout << ans << endl;
    return 0;
}
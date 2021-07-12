#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p.at(i);
    sort(p.begin(), p.end());
    p.at(n - 1) = p.at(n - 1) / 2;
    int ans = accumulate(p.begin(), p.end(), 0);
    cout << ans << endl;
    return 0;
}
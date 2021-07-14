#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> ans;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            ans[a]++;
        }
    }
    int cnt = 0;
    for (auto x : ans) {
        if (x.second == n) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
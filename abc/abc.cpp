#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n, q;
    string s;
    cin >> n >> q >> s;

    vector<int> ac_cnt(n - 1, 0);
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'A' && s[i + 1] == 'C') ac_cnt.at(i) = 1;
    }

    vector<int> sm(n, 0);
    for (int i = 0; i < n - 1; i++) {
        sm.at(i + 1) = sm.at(i) + ac_cnt.at(i);
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int cnt = sm.at(r) - sm.at(l);
        cout << cnt << endl;
    }
    return 0;
}
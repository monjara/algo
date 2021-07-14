#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    string s;
    ll k;
    cin >> s >> k;
    ll size = min((ll)s.size(), k);
    for (int i = 0; i < k; i++) {
        if (s[i] - '0' >= 2) {
            cout << s[i] << endl;
            return 0;
        }
    }
    cout << 1 << endl;
    return 0;
}
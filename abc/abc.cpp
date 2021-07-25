#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    map<string, int> cnt;
    for (int i = 0; i < 4; i++) {
        string s;
        cin >> s;
        cnt[s]++;
    }
    if (cnt.size() == 4) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
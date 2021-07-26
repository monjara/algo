#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    string s;
    cin >> s;
    bool ok = true;
    for (int i = 0; i < 3; i++) {
        if (s[i] == s[i + 1]) ok = false;
    }
    if (ok) cout << "Good" << endl;
    else cout << "Bad" << endl;
    return 0;
}
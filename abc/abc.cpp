#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if (s[0] == s[1] && s[0] != s[2] && s[2] == s[3]) {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}
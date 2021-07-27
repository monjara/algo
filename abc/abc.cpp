#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    int tmp = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'A' && s[i] != 'T' && s[i] != 'G' && s[i] != 'C') {
            tmp = 0;
        }
        else {
            tmp++;
            chmax(ans, tmp);
        }
    }
    cout << ans << endl;
    return 0;
}
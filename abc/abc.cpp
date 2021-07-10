#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    string s;
    cin >> s;
    int ans = 753;
    string str_tmp;
    int tmp;
    for (int i = 0; i < s.size() - 2; i++) {
        int x = (s[i] - '0') * 100 + (s[i + 1] - '0') * 10 + s[i + 2] - '0';
        tmp = abs(753 - x);
        ans = min(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}
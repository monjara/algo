#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int idx = 1;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (idx != p) cnt++;
        idx++;
    }
    if (cnt > 2) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
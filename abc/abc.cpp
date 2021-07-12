#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int n, x;
    string s;
    cin >> n >> x >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') x++;
        else x--;
        if (x < 0) x = 0;
    }
    cout << x << endl;
    return 0;
}
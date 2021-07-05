#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) cout << c << endl;
    else if (b == c) cout << a << endl;
    else if (c == a) cout << b << endl;
    else cout << 0 << endl;
    return 0;
}
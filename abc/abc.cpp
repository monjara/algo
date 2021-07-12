#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (abs(c - a) <= d) cout << "Yes" << endl;
    else if (abs(b - a) <= d && abs(c - b) <= d) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
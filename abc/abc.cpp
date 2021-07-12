#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int a;
    string s;
    cin >> a >> s;
    if (a >= 3200) cout << s << endl;
    else cout << "red" << endl;
    return 0;
}
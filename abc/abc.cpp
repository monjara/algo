#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int d;
    cin >> d;
    if (d == 22) cout << "Christmas Eve Eve Eve" << endl;
    else if (d == 23) cout << "Christmas Eve Eve" << endl;
    else if (d == 24) cout << "Christmas Eve" << endl;
    else if (d == 25) cout << "Christmas" << endl;
    return 0;
}
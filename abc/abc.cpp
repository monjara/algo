#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int a, b;
    cin >> a >> b;
    if ((a + b) % 2 == 1) cout << "IMPOSSIBLE" << endl;
    else cout << (a + b) / 2 << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int x, a;
    cin >> x >> a;
    if (x < a) cout << 0 << endl;
    else cout << 10 << endl;
    return 0;
}
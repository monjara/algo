#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int a, b;
    cin >> a >> b;
    int res = (b - 1 + a - 2) / (a - 1);
    cout << res << endl;
    return 0;
}
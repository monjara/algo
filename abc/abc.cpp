#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << 21 - (a + b + c) << endl;
    return 0;
}
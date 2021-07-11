#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int a, b;
    cin >> a >> b;
    if (a <= b) {
        cout << a << endl;
    }
    else {
        cout << a - 1 << endl;
    }
    return 0;
}
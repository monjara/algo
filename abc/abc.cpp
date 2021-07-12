#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int k, x;
    cin >> k >> x;
    for (int i = x - k + 1; i <= x + k - 1; i++) {
        if (i == x + k - 1) cout << i;
        else cout << i << " ";
    }
    cout << endl;
    return 0;
}
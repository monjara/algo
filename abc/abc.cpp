#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int n, x;
    cin >> n >> x;
    int price = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (i % 2 == 1) a--;
        price += a;
    }
    if (price <= x) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
    double n;
    cin >> n;
    double res = n / 108 * 100;
    res = ceil(res);
    bool ok = true;
    if (floor(res * 1.08) != n) ok = false;
    if (ok) cout << res << endl;
    else cout << ":(" << endl;
    return 0;
}
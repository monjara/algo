#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
    ll a, b;
    cin >> a >> b;
    ll res = lcm(a, b);
    cout << res << endl;
    return 0;
}
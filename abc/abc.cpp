#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n, a, b;
	cin >> n >> a >> b;
	ll br = a + b;
	ll ans = (n / br) * a + min(a, n % br);
	cout << ans << endl;
    return 0;
}
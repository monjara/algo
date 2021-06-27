#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	ll a, b, c, k;
	cin >> a >> b >> c >> k;
	ll ans = 0;
	if (a + b >= k) {
		ans = min(a, k);
	} else {
		ll tmp = k - (a + b);
		ans = a - tmp;
	}
	cout << ans << endl;
    return 0;
}
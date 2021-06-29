#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
	ll n;
	cin >> n;
	ll ans = 1000000000003;
	for (int i = 1; i < 1000002; i++) {
		if (n % i == 0) {
			ans = min(ans, i + n / i - 2);
		}
	}
	cout << ans << endl;
    return 0;
}
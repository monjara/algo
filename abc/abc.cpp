#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	int n;
	cin >> n;
	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 3 != 0 && i % 5 != 0) {
			ans += i;
		}
	}
	cout << ans << endl;
    return 0;
}
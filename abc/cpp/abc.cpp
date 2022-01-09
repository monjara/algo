#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int f(int x) {
	int retval = (x * x) + (2 * x) + 3;
	return retval;
}

int main() {
	int t;
	cin >> t;
	int ans = f(f(f(t)+t)+f(f(t)));
	cout << ans << endl;
	return 0;
}

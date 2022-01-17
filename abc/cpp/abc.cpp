#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	int ans = -1;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (ans >= tmp) {
			cout << ans << endl;
			return 0;
		}
		ans = tmp;
	}
	cout << ans << endl;
	return 0;
}

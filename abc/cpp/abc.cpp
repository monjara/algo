#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	int ans = 0; 
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp >= 10) ans += tmp - 10;
	}
	cout << ans << endl;
	return 0;
}

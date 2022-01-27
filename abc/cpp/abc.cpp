#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	int ans = ((1 + n) * n) * 2;
	int sum = 0;
	for (int i = 0; i < 4 * n - 1; i++) {
		int tmp;
		cin >> tmp;
		sum += tmp;
	}
	ans -= sum;
	cout << ans << endl;
	return 0;
}

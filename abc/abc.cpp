#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int min_tmp = 1000;
	int max_tmp = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		max_tmp = max(max_tmp, tmp);
	}
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		min_tmp = min(min_tmp, tmp);
	}
	int res = min_tmp - max_tmp + 1;
	(res > 0) ? cout << res << endl : cout << 0 << endl;
	return 0;
}
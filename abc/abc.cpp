#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a.at(i);
	}
	int res = 0;
	int max = 0;
	for (int i = 2; i <= 1000; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (a.at(j) % i == 0) count++;
		}
		if (max < count) {
			max = count;
			res = i;
		}
	}
	cout << res << endl;
	return 0;
}
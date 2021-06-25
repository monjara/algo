#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	long long count = 0;
	int tmp = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		if (i == 0) tmp = a;
		while (tmp > a) {
			a++;
			count++;
		}
		tmp = a;
	}
	cout << count << endl;
	return 0;
}
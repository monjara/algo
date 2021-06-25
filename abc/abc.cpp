#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, d;
	cin >> n >> d;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (pow(d, 2) >= pow(x, 2) + pow(y, 2)) count++;
	}
	cout << count << endl;
	return 0;
}
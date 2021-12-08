#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n, 0);
	int x = 0;
	int y = 0;
	bool correct = true;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.at(a - 1)++;
		if (v.at(a-1) > 1) {
			y = a;
			correct = false;
		}
	}
	if (correct) {
		cout << "Correct" << endl;
		return 0;
	}

	for (int i = 0; i < n; i++) {
		if (v.at(i) == 0) x = i+1;
	}
	cout << y << " " << x << endl;
	return 0;
}

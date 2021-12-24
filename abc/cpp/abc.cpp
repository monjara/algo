#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	int length = s.length();
	int tmp = t[0] - s[0];
	if (tmp < 0) tmp = 26 + tmp;

	for (int i = 1; i < length; i++) {
		int n = t[i] - s[i];
		if (n < 0) n = 26 + n;

		if (tmp != n) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}

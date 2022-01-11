#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s;
	cin >> s;
	int size = s.size();
	for (int i = 0; i < size - 1; i++) {
		if (s[i] == s[i + 1]) {
			cout << i + 1 << " " << i + 2 << endl;
			return 0;
		}
	}
	for (int i = 0; i < size - 2; i++) {
		if (s[i] == s[i + 2]) {
			cout << i + 1 << " " << i + 3 << endl;
			return 0;
		}
	}
	cout << -1 << " " << -1 << endl;
	return 0;
}

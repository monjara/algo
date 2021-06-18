#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '.') break;
		count++;
	}
	for (int i = 0; i < count; i++) {
		cout << s[i];
	}
	cout << endl;
	return 0;
}
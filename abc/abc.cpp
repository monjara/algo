#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int res;
	if (s[0] == 'R' && s[1] == 'R' && s[2] == 'R') res = 3;
	else if (s[0] == 'R' && s[1] == 'R') res = 2;
	else if (s[1] == 'R' && s[2] == 'R') res = 2;
	else if (s[0] == 'R' || s[1] == 'R' || s[2] == 'R') res = 1;
	else res = 0;
	cout << res << endl;
	return 0;
}
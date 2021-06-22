#include <bits/stdc++.h>

using namespace std;

int main() {
	string 	s;
	cin >> s;
	bool flg = false;
	for (int i = 0; i < s.size(); i++) {
		if (i % 2 == 1 && islower(s[i])) flg = true;
		else if (i % 2 == 0 && isupper(s[i])) flg = true;
	}
	if (flg) cout << "No" << endl;
	else cout << "Yes" << endl;
	return 0;
}
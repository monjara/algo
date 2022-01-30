#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s;
	cin >> s;
	int length = s.length();
	int a_cnt = 0;
	for (int i = length - 1; i >= 0; i--) {
		if (s[i] == 'a') {
			s.erase(i, 1);
			a_cnt++;
		}
		else break;
	}
	int a_cnt_2 = 0;
	for (int i = 0; i < a_cnt; i++) {
		if (s[i] == 'a') a_cnt_2++;
		else break;
	}
	s.erase(0, a_cnt_2);
	if (equal(s.begin(), s.begin() + s.size()/2, s.rbegin())) {
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;
	return 0;
}

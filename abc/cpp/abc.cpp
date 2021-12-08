#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<string> v;

	string tmp;
	int check = 0;
	for (int i = 0; i < s.length(); i++) {
		tmp += s[i];
		if (isupper(s[i])) {
			check++;
			if (check == 2) {
				v.push_back(tmp);
				tmp.clear();
				check = 0;
			}
		}
	}
	sort(v.begin(), v.end(), [](string& a, string& b) {
		for (int i = 0; i < min(a.size(), b.size()); i++) {
			char a_char = tolower(a[i]);
			char b_char = tolower(b[i]);
			if (a_char != b_char) {
				return a_char < b_char;
			}
		}
		return a.size() < b.size();
	});
	for (int i = 0; i < v.size(); i++) {
		cout << v.at(i);
	}
	cout << endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	regex re(R"(\d{3})");
	bool check = regex_match(s, re);

	if (!check) {
		cout << "error" << endl;
		return 0;
	}
	cout << stoi(s) * 2 << endl;
	return 0;
}

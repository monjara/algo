#include<iostream>
using namespace std;

int main() {
	for (int i = 0; i < 1000001; i++) {
		string s;
		cin >> s;
		if (s == "0") return 0;
		int sum = 0;
		for (int j = 0; j < s.size(); j++) {
			sum += s[j] - '0';
		}
		cout << sum << endl;
	}
	return 0;
}
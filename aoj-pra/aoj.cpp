#include<iostream>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		s[i] = isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
	}
	cout << s << endl;
	return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<bool> s(13);
	vector<bool> h(13);
	vector<bool> c(13);
	vector<bool> d(13);
	for (int i = 0; i < n; i++) {
		char tmp_char; 
		int tmp_num;
		cin >> tmp_char >> tmp_num;
		if (tmp_char == 'S') s.at(tmp_num - 1) = true;
		else if (tmp_char == 'H') h.at(tmp_num - 1) = true;
		else if (tmp_char == 'C') c.at(tmp_num - 1) = true;
		else if (tmp_char == 'D') d.at(tmp_num - 1) = true;
	}
	for (int i = 0; i < 13; i++) {
		if (!s.at(i)) cout << "S " << i + 1 << endl;
	}
	for (int i = 0; i < 13; i++) {
		if (!h.at(i)) cout << "H " << i + 1 << endl;
	}
	for (int i = 0; i < 13; i++) {
		if (!c.at(i)) cout << "C " << i + 1 << endl;
	}
	for (int i = 0; i < 13; i++) {
		if (!d.at(i)) cout << "D " << i + 1 << endl;
	}
	return 0;
}
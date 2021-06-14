#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> one(3, vector<int>(10));
	vector<vector<int>> two(3, vector<int>(10));
	vector<vector<int>> three(3, vector<int>(10));
	vector<vector<int>> four(3, vector<int>(10));
	for (int i = 0; i < n; i++) {
		int b, f, r, v;
		cin >> b >> f >> r >> v;
		if (b == 1) {
			one.at(f - 1).at(r - 1) += v;
		}
		else if (b == 2) {
			two.at(f - 1).at(r - 1) += v;
		}
		else if (b == 3) {
			three.at(f - 1).at(r - 1) += v;
		}
		else if (b == 4) {
			four.at(f - 1).at(r - 1) += v;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			cout << " " << one.at(i).at(j);
		}
		cout << endl;
	}
	cout << "####################" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			cout << " " << two.at(i).at(j);
		}
		cout << endl;
	}
	cout << "####################" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			cout << " " << three.at(i).at(j);
		}
		cout << endl;
	}
	cout << "####################" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			cout << " " << four.at(i).at(j);
		}
		cout << endl;
	}
	return 0;
}
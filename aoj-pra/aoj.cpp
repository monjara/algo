#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	vector<vector<int>> a(r + 1, vector<int>(c + 1));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a.at(i).at(j);
		}
	}
	for (int i = 0; i < r; i++) {
		a.at(i).at(c) = accumulate(a.at(i).begin(), a.at(i).end(), 0);
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c + 1; j++) {
			a.at(r).at(j) += a.at(i).at(j);
		}
	}
	for (int i = 0; i < r + 1; i++) {
		for (int j = 0; j < c + 1; j++) {
			cout << a.at(i).at(j) << " ";
		}
		cout << endl;
	}
	return 0;
}
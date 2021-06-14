#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a.at(i);
	}
	for (int i = n - 1; i >= 0; i--) {
		i == 0 ? cout << a.at(i) : cout << a.at(i) << " ";
	}
	cout << endl;
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> a(3);
	cin >> a.at(0) >> a.at(1) >> a.at(2);
	sort(a.begin(), a.end());
	cout << a.at(0) << " " << a.at(1) << " " << a.at(2) << endl;
	return 0;
}
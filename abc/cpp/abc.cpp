#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v(6);
	for (int i = 0; i < 6; ++i) cin >> v.at(i);
	sort(v.begin(), v.end(), greater<int>{});
	cout << v.at(2) << endl;
	return 0;
}

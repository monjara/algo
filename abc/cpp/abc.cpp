#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	vector<int> a(10);
	for (int i = 0; i <= 9; i++) cin >> a.at(i);
	cout << a.at(a.at(a.at(0))) << endl;
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	int x;
	cin >> x;
	int res = 100 - (x % 100);
	cout << res << endl;
	return 0;
}
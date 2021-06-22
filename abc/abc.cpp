#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int c = a + b;
	int res;
	if (c >= 15 && b >= 8) res = 1;
	else if (c >= 10 && b >= 3) res = 2;
	else if (c >= 3) res = 3;
	else res = 4;
	cout << res << endl;
	return 0;
}
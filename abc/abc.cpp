#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (x > y) x < y + 3 ? cout << "Yes" << endl : cout << "No" << endl;
	else  x + 3 > y ? cout << "Yes" << endl : cout << "No" << endl;
	return 0;
}
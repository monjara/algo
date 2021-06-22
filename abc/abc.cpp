#include <bits/stdc++.h>

using namespace std;

int main() {
	char a, b, c;
	cin >> a >> b >> c;
	(a == b && b == c) ? cout << "Won" << endl : cout << "Lost" << endl;
	return 0;
}
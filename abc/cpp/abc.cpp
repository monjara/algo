#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a == 5 && b == 5 && c == 7) 
	|| (a == 5 && b == 7 && c == 5)
	|| (a == 7 && b == 5 && c == 5)) {
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}

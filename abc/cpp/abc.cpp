#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int a, b;
	cin >> a >> b;
	bool ok = a - b == 1 || a - b == -1 || a - b == 9 || a - b == -9;
	if (ok) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

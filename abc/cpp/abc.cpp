#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string a, b;
	cin >> a >> b;
	int sa = (a[0] - '0') + (a[1] - '0') + (a[2] - '0');
	int sb = (b[0] - '0') + (b[1] - '0') + (b[2] - '0');
	if (sa >= sb) cout << sa << endl;
	else cout << sb << endl;
	return 0;
}

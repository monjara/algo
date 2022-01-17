#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < 3; i++) {
		ans += (s[i] - '0') * 111;
	}
	cout << ans << endl;
	return 0;
}

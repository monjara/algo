#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s, ans;
	int a, b;
	cin >> s >> a >> b;
	a--;
	b--;
	for (int i = 0; i < s.length(); i++) {
		if (i == a) ans += s[b];
		else if (i == b) ans += s[a];
		else ans += s[i];
	}
	cout << ans << endl;
	return 0;
}

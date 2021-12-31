#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int l, r;
	string s;
	cin >> l >> r >> s;
	l--;
    r--;
	while (l < r) {
		swap(s[l], s[r]);
		l++;
		r--;
	}
	cout << s << endl;
	return 0;
}

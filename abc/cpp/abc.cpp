#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s;
	int a, b;
	cin >> s >> a >> b;
	a--;
	b--;
	string s_tmp = s;
	s[a] = s_tmp[b];
	s[b] = s_tmp[a];
	cout << s << endl;
	return 0;
}

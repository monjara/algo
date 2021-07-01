#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
	string s;
	cin >> s;
	bool ok = true;
	rep(i, s.size()) {
		if (i % 2 == 0) {
			if (s[i] == 'L') ok = false;
		}
		else {
			if (s[i] == 'R') ok = false;
		}
	}
	if (ok) cout << "Yes" << endl;
	else cout << "No" << endl;
    return 0;
}
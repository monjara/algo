#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
	ll s, p;
	cin >> s >> p;
	bool ok = false;
	for (int i = 1; i < 1000005; i++) {
		if (i * (s - i) == p) ok = true;
	}
	if (ok) cout << "Yes" << endl;
	else cout << "No" << endl;
    return 0;
}
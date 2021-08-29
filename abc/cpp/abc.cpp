#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n;
	cin >> n;
	map<string, int> cnt;
	bool flg = false;
	for (int i = 0; i < n; i++) {
		string s, t;
		cin >> s >> t;
		string name = s + " " + t;
		cnt[name]++;
		if (cnt[name] == 2) flg = true;
	}
	if (flg) cout << "Yes" << endl;
	else cout << "No" << endl;
    return 0;
}
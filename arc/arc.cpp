#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int k;
	string s;
	cin >> k >> s;
	if (s.size() <= k) cout << s;
	else {
		for (int i = 0; i < k; i++) {
			cout << s[i];
		}
		cout << "...";
	}
	cout << endl;
    return 0;
}
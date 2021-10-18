#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

void randomAccess(vector<ll> a, int p) {
	cout << a.at(p) << endl;
}

int main() {
	int q;
	cin >> q;
	vector<int> a;
	for (int i = 0; i < q; i++) {
		int idx, x;
		cin >> idx;
		if (idx != 2) cin >> x;
		if (idx == 0) a.push_back(x);
		else if (idx == 1) cout << a.at(x) << endl;;
		else if (idx == 2) a.pop_back();
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int q;
	cin >> q;
	deque<int> a;
	for (int i = 0; i < q; i++) {
		int idx, pd, x;
		cin >> idx;
		if (idx == 0) cin >> pd >> x;
		else cin >> pd;
		if (idx == 0) {
			if (pd == 0) a.push_front(x);
			else a.push_back(x);
		}
		else if (idx == 1) cout << a.at(pd) << endl;
		else if (idx == 2) {
			if (pd == 0) a.pop_front();
			else a.pop_back();
		}
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	list<int> l;
	list<int>::iterator itr = l.begin();
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a;
		if (a < 2) cin >> b;
		if (a == 0) itr = l.insert(itr, b);
		else if (a == 1) {
			for (int i = 0; i < abs(b); i++) {
				if (b > 0) itr++;
				else itr--;
			}
		}
		else if (a == 2) itr = l.erase(itr);
	}

	for (itr= l.begin();itr != l.end(); ++itr) {
		cout << *itr << endl;
	}
	return 0;
}

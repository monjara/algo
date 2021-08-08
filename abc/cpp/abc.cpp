#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n;
	cin >> n;
	map<int, int> a;
	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		a[num] = i;
	}
	int idx = 0;
	for (auto x : a) {
		if (idx == n - 2) {
			cout << x.second << endl;
			break;
		}
		idx++;
	}
    return 0;
}
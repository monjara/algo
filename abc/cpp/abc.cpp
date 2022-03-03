#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> b(m);
	for (int i = 0; i < n; i++) cin >> a.at(i);
	for (int i = 0; i < m; i++) cin >> b.at(i);
	for (int i = 0; i < m; i++) {
		bool ok = false;
		for (int j = 0; j < n; j++) {
			if (b.at(i) == a.at(j)) {
				ok = true;
				a.at(j) = 0;
				break;
			}
		}
		if (!ok) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n, l;
	cin >> n >> l;
	vector<string> v(n);
	for (int i = 0; i < n; i++) cin >> v.at(i);
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v.at(i);
	}
	cout << endl;
	return 0;
}

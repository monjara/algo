#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a.at(i);
	sort(a.begin(), a.end());
	decltype(a)::iterator res = unique(a.begin(), a.end());
	a.erase(res, a.end());
	cout << a.size() << endl;
	return 0;
}

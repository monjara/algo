#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a.at(i);
		sum += a.at(i);
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a.at(i) * 4 * m >= sum) cnt++;
	}
	if (cnt >= m) cout << "Yes" << endl;
	else cout << "No" << endl;
    return 0;
}
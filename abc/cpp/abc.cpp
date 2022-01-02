#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<string> vec(n);
	for (int i = 0; i < n; i++) cin >> vec.at(i);
	int tmp = -1;
	string ans;
	for (int i = 0; i < n; i++) {
		string target = vec.at(i);
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (target == vec.at(j)) cnt++;
		}
		if (cnt > tmp) {
			tmp = cnt;
			ans = vec.at(i);
		}
	}
	cout << ans << endl;
	return 0;
}

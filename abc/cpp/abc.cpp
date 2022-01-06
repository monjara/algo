#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n, k;
	cin >> n >> k;
	vector<char> v(k);
	for (int i = 0; i < k; i++) cin >> v.at(i);
	while (true) {
		string s_n = to_string(n);
		bool check = true;
		for (int i = 0; i < s_n.length(); i++) {
			for (int j = 0; j < k; j++) {
				if (s_n[i] == v.at(j)) {
					check = false;
				    break;
				}
			}
			if (!check) break;
		}

		if (check) {
			cout << n << endl;
			break;
		}

		n++;
	}
	return 0;
}

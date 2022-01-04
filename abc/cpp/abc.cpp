#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string a, b;
	cin >> a >> b;
	int size = min(a.length(), b.length());
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for (int i = 0; i < size; i++) {
		if ((a[i] - '0') + (b[i] - '0') > 9) {
			cout << "Hard" << endl;
			return 0;
		}
	}
	cout << "Easy" << endl;
	return 0;
}

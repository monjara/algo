#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	vector<int> d(n);
	rep(i, n) cin >> d.at(i);
	int res = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			res += d.at(i) * d.at(j);
		}
	}
	cout << res << endl;
    return 0;
}
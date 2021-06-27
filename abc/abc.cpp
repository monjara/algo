#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	ll h, n;
	cin >> h >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		h -= a;
	}
	if (h > 0) cout << "No" << endl;
	else cout << "Yes" << endl;
    return 0;
}
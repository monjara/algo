#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	ll n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) cin >> a.at(i);
	sort(a.begin(), a.end());
	bool exist = false;
	for (int i = 0; i < n - 1; i++) {
		if (a.at(i) == a.at(i + 1)) exist = true;
	}
	exist ? cout << "NO" << endl : cout << "YES" << endl;
    return 0;
}
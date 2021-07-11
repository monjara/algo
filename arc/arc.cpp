#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
	vector<ll> abc(3);
	for (int i = 0; i < 3; i++) cin >> abc.at(i);
	ll mod = 998244353;
	ll ans = 1;
	for (int i = 0; i < 3; i++) {
		ans *= (abc.at(i) * (abc.at(i) + 1)) / 2;
		ans %= mod;
	}
	cout << ans << endl;
    return 0;
}
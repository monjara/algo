#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	ll n;
	cin >> n;
	string ans;
	while (n > 0)
	{
		if (n % 2 == 0) {
			ans += 'B';
			n /= 2;
		}
		else {
			ans += 'A';
			n--;
		}
	}
	reverse(ans.begin(), ans.end());
	cout << ans << endl;
    return 0;
}
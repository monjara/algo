#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int a, b;
	cin >> a >> b;
	int diff = a - b;
	int ans = 1;
	for (int i = 0; i < diff; i++) ans *= 32;
	cout << ans << endl;
}

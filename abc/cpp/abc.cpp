#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n;
	string s;
	cin >> n >> s;
	if (s[n - 1] == 'o') cout << "Yes" << endl;
	else cout << "No" << endl;
    return 0;
}
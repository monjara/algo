#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	string s;
	cin >> s;
	if (s[s.size() - 1] == 's') cout << s << "es" << endl;
	else cout << s << "s" << endl;
    return 0;
}
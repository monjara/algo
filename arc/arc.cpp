#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n;
	cin >> n;
	if (n % 10 == 3) cout << "bon" << endl;
	else if (n % 10 == 0 ||
	         n % 10 == 1 ||
			 n % 10 == 6 ||
			 n % 10 == 8) {
				 cout << "pon" << endl;
			 }
	else cout << "hon" << endl;
    return 0;
}
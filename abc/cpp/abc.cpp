#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	string n;
	cin >> n;
	int zeroLength = 4 - n.length();
	for (int i = 0; i < zeroLength; i++) cout << "0";
	cout << n << endl;
	return 0;
}

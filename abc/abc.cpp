#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	vector<int> abc(3);
	for (int i = 0; i < 3; ++i) cin >> abc.at(i);
	sort(abc.begin(), abc.end());
	int ans = abc.at(2) + abc.at(1);
	cout << ans << endl;
    return 0;
}
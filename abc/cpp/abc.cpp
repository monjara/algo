#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int n;
	cin >> n;
	set<int> st;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		st.insert(tmp);
	}
	n == st.size()
	? cout << "Yes" << endl
	: cout << "No" << endl;
    return 0;
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
	string s;
	cin >> s;
	int cnt = 0;
	rep(i, s.size() / 2) {
		if (s[i] != s[s.size() - i - 1]) cnt++;
	}
	cout << cnt << endl;
    return 0;
}
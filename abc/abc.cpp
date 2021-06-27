#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	int n;
	cin >> n;
	map<string, int> cnt;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		cnt[s]++;
	}
	int ma = -1;
	for (auto i : cnt) {
		ma = max(ma, i.second);
	}
	for (auto i : cnt) {
		if (i.second == ma) cout << i.first << endl;
	}
    return 0;
}
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	map<int, int> cnt;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		cnt[a] = i;
	}
	for (int i = 1; i <= n; i++) {
		if (i == n) cout << cnt[i] << endl;
		else cout << cnt[i] << " ";
	}
    return 0;
}
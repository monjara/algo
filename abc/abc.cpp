#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
	int n, k, q;
	cin >> n >> k >> q;
	map<int, int> cnt;
	rep(i, n) {
		cnt[i + 1] = k;
	}
	rep(i, q) {
		int a;
		cin >> a;
		cnt[a]++;
	}
	rep(i, n) {
		cnt[i + 1] -= q;
		if (cnt[i + 1] > 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
    return 0;
}
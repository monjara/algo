#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	bool ok = false;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			if (i * j == n) ok = true;
		}
	}
	if (ok) cout << "Yes" << endl;
	else cout << "No" << endl;
    return 0;
}
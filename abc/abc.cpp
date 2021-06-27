#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int gcd(int a, int b){
    if (a % b == 0){
      return b;
	}
	return gcd(b, a % b);
}

int main(){
	int k;
	cin >> k;
	int ans = 0;
	for (int h = 1; h <= k; h++) {
		for (int i = 1; i <= k; i++) {
			for (int j = 1; j <= k; j++) {
				ans += gcd(h, gcd(i, j));
			}
		}
	}
	cout << ans << endl;
    return 0;
}
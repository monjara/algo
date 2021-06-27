#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	ll x;
	cin >> x;
	ll money = 100;
	ll i = 0; 
	while (1) {
		money = money + money / 100;
		i++;
		if (money >= x) {
			cout << i << endl;
			return 0;
		}
	}
    return 0;
}
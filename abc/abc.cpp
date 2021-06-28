#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll h, w;
	cin >> h >> w;
	ll ans;
	if (h == 1 || w == 1) ans = 1;
	else if (h % 2 == 0) ans = ((h / 2) * w);
	else if (w % 2 == 0) ans = (h * w) / 2;
	else ans = ((h * w) / 2) + 1; 
	cout << ans << endl;
    return 0;
}
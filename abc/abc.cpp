#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	int res = 0;
	res += 1000 * (n / 500);
	n %= 500;
	res += 5 * (n / 5);
	cout << res << endl;
    return 0;
}
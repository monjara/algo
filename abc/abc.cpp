#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n, k;
	cin >> n >> k;
	int res = 0;
	while (n >= 1) {
		n /= k;
		res++;
	}
	cout << res << endl;
    return 0;
}
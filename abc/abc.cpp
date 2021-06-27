#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n, k;
	cin >> n >> k;
	vector<int> N(n, 0);
	for (int i = 0; i < k; i++) {
		int d;
		cin >> d;
		for (int j = 0; j < d; j++) {
			int a;
			cin >> a;
			N.at(a - 1)++;
		}
	}
	int cnt = 0;
	for (int i : N) {
		if (i == 0) cnt++;
	}
	cout << cnt << endl;
    return 0;
}
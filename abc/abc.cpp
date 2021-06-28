#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;

	for (int i = 1; i <= 10000; i++) {
		int za = i * 8 / 100;
		int zb = i * 10 / 100;
		if (za == a && zb == b) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
    return 0;
}
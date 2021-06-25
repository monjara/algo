#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int money = 0;
	int i = 1; 
	while (1) {
		money += i;
		if (money >= n) break;
		i++;
	}
	cout << i << endl;
	return 0;
}
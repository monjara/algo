#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x = i / 10;
		if (i % 3 == 0) cout << " " << i;
		else {
			int x = i;
			do {
				if (x % 10 == 3) {
					cout << " " << i;
					break;
				}
				x /= 10;
			} while (x);
		}
	}
	cout << endl;
	return 0;
}
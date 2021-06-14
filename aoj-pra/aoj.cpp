#include<iostream>
#include<vector>
using namespace std;

int main() {
	for (int i = 0; i < 1000001; i++) {
		int n, x;
		cin >> n >> x;
		if (n == 0 && x == 0) return 0;
		int count = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					if (i + j + k == x) count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
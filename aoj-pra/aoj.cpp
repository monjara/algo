#include<iostream>
using namespace std;

int main() {
	for (int i = 0; i < 3000; i++) {
		int x, y;
		cin >> x >> y;
		if (x == 0 && y == 0) return 0;
		cout << min(x, y) << " " << max(x, y) << endl;
	}
	return 0;
}
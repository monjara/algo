#include<iostream>
using namespace std;

int main() {
	for (int i = 0; i < 10000; i++) {
		int x;
		cin >> x;
		if (x == 0) return 0;
		cout << "Case " << i+1 << ": " << x << endl;
	}
	return 0;
}
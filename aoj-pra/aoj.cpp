#include<iostream>
using namespace std;

int main() {
	for (int i = 0; i < 1000000; i++) {
		int h, w;
		cin >> h >> w;
		if (h == 0 && w == 0) return 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cout << "#";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main() {
	for (int i = 0; i < 51; i++) {
		int m, f, r;
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1) return 0;
		char out;
		if (m == -1 || f == -1) out = 'F';
		else if (m + f >= 80) out = 'A';
		else if (m + f >= 65) out = 'B';
		else if (m + f >= 50) out = 'C';
		else if (m + f >= 30) {
			if (r >= 50) out = 'C';
			else out = 'D';
		}
		else if (m + f < 30) out = 'F';

        cout << out << endl;
	}
	return 0;
}
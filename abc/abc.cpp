#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	int x, y;
	cin >> x >> y;
	bool exist = false;
	for (int i = 0; i <= x; i++) {
		for (int j = x - i; j >= 0; j--) {
			if (i + j == x && 2 * i + 4 * j == y) exist = true;
		}
	}
	exist ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}
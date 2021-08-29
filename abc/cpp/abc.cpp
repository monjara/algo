#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	double x_y;
	cin >> x_y;
	int xy = x_y * 10;
	int x =  xy / 10;
	int y = xy % 10;
	if (y <= 2) cout << x << '-' << endl;
	else if (y <= 6) cout << x << endl;
	else cout << x << '+' << endl;
    return 0;
}
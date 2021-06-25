#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	double D, H;
	cin >> n >> D >> H;
	double ans = 0;
	for (int i = 0; i < n; i++) {
		double d, h;
		cin >> d >> h;
		ans = max(ans, h - d * (H - h) / (D - d));
	}
	cout << fixed << setprecision(15) << ans << endl;
	return 0;
}
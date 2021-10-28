#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a.at(i).at(j);
		}
	}
	bool flg = true;
	for (int i = 0; i < h - 1; i++) {
		for (int j = i + 1; j < h; j++) {
			for (int k = 0; k < w - 1; k++) {
				for (int l = k + 1; l < w; l++) {
					if (a.at(i).at(k) + a.at(j).at(l) > a.at(j).at(k) + a.at(i).at(l)) flg = false;
				}
			}
		}
	}
	if (flg) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

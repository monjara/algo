#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<bool>> s(h, vector<bool>(w));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			char tmp;
			cin >> tmp;
			s.at(i).at(j) = (tmp == '.') ? false : true;
		}
	}

	int cnt = 0;
	for (int i = 0; i < h - 1; i++) {
		for (int j = 0; j < w - 1; j++) {
			int tmp_cnt = 0;
			for (int k = 0; k < 2; k++) {
				for (int l = 0; l < 2; l++) {
					if (s.at(i + k).at(j + l))tmp_cnt++;
				}
			}
			if (tmp_cnt == 1 || tmp_cnt == 3) cnt++;
		}
	}
	cout << cnt << endl;
    return 0;
}
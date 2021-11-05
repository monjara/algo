#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

vector<pair<char, int>> runLengthEncoding(string s) {
    int n = s.length();
 
    vector<pair<char, int>> res;
    char pre = s[0];
    int cnt = 1;
	for (int i = 1; i < n; i++) {
        if (pre != s[i]) {
            res.push_back({ pre, cnt });
            pre = s[i];
            cnt = 1;
        }
        else cnt++;
    }
 
    res.push_back({ pre, cnt });
    return res;
}

int main() {
	string w;
	cin >> w;
	sort(w.begin(), w.end());
	auto rl = runLengthEncoding(w);
	bool flg = true;
	for (int i = 0; i < rl.size(); i++) {
		if (rl.at(i).second % 2 == 1) flg = false;
	}
	if (flg) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

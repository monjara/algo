#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
	string contests[4] = {"ABC", "ARC", "AGC", "AHC"};
	bool check[4] = {};
	string s;
	for (int i = 0; i < 3; i++) {
		cin >> s;
		for (int j = 0; j < 4; j++) {
			if (s == contests[j]) check[j] = true;
		}
	}

    for (int i = 0; i < 4; i++) {
		if (!check[i]) cout << contests[i] << endl;
	}
    return 0;
}
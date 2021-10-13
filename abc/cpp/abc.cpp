#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

void output(vector<int> a, int n) {
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << " ";
		cout << a.at(i);
	}
	cout << endl;
}

void insectionSort(vector<int> a, int n) {
	for (int i = 0; i < n; i++) {
		int v = a.at(i);
		int j = i - 1;
		while (j >= 0 && a.at(j) > v) {
			a.at(j + 1) = a.at(j);
			j--;
		}
		a.at(j + 1) = v;
		output(a, n);
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a.at(i);

	insectionSort(a, n);
	return 0;
}

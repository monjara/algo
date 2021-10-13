#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int bubbleSort(int a[], int n) {
	int cnt = 0;
	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = n - 1; i > 0; i--) {
			if (a[i] < a[i - 1]) {
				swap(a[i], a[i - 1]);
				flag = true;
				cnt++;
			}
		}
	}
	return cnt;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int cnt = bubbleSort(a, n);
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << " ";
		cout << a[i];
	}
	cout << endl << cnt << endl;
}

#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int sectionSort(int a[], int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int minj = i;
		for (int j = i; j < n; j++) {
			if (a[j] < a[minj]) {
				minj = j;
			}
		}
		if (a[i] != a[minj]) cnt++;
		swap(a[i], a[minj]);
	}
	return cnt;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int cnt = sectionSort(a, n);
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << " ";
		cout << a[i];
	}
	cout << endl << cnt << endl;
	return 0;
}

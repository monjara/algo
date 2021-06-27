#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	map<int, int> cnt;
	for (int i = 1; i <= n; i++) {
		cnt[i] = 0;
	}
	for (int i = 0; i < n - 1; i++) {
		int tmp;
		cin >> tmp;
		cnt[tmp]++;
	}
	for (auto i : cnt) {
		cout << i.second << endl;
	}
    return 0;
}
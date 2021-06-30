#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
	int n;
	string s;
	cin >> n >> s;
	vector<int> vec(n);
	int i = 0;
	for (char ch : s) {
		int x = ch - 'a';
		vec.at(i) = x;
		i++;
	}
	int cnt = 0;
	for (int j = 0; j < n - 1; j++) {
		if (vec.at(j) != vec.at(j + 1)) cnt++;
	}
	cnt++;
	cout << cnt << endl;
    return 0;
}
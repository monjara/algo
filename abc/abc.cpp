#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
	int n;
	string s;
	cin >> n >> s;
	for (char ch : s) {
		int x = ch - 'A';
		x = (x + n) % 26;
		printf("%c", char(x + 'A'));
	}
	cout << endl;
    return 0;
}
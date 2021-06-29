#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
	int n;
	string s;
	cin >> n >> s;
	string t = s.substr(0, n / 2) + s.substr(0, n / 2);
	if (s.compare(t) == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
    return 0;
}
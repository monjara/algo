#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int k;
	string s;
	cin >> k >> s;
	if (s.size() <= k) {
		cout << s << endl;
	} else {
		for (int i = 0; i < k; i++) {
			if (i == k - 1) cout << s[i] << "..." << endl;
			else cout << s[i];
		}
	}
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	vector<int> ans(4, 0);
	for (int i = 0; i < n; i++) {
		string st;
		cin >> st;
		if (st[0] == 'A') ans.at(0)++;
		else if (st[0] == 'W') ans.at(1)++;
		else if (st[0] == 'T') ans.at(2)++;
		else if (st[0] == 'R') ans.at(3)++;
	}
	cout << "AC x " << ans.at(0) << endl;
	cout << "WA x " << ans.at(1) << endl;
	cout << "TLE x " << ans.at(2) << endl;
	cout << "RE x " << ans.at(3) << endl;
    return 0;
}
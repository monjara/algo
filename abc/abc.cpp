#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string s1;
	cin >> s1;
	int n = s1.size();
	string s2 = s1.substr(0, n / 2);
	string s3 = s1.substr((n + 3) / 2 - 1);

	bool ok = true;
	if (s1 != string(s1.rbegin(), s1.rend())) ok = false;
	if (s2 != string(s2.rbegin(), s2.rend())) ok = false;
	if (s3 != string(s3.rbegin(), s3.rend())) ok = false;
	ok ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}
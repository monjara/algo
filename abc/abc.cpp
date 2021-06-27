#include <bits/stdc++.h>
using namespace std;
 
int main(){
	double n;
	cin >> n;
	double p = 0;
	vector<double> x(n);
	for (int i = 0; i < n; i++) {
		cin >> x.at(i);
		p += x.at(i);
	}
	int ava = round(p / n);
	int res = 0;
	for (int i = 0; i < n; i++) {
		res += pow(x.at(i) - ava, 2);
	}
	cout << res << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int s, t, x;
	cin >> s >> t >> x;
    if (s <= t){
        if (s <= x && x < t) cout << "Yes" << endl;
        else cout << "No" << endl;
    } 
	else {
        if (s <= x || x < t) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
	return 0;
}

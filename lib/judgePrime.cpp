#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

bool isPrime(int num) {
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;
    else {
        double sqrtNum = sqrt(num);
        for (int i = 3; i <= sqrtNum; i += 2) {
            if (num % i == 0) return false;
        }
        return true;
    }
}

int main() {
	vector<int> a = {1, 2, 3, 4, 5, 6, 7};
	for (int i = 0; i < a.size(); i++) {
		string s;
		s = isPrime(a.at(i)) ? "素数" : "素数でない";
		cout << a.at(i) << ": " << s << endl;
	}
    return 0;
}
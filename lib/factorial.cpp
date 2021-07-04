#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int factorial(int x) {
    int sum = 1;
    for (int i = 1; i <= x; i++) {
        sum *= i;
    }
    return sum;
}

int main(){
	int num = 10;
	int factorial_ten = factorial(num);
	cout << num << "の階乗は" << factorial_ten << endl;
}
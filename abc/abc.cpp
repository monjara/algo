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
    ll p;
    cin >> p;
    ll cnt = 0;
    for (int i = 10; i > 0; i--) {
        if (p / factorial(i) < 1) continue;
        else {
            p -= factorial(i);
            cnt++;
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
}
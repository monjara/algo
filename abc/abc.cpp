#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int s;
    cin >> s;
    map<int, int> a;
    a[s] = 1;
    int tmp = s;
    for (int i = 2; i < 1100000; i++) {
        if (tmp % 2 == 0) {
            tmp = tmp / 2;
        }
        else {
            tmp = 3 * tmp + 1;
        }
        a[tmp]++;
        if (a[tmp] == 2) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    string n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        if (n[i] == '2') cnt++;
    }
    cout << cnt << endl;
    return 0;
}
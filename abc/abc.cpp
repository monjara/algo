#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p.at(i);
    int cnt = 0;
    for (int i = 1; i < n - 1; i++) {
        if (p.at(i - 1) < p.at(i) && p.at(i) < p.at(i + 1)) cnt++;
        if (p.at(i - 1) > p.at(i) && p.at(i) > p.at(i + 1)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
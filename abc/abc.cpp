#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; i++) cin >> l.at(i);
    sort(l.begin(), l.end());
    int tmp = accumulate(l.begin(), l.end(), 0) - l.at(n - 1);
    if (l.at(n - 1) < tmp) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
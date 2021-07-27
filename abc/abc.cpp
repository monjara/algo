#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b.at(i);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int check = 0;
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            check += a * b.at(j);
        }
        check += c;
        if (check > 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
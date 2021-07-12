#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n - 1);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    for (int i = 0; i < n; i++) cin >> b.at(i);
    for (int i = 0; i < n - 1; i++) cin >> c.at(i);
    int tmpA = a.at(0);
    for (int i = 0; i < n; i++) {
        ans += b.at(a.at(i) - 1);
        if (i > 0) {
            if (a.at(i) - tmpA == 1) {
                ans += c.at(tmpA - 1);
            }
        }
        tmpA = a.at(i);
    }
    cout << ans << endl;
    return 0;
}
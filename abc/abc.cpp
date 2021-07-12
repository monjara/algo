#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int A = 0, B = 0, C = 0;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (p <= a) A++;
        else if (p <= b) B++;
        else C++;
    }
    int ans = min(A, min(B, C));
    cout << ans << endl;
    return 0;
}
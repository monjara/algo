#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (i % 2 == 0) {
                cout << "Takahashi" << endl;
            }
            else cout << "Aoki" << endl;
            break;
        }
    }
    return 0;
}
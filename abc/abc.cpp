#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    ll n, h[110000];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> h[i];

    bool checked[110000];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (!checked[i]) {
            for (int j = i + 1; j < n; j++) { 
                if (h[j - 1] < h[j]) break;
                checked[j] = true;
                chmax(ans, j - i);
            } 
        }
    }
    cout << ans << endl;
    return 0;
}
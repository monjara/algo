#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> l(n);
    for (int i = 0; i < n; i++) cin >> l.at(i);
    int distance = 0;
    int idx = 1;
    for (int i = 0; i < n; i++) {
        distance += l.at(i);
        if (distance > x) break;
        idx++;
    }
    cout << idx << endl;
    return 0;
}
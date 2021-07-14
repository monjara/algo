#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    set<int> ans;
    for (int i = 0; i < n + m; i++) {
        int tmp;
        cin >> tmp;
        auto result = ans.insert(tmp);
        if (!result.second) {
            ans.erase(result.first);
        }
    }
    for (auto x : ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
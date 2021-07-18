#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
 
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for(int i = 0; i < n; i++) cin >> c.at(i);
    map<int, int> cnt;
    for (int i = 0; i < k; i++) cnt[c.at(i)]++;
    int size = cnt.size();
    for (int i = k; i < n; i++) {
        cnt[c.at(i)]++;
        cnt[c.at(i - k)]--;
        if (cnt[c.at(i - k)] == 0) cnt.erase(c.at(i - k));
        chmax(size, (int)cnt.size());
    }
    cout << size << endl;
    return 0;
}
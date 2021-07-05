#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    int n;
    cin >> n;
    map<string, int> mt;
    vector<int> height(n);
    for (int i = 0; i < n; i++) {
        string st;
        int num;
        cin >> st >> num;
        mt[st] = num;
        height.at(i) = num;
    }
    sort(height.begin(), height.end(), greater<int>());
    for (auto x : mt) {
        if (x.second == height.at(1)) {
            cout << x.first << endl;
        }
    }
    return 0;
}
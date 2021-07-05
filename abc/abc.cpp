#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    vector<int> a(3);
    for (int i = 0; i < 3; i++) cin >> a.at(i);
    sort(a.begin(), a.end());
    if (a.at(2) - a.at(1) == a.at(1) - a.at(0)) {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}
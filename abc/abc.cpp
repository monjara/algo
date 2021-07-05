#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (char c : s) {
        if (c == '6') cout << '9';
        else if (c == '9') cout << '6';
        else cout << c;
    }
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main() {
    char b;
    cin >> b;
    if (b == 'A') cout << 'T' << endl;
    if (b == 'T') cout << 'A' << endl;
    if (b == 'C') cout << 'G' << endl;
    if (b == 'G') cout << 'C' << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;
    map<ll, ll> cnt;
    vector<ll> peopleNum(n);
    vector<ll> mapOrder(n);
    for (ll i = 0; i < n; i++) {
        ll num;
        cin >> num;
        cnt[num] = k / n;
        peopleNum.at(i) = num;
        mapOrder.at(i) = num;
    }
    k %= n;
    sort(peopleNum.begin(), peopleNum.end());
    while (k > 0) {
        for (ll i = 0; i < n; i++) {
            if (k < 1) break;
            cnt[peopleNum.at(i)]++;
            k--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << cnt[mapOrder.at(i)] << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i) >> B.at(i);
    }
    int ans = 1000000;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            ans = min(ans, i == j ? A.at(i) + B.at(j) : max(A.at(i), B.at(j)));
        }
    }
    cout << ans << endl;
    return 0;
}
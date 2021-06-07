#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, S, D;
    cin >> N >> S >> D;
    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i) >> B.at(i);
    }
    bool dmg_flg = false;
    for (int i = 0; i < N; i++) {
        if (S > A.at(i) && D < B.at(i)) dmg_flg = true;
    }
    dmg_flg ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}
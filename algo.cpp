#include<bits/stdc++.h>    
using namespace std;    
    
int main(){    
    int N, X;
    cin >> N >> X;
    vector<double> alcohol(N);
    double alcohol_sum = 0;
    for (int i = 0; i < N; i++) {
        int V, P;
        cin >> V >> P;
        alcohol_sum += V * P;
        if (alcohol_sum > X * 100) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;    
}    

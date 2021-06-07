#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int kokei = A + B;
    int ans;
    if (kokei >= 15 && B >= 8) ans = 1;
    else if (kokei >= 10 && B >= 3) ans = 2;
    else if (kokei >= 3) ans = 3;
    else ans = 4;
    cout << ans << endl;
    return 0;
}
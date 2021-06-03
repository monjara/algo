#include<iostream>
using namespace std;

int digit_sum(int n){
   if(n < 10)  return n;
   return digit_sum(n / 10) + n % 10;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (digit_sum(i) >= A && digit_sum(i) <= B) sum += i;
    }
    cout << sum << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int min_a = 1000000;
	int max_a = -1000000;
	long long sum_a = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (min_a > a) min_a = a;
		if (max_a < a) max_a = a;
		sum_a += a;
	}
	cout << min_a << " " << max_a << " " << sum_a << endl;
	return 0;
}
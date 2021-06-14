#include<iostream>
using namespace std;

int main() {
	for (int i = 0; i < 1000000000; i++) {
		int a,b;
		string op;
		cin >> a >> op >> b;
		if (op == "+") cout << a + b << endl;
		else if (op == "-") cout << a - b << endl;
		else if (op == "*") cout << a * b << endl;
		else if (op == "/") cout << a / b << endl;
		else if (op == "?") return 0;
	}
	return 0;
}
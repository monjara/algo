#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int> q;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		q.push(a);

		if (q.size() < 2) continue;
		int before = q.front();
		int latest = q.back();
		if (before == latest) cout << "stay" << endl;
		else if (before > latest) cout << "down " << before - latest << endl;
		else if (before < latest) cout << "up " << latest - before << endl;
		q.pop();
	}
	return 0;
}

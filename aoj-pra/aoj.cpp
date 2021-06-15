#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main() {
	int n, m, l;
	cin >> n >> m >> l;
	vector<vector<int>> a(n, vector<int>(m));
	vector<vector<int>> b(m, vector<int>(l));
	vector<vector<int>> c(n, vector<int>(l));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a.at(i).at(j);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			cin >> b.at(i).at(j);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				c.at(i).at(j) += a.at(i).at(j) * b.at(j).at(k);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			cout << c.at(i).at(j) << " ";
		}
		cout << endl;
	}
	return 0;
}
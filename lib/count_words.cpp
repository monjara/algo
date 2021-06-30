#include <bits/stdc++.h>

using namespace std;

int find(string s, const string& word) {
  int count = 0;
  for (string::size_type pos = 0; (pos = s.find(word, pos)) != string::npos; pos += word.size()) {
    ++count;
  }
  return count;
}

int main() {
	// sample
	string s = "ZONeasdfasdfZoneZONe";
	int count = find(s, "ZONe");
	cout << count << endl;
	return 0;
}
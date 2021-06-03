#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> s(3);
    cin >> s.at(0) >> s.at(1) >> s.at(2);
    int count = 0;
    for (int i = 0; i <s.size(); i++)
    {
        if (s.at(i) == 1) {
            count++;
        }
    }
    cout << count << endl;;
    return 0;
}
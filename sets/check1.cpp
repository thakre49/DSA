#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<vector<int>> s;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    s.insert(v);
    cout << v.size();
    v.clear();
    cout << v.size();
    for (auto it : s)
    {
        cout << it[0] << it[1] << it[2];
    }

    return 0;
}
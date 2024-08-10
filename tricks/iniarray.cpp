#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[6] = {10};
    // cout << arr[1];
    vector<int> track(4, 1);
    cout << track[3];

    set<pair<int, int>> s;
    s.insert({1, 2});
    auto it = s.begin();
    pair<int, int> temp = *it;
    cout << temp.first << temp.second << endl;
    s.erase(temp);
    cout << s.size();
    return 0;
}

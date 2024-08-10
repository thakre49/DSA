#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, vector<int>> m;
    m[3].push_back(0);
    m[3].push_back(1);
    m[3].push_back(2);
    m[3].push_back(3);
    m[3].push_back(4);
    m[1].push_back(5);
    m[3].push_back(6);
    map<int, vector<int>>::iterator it = m.begin();
    vector<int>::iterator i;
    while (it != m.end())
    {
        int size = it->first;

        i = (it->second).begin();
        while (i != (it->second).end())
        {
            int count = 0;
            while (count < size)
            {
                cout << *i << endl;
                i++;
                count++;
            }
        }
        it++;
    }
    return 0;
}
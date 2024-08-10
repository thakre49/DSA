#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    //*************** to insert value in sets
    s.insert("abc");
    s.insert("aaa");
    s.insert("zaa");
    s.insert("mini");
    s.insert("abc"); // set stores unique elements

    //***************** to earse the entry in sets
    s.erase("aaa"); // it can take value and iterator also

    // ******************* to access the elements of sets
    // give values in sorted order
    // using auto
    for (auto it : s)
    {
        cout << it << endl;
    }

    // using iterator
    set<string>::iterator ite = s.begin(); // or we can use  auto ite = s.begin();
    while (ite != s.end())
    {
        cout << *ite << endl;
        ite++;
    }

    //****************** to check if given element is present
    auto fit = s.find("abc");
    if (fit != s.end())
    {
        cout << *fit << endl;
    }

    set<pair<char, int>> p;
    p.insert({'a', 1});
    for (auto i : p)
    {
        cout << i.first << endl
             << i.second;
    }
    return 0;
}
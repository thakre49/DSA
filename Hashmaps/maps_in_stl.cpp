// maps using stl
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //********************* creation
    unordered_map<string, int> m;

    //******************** insertion
    // 1
    pair<string, int> p = {"babbar", 3};
    m.insert(p);

    // 2
    pair<string, int> p2 = make_pair("love", 2);
    m.insert(p2);

    // 3
    m["mera"] = 1;

    // what will happen
    m["mera"] = 2; // it will overwrite the value only unique keys will be present

    //****************** searching
    cout << m["babbar"] << endl;
    cout << m.at("love") << endl;
    // cout << m.at("unknown key"); (it will throw an error because unknown key is not present)
    cout << m["unknown key"] << endl; // it will create a key with value 0;(it will create a key with value 0 in map)
    cout << m.at("unknown key") << endl;

    //***********to check the size
    cout << "printing the size of map :" << m.size() << endl;

    //************to check if key is present or not
    cout << "checking if key is present :" << m.count("love") << endl; // returns 1 if key is present
    cout << "checking if key is present :" << m.count("name") << endl;

    //*********** to delelete the key
    m.erase("love");
    cout << m.size() << endl;

    //***********traversal in maps
    // 1 using loops
    for (auto i : m)
    {
        cout << i.first << endl;
    }
    // 2 using iterators
    unordered_map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}
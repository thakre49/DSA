// vector in stl
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {2, 4};
    cout << v[1] << endl
         << v.size() << endl;
    vector<int> sat(5);
    for (int i = 0; i < sat.size(); i++)
    {
        cin >> sat[i];
    }
    for (int i = 0; i < sat.size(); i++)
    {
        cout << sat[i] << " ";
    }
    cout << "element of sat " << sat[1] << endl;
    cout << v.capacity() << endl;
    v.push_back(1);
    cout << v.capacity() << endl;
    v.push_back(2);
    cout << v.capacity() << endl;
    v.push_back(3);
    cout << v.capacity() << endl;
    cout << "first element " << v[1] << endl;
    cout << "first element " << v.front() << endl;
    cout << "first element " << v.back() << endl;
    v.pop_back();
    v.clear();
    cout << v.size();

    return 0;
}
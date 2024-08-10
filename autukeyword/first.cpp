#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> *v = new vector<int>;
    v->push_back(1);
    v->push_back(2);
    v->push_back(3);
    v->push_back(4);
    v->push_back(5);

    for (int i = 0; i < v->size(); i++)
    {
        cout << v->at(i) << " ";
        cout << endl;
    }

    // if the container is declared in heap memory
    for (auto i : *v)
    {
        cout << i << " ";
    }
    return 0;
}
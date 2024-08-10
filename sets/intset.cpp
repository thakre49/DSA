#include <bits/stdc++.h>
using namespace std;
int main()
{
    //*************** declaretion of sets
    set<int> s;
    s.insert(4);
    s.insert(1); // ****************insert function will return the iterator
    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(9);

    cout << s.size() << endl; //***************** gives the size of set

    //*************taversing in sets
    // 1st way
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 2nd way
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    //**************deletion in sets
    // 1) using value
    s.erase(2); // erase function can take iterator as well as values
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // 2) using iterator
    auto itr = s.begin();
    while (*itr != 4)
    {
        itr++;
    }
    s.erase(itr);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // 3) deleting range of a value (Complexity O(N) , N = number of values to delete)
    auto it2 = s.begin();
    advance(it2, 2);  //advances iterator by 2 steps
    auto it3 = s.begin();
    advance(it3, 4);
    s.erase(it2, it3); // delete elements from pointed by it2 to it3 -1
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    //*******************To checkk whether the number is present or not

    // 1) using find function
    if (s.find(5) != s.end())
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is not present" << endl;
    }

    // 2) using count function
    //it returns the number of occurances of a element
    if (s.count(8)) // returns 1 if the element is present else returns 0
    {
        cout << "Element is present"
             << endl;
    }
    else
    {
        cout << "Element is not present" << endl;
    }
    return 0;
}
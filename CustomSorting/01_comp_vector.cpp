// Comparator Function for vectors
#include <bits/stdc++.h>
using namespace std;
//************************ comparator function to sort in  decreasing order
bool comp(int a, int b)
{
    // Return false if you want to swap the value
    if (a < b)
    {
        return false;
    }
    else
    {
        return true;
    }
}
// another way to write this function
//  bool comp(int a, int b)
//  {
//      return a > b;
//  }

//****************Comparator Function for Sorting of vector of pairs
bool comp2(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
    {
        return false;
    }
    else if (a.first == b.first && a.second > b.second)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    // Vector of int
    vector<int> temp;
    temp.push_back(1);
    temp.push_back(10);
    temp.push_back(5);
    temp.push_back(45);
    temp.push_back(30);
    sort(temp.begin(), temp.end(), comp);
    // cout << "Printing vector of int" << endl;
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     cout << temp[i] << " ";
    // }
    // cout << endl;

    // Vector of pairs
    vector<pair<int, int>> V;
    V.push_back({1, 2});
    V.push_back({4, 4});
    V.push_back({2, 4});
    V.push_back({4, 7});
    V.push_back({3, 5});
    V.push_back({1, 1});
    sort(V.begin(), V.end(), comp2);
    cout << "Printing vector of pairs" << endl;
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i].first << " " << V[i].second << endl;
    }

    return 0;
}
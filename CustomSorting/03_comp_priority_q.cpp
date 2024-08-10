// Comparator Function for priority queue
#include <bits/stdc++.h>
using namespace std;
// We have to make class for comparator function of priority queue
class comp1
{
    // function must be public
    //***************function for the implementation of the min heap
public:
    // bool operator()(const int &a, const int &b)
    // {
    //     // if we have to exchange the values
    //     if (a > b)
    //     {
    //         return true;
    //     }
    //     // if we dont want to exchange the values
    //     else
    //     {
    //         return false;
    //     }
    // }

    //Another way *******************************
    //  bool operator()(const int &a, const int &b)
    // {
    //     return a < b;

    // }
};
//****************class for the comparator function of pq of pairs
class comp
{
public:
    // This function will keep the pairs on top which has lower first element
    // if the first element is similar than pair with lower second value will be on the top
    // bool operator()(const pair<int, int> &a, const pair<int, int> &b)
    // {
    //     if (a.first > b.first)
    //     {
    //         return true;
    //     }
    //     else if (a.first == b.first && a.second > b.second)
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }

    bool operator()(const pair<int, int> &a, const pair<int, int> &b)
    {
        if (a.first > b.first)
        {
            return true;
        }
        else if (a.first == b.first && a.second > b.second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    // for pq of the int for min heap
    // priority_queue<int, vector<int>, comp1> p1;
    // // Pushing Elements in pq
    // p1.push(1);
    // p1.push(5);
    // p1.push(4);
    // p1.push(2);
    // p1.push(7);
    // p1.push(3);

    // cout << "Priority queue (min heap) of int : " << endl;
    // while (!p1.empty())
    // {
    //     cout << p1.top() << " ";
    //     p1.pop();
    // }

    // pq of pairs
    priority_queue<pair<int, int>, vector<pair<int, int>>, comp> p;
    // Pushing Elements in pq
    p.push({6, 0});
    p.push({6, 1});
    p.push({6, 2});

    cout << "Priority queue  of pairs : " << endl;
    while (!p.empty())
    {
        cout << p.top().first << " "<<p.top().second<<endl;
        p.pop();
    }
    return 0;
}
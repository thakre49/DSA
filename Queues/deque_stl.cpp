// STL Deque
#include <iostream>
#include <deque>

using namespace std;
int main()
{
    deque<int> d;
    cout << "size " << d.size() << endl;

    d.push_front(12);
    d.push_back(14);
    cout << "front of the deque is : " << d.front() << endl;
    cout << "back of the deque is : " << d.back() << endl;
    d.pop_front();
    cout << "front of the deque is : " << d.front() << endl;
    cout << "back of the deque is : " << d.back() << endl;
    d.pop_back();
    if (d.empty())
    {
        cout << "deque is empty " << endl;
    }
    else
    {
        cout << "deque is not empty " << endl;
    }
    return 0;
}
// dwque
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> da = {1, 2, 3, 4};
    deque<int> d;
    d.push_front(4);
    cout << d[0] << " ";
    d.push_front(5);
    cout << d[0] << " ";
    d.push_back(3);
    cout << d[2] << " ";
    cout << d.empty() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << d[0];
    return 0;
}
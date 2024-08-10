// array in stl
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "element at index 2 is " << a.at(2) << endl;
    cout << "empty or not " << a.empty() << endl;
    cout << "first element " << a.front() << endl;
    cout << "last element " << a.back() << endl;
    return 0;
}
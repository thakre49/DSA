// check if sorted
#include <iostream>
using namespace std;
bool sorted(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    return sorted(arr + 1, size - 1);
}
int main()
{
    int arr[5] = {1, 1, 2, 2, 2};
    cout << sorted(arr, 5);
    return 0;
}
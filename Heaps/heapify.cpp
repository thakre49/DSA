#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int> &temp, int index)
{
    int i = index;
    int left = 2 * i;
    int right = (2 * i) + 1;

    if (left < temp.size() && temp[i] < temp[left])
    {
        i = left;
    }
    if (right < temp.size() && temp[i] < temp[right])
    {
        i = right;
    }

    if (i != index)
    {
        swap(temp[i], temp[index]);
        heapify(temp, i);
    }
}
int main()
{
    vector<int> arr = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, i);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
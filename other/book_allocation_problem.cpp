// book allocation problem
#include <iostream>
using namespace std;
bool ifpossible(int arr[], int n, int k, int mid)
{
    int pagesum = 0;
    int stdcount = 1;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            stdcount++;
            if (stdcount > k || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int main()
{
    int sum = 0;
    int ans = -1;
    int arr[] = {12, 34, 67, 90};
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    int s = 0;
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (ifpossible(arr, 4, 2, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans;
    return 0;
}
// Peak element in a mountain array
#include <iostream>
using namespace std;
int peakelement(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return mid;
}
int main()
{
    int arr[10] = {24, 69, 100, 99, 79, 78, 67, 36, 26, 19};
    cout << "peak element of the array is at index " << peakelement(arr, 10);

    return 0;
}
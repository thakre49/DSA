// Bubble sort with optimisation
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 8, 4, 9, 6, 2};
    for (int i = 1; i <= 5; i++)
    {
        bool swapped = false;
        for (int j = 0; j <= 6 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                int p = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = p;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
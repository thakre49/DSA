// selection sort
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 87, 8, 9, 75, 12, 45};
    for (int i = 0; i < 6; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[j] < arr[i])
            {
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
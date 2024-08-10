#include <iostream>
using namespace std;
int maxsum(int arr[][4], int row, int col)
{
    int sum;
    int msum = 0;

    for (int i = 0; i < row; i++)
    {
        sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > msum)
        {
            msum = sum;
        }
    }
    return msum;
}
int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << maxsum(arr, 3, 4);
    return 0;
}
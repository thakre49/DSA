// Square root of a nimber binary search
#include <iostream>
using namespace std;
int squareroot(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if ((mid * mid) == n)
        {
            return mid;
        }
        else if ((mid * mid) > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << "square root of " << n << " is " << squareroot(n);

    return 0;
}
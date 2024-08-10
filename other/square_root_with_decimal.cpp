// square root with decimal
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
double sqrt(int n, int place)
{

    int mod = squareroot(n);
    double ans = mod;
    double p = 1;
    for (int i = 1; i < place; i++)
    {
        double p = p / 10;
        for (int j = ans; j * j < n; j = j + p)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << "Square root of " << n << " is " << sqrt(n, 3);

    return 0;
}
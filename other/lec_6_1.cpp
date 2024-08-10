#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, ans = 0, dg, i = 0;
    cin >> n;
    while (n != 0)
    {
        dg = n & 1;
        ans = ans + (dg * pow(10, i));
        n = (n >> 1);
        i++;
    }
    cout << ans;
}
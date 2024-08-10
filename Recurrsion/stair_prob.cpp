// stairs problem
#include <iostream>
using namespace std;
long long int noways(long long int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    return noways(n - 1) + noways(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << noways(n);

    return 0;
}
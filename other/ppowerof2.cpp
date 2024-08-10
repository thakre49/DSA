#include <iostream>
using namespace std;
bool pot(int q)
{
    if ((q % 2) != 0 && q > 1)
    {
        return 0;
    }
    else if (q == 1)
    {
        return 1;
    }
    else
    {
        pot(q / 2);
    }
}
int main()
{
    int n;
    cin >> n;
    bool x = pot(n);
    cout << x;

    return 0;
}
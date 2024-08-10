// number to word
#include <iostream>
using namespace std;
void numtoword(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    numtoword(n, arr);
    cout << arr[digit] << " ";
}
int main()
{
    int n;
    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> n;
    numtoword(n, str);
    return 0;
}
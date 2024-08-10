#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "character is lowercase" << endl;
    }
    else
        cout << "character is uppercase";

    return 0;
}
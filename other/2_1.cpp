// data types and variables
#include <iostream>
using namespace std;
int main()
{
    bool b = -8; // returns 0 only when the input is zero else returns 1
    cout << b << endl;
    int a = 3;       // 4 bytes
    float f = 3.23;  // 8 bytes
    double d = 5.27; // 8 bytes
    char ch = 'k';   // 1 bytes only single character is valid
    cout << "bool =" << sizeof(b) << endl;
    cout << "int =" << sizeof(a) << endl;
    cout << "float =" << sizeof(f) << endl;
    cout << "double =" << sizeof(d) << endl;
    cout << "character =" << sizeof(ch) << endl;
    return 0;
}
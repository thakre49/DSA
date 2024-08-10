// we did not need to check the ascci table and use those values we can use the way demonstrated below
#include <iostream>
using namespace std;
int main()
{ // Uppercase Lowercase
    char ch = 'B';
    ch = ch - 'A' + 'a'; // To convert Uppercase to Lowercase
    // ch= ch-'a'+'a' //To convert Lowercase to Uppercase
    cout << ch << endl;
    if (ch >= 'A' && ch <= 'Z') // To check whether character is Uppercase or not
    {
        cout << "Uppercase character" << endl;
    }

    // Character to string
    char c = '1';
    // int temp = c; // it will give ascii value so we have to use c-'0'
    int temp = c - '0';
    cout << temp;
    return 0;
}
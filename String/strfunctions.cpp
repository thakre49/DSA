// Functions of strings
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str = "Babbar";
    cout << str.size() << endl;     // size of the string
    cout << str.length() << endl;   // size of the string
    cout << str.capacity() << endl; // total storage of the string
    str.pop_back();                 // pushback element in the string
    str.push_back('c');
    cout << str << endl;
    str = str + " " + "love"; // append the string
    cout << str << endl;

    str.erase(4, 1); // erase part of the string
    cout << str << endl;
    str.append("a"); // function to append
    cout << str << endl;
    // str.clear();

    // cout << "after clear" << str << endl;
    // cout << str.length() << endl;   // only elements are cleared
    // cout << str.capacity() << endl; // capacity remains the same
    cout << str.empty() << endl; // returns 1 if length of the string is zero
    str = "love babbar";
    cout << str[3] << endl;     // operator to access characters of string
    cout << str.at(10) << endl; // throws error when iterator is beyond length of the string always safe to use
    str.insert(4, "sir");       // to insert string at specific position 4 indicates base value
    cout << str << endl;
    str.replace(4, 3, " guruji");
    cout << str << endl; // to replace the specific part of the string
    string str2 = "youtube";
    str2.swap(str); // swaps the two strings
    cout << str << endl
         << str2 << endl;
    reverse(str.begin(), str.end());
    cout << str << endl; // function in stl to reverse the string

    return 0;
}
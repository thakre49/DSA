#include <iostream>
using namespace std;
int main()
{
    int i = 3;
    cout << sizeof(i) << endl;

    int arr[10] = {4, 2, 3, 23};
    int *ptr = arr;
    int *p;
    cout << "size " << sizeof(p) << endl;
    cout << "address of the first block" << arr << endl;
    cout << "address of the first block" << &arr[0] << endl;
    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << &arr << endl;
    cout << "1st " << sizeof(*arr) << endl;
    cout << "2nd " << sizeof(arr) << endl;
    cout << i[arr] << endl; //************
    cout << sizeof(&arr) << endl;
    cout << arr << endl;
    cout << sizeof(ptr) << endl;
    return 0;
}
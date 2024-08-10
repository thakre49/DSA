#include <iostream>
using namespace std;
int main()
{
   // int n = 5;
   // cout << &n << endl;
   // initilizing pointer in different
   /// int *p = 0;
   // p = &n;
   // cout << p << endl;
   // cout << *p;
   // return 0;
   int num = 5;
   int a = num;
   cout << num << endl;
   int *p = &num;
   (*p)++;
   cout << num;

   // copying a poiner

   int *q = p;
   cout << p << "--" << q << endl;
   cout << *p << "--" << *q;
   return 0;
}
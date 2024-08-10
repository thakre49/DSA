#include <iostream>
using namespace std;
void update(int &n)
{
    n++;
}
int main()
{
    /*/ int i = 5;
     // create a refrence variable
     int &j = i;
     cout << i << endl;
     i++;
     cout << i << endl;
     j++;
     cout << i << endl;
     cout << j;*/

    int i = 4;
    cout << " before " << i << endl;

    update(i);
    cout << " After " << i << endl;

    return 0;
}
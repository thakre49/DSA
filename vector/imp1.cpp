#include <bits/stdc++.h>
using namespace std;
void func1(int v[])
{
    v[4] = 100;
    return;
}
int main()
{
    int v[5] = {1};
    cout << "before :" << v[4] << endl;
    func1(v);
    cout << "after :" << v[4];
    return 0;
}
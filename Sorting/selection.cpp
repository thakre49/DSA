#include <bits/stdc++.h>
using namespace std;

// Custom swap function
void swap1(int &a, int &b)
{
   
   if(a!= b)
   {
    a = a + b;
    
    b = a - b;
    
    a = a - b;
   }   
   
}

// Selection Sort algorithm
void selection(vector<int>& v)
{
    int n = v.size();

    for (int i = 0; i < n-1; i++)
    {
        int ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[ind])
                ind = j;
        }
        swap1(v[i], v[ind]);
       
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n,0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    selection(v);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}

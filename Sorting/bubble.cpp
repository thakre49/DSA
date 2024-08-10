#include<bits/stdc++.h>
using namespace std;


//Bubble Sort -  
// Time Complexity -  O(n^2)
// Space Complexity - O(1)

void bubble(vector<int>&v)
{
    int n = v.size();

    for (int i = n-1; i >= 0 ; i--)
    {
        for (int j = 0; j < i; j++)
        {
           if(v[j] > v[j+1])
               swap(v[j], v[j + 1]);
        }
    }
}


int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n ; i++)
        cin >> v[i];
    bubble(v);
    for (int i = 0; i < n; i++)
        cout << v[i]<<" ";

        return 0;
}
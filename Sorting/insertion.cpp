#include<bits/stdc++.h>
using namespace std;


//Insertion Sort -  
// Time Complexity -  O(n^2)
// Space Complexity - O(1)

void insertion(vector<int>&v)
{
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = i ; j > 0; j--)
        {
            if(v[j] < v[j-1])
                swap(v[j], v[j - 1]);
                else
                    break;
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
    insertion(v);
    for (int i = 0; i < n; i++)
        cout << v[i]<<" ";

        return 0;
}
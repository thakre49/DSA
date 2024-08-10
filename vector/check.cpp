#include <bits/stdc++.h>
using namespace std;
int is_increasing(vector<int> &sample)
{
    if (sample.size() == 1)
    {
        return 1;
    }
    else
    {
        int length = 1;
        for (int i = 0; i < sample.size() - 1; i++)
        {
            if (sample[i] > sample[i + 1])
            {
                return -1;
            }
            length++;
        }

        return length;
    }
}

int main()
{
    vector<int> sample;
    cout << sample.size();
    // cout << is_increasing(sample);
    return 0;
}
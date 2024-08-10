#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> &nums)
{
    for (int i = nums.size() - 2; i >= 0; i--)
    {

        int pos = -1;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] > nums[i] && pos == -1)
            {
                pos = j;
            }
            else if (nums[j] > nums[i] && nums[j] < nums[pos])
            {
                pos = j;
            }
        }
        cout << pos;
        if (pos != -1)
        {

            swap(nums[i], nums[pos]);
            vector<int>::iterator it = nums.begin();
            int c = 0;

            while (c != i)
            {
                it++;
                c++;
            }
            it++;

            sort(it, nums.end());
            return;
        }
    }
    swap(nums[0], nums[nums.size() - 1]);
    return;
}

int main()
{
    vector<int> a;
    for (int i = 1; i <= 100; i++)
    {
        a.push_back(101 - i);
    }
    nextPermutation(a);
    // for (auto it : a)
    // {
    //     cout << it << " ";
    // }
}
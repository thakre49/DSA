// maximum occuring character in string
#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for (int j = 0; j < str.length(); j++)
    {
        arr[str[j] - 'a']++;
    }
    int max = 0;
    int it = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > max) // if we apply >= here than answer will be later character if we have same no of occuring for different characters
        {
            max = arr[i];
            it = i;
        }
    }
    char ch = it + 'a';
    cout << ch;

    return 0;
}
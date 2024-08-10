#include <bits/stdc++.h>
using namespace std;
class maxheap
{
    vector<int> heaparray;
    int size;
    // Constructor
public:
    maxheap()
    {
        heaparray.push_back(-1);
        size = 0;
    }

    // Function to insert complexity O(N)
    void insert(int value)
    {
        heaparray.push_back(value);
        size++;
        int index = size;
        while (index > 1)
        {
            int parent = index / 2;
            if (heaparray[index] > heaparray[parent])
            {
                swap(heaparray[index], heaparray[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    // Function to print
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << heaparray[i] << " ";
        }
        cout << endl;
    }
    // Function to delete
    void deletefromheap()
    {
        if (size == 0)
        {
            cout << "maxheap is empty";
            return;
        }
        heaparray[1] = heaparray[size];
        heaparray.pop_back();
        size--;
        int i = 1;
        int leftchild;
        int rightchild;
        while (i < size)
        {
            leftchild = 2 * i;
            rightchild = 2 * i + 1;

            if (leftchild <= size && heaparray[i] < heaparray[leftchild])
            {
                swap(heaparray[i], heaparray[leftchild]);
                i = leftchild;
            }
            else if (rightchild <= size && heaparray[i] < heaparray[rightchild])
            {
                swap(heaparray[i], heaparray[rightchild]);
                i = rightchild;
            }
            else
            {
                return;
            }
        }
    }
};
int main()
{
    maxheap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();
    h.deletefromheap();
    h.print();
    return 0;
}
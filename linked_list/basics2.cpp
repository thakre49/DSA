#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // Constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    node node1(10);
    cout << node1.data << endl;
    node node2(20);
    node *temp = &node1;
    node2.next = temp;
    cout << temp << endl;
    cout << &node1 << endl;
    cout << node2.next << endl;
    cout << temp->data;
    return 0;
}
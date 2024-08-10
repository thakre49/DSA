#include <iostream>
#include <map>
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
bool detectloop(node *head)
{
    map<node *, bool> visited;
    node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return 0;
}
void printlist(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return;
}
void insertathead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    insertathead(head, 20);
    insertathead(head, 30);
    insertathead(head, 40);
    insertathead(head, 50);
    insertathead(head, 60);
    insertathead(head, 70);
    // cout << head->data << endl;
    printlist(head);

    if (detectloop(head))
    {
        cout << "loop is present";
    }
    else
    {
        cout << "loop not present";
    }
}
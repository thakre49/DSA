// Basics of linked list
#include <iostream>
using namespace std;
class node // creation of node
{

public:
    int data;
    node *next; // Pointer of node type

    // Constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void insertatail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}
void printlist(node *&head)
{
    node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertatmiddle(node *&head, node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertathead(head, data);
        return;
    }
    // finding position -1
    node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertatail(tail, data);
        return;
    }
    // creating a new node
    node *midnode = new node(data);
    midnode->next = temp->next;
    temp->next = midnode;
}
void del(node *&head, int pos)
{

    node *temp = head;
    int cnt = 1;
    while (cnt != pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    node *d = temp->next;
    temp->next = temp->next->next;
    delete d;
    return;
}
int main()
{

    node *node1 = new node(10); // allocation of node in heap

    // cout << node1->next << endl;
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node 1
    node *head = node1;
    node *tail = node1;
    // cout << head << endl
    //    << &(head->data) << endl;

    insertathead(head, 20);
    insertathead(head, 30);
    insertatail(tail, 50);
    insertatail(tail, 60);
    // printlist(head);
    cout << endl;
    insertatmiddle(head, tail, 49, 4);
    printlist(head);
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;
    cout << endl;
    del(head, 3);
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;

    printlist(head);

    // cout << "head = " << head->data << endl;
    // cout << "tail = " << tail->data << endl;

    return 0;
}
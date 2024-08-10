#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    // Push Operation
    s.push(2);
    s.push(3);

    // Pop Operation
    s.pop();

    // Printing top element
    cout << s.top() << endl;

    // Check if Empty

    if (s.empty())
    {
        cout << "stack is empty";
    }
    else
    {
        cout << "Stack is not empty";
    }
    cout << endl;
    cout << "Size of the stack is : " << s.size();
    return 0;
}
#include <iostream>
using namespace std;
class stack
{
public:
    // Properties
    int *arr;
    int top;
    int size;
    // Behaviour
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (top < size - 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow";
        }
    }

    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            cout << "Stack is empty" << endl;
            return false;
        }
    }
};
int main()
{
    stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(45);
    st.push(46);
    st.push(47);

    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;

    if (st.isempty())
    {
        cout << "Stack is empty mere dost";
    }
    else
    {
        cout << "stack is not empty mere dost";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// LIFO(last in first out)
class stack
{
public:
    int *arr;
    int top;
    int size;
    // constructor
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
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
            top--
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    void peek()
    {
        if (top >= 0 && top < size)
            return arr[top];
        else
        {
            cout << "stack is empty" << endl;
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
            return false;
        }
    }
};
int main(){
    stack st(5);
    st.push(22);
    st.push(44);
       st.push(26);
    st.push(47);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    /*
    stack<int> s;

    s.push(2);
    s.push(3);
    s.pop();
    cout << "print top element" << s.top() << endl;
    if (s.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
    cout<<"size of stack is"<<s.size()<<endl;
    */
}

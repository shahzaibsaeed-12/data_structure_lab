#include <iostream>
using namespace std;
class Stack
{
private:
    string arr[5];
    int top;
public:
    Stack()
    {
        top = -1;
    }
    void push(string value)
    {
        if(top == 4)
        {
            cout<<"Stack Overflow!"<<endl;
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }
    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow!"<<endl;
        }
        else
        {
            cout<<arr[top]<<" undone."<<endl;
            top--;
        }
    }
    void peek()
    {
        if(top == -1)
        {
            cout<<"Stack is Empty!"<<endl;
        }
        else
        {
            cout<<"Current TOP action: "<<arr[top]<<endl;
        }
    }
    void display()
    {
        if(top == -1)
        {
            cout<<"Stack is Empty!"<<endl;
        }
        else
        {
            cout<<"Actions: ";
            for(int i=top; i>=0; i--)
            {
                cout<<arr[i]<<" | ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Stack s;
    s.push("Type Hello");
    s.push("Type World");
    s.push("Add !");
    s.push("Delete !");
    s.display();
    s.pop();
    s.pop();
    s.peek();
    s.display();
    return 0;
}


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
            cout<<arr[top]<<" removed from history."<<endl;
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
            cout<<"Current TOP page: "<<arr[top]<<endl;
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
            cout<<"Browsing History: ";
            for(int i=top; i>=0; i--)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Stack s;
    s.push("Google");
    s.push("YouTube");
    s.push("Facebook");
    s.push("GitHub");
    s.display();
    s.pop();
    s.peek();
    s.display();
    return 0;
}


#include <iostream>
using namespace std;
class Node{
public:
    string data;
    Node* next;
    Node(string value)
    {
        data = value;
        next = NULL;
    }
};
class Stack{
private:
    Node* top;
public:
    Stack(){
        top = NULL;
    }
    void push(string value)
    {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }
    void pop(){
        if(top == NULL)
        {
            cout<<"Stack Underflow!"<<endl;
        }
        else
        {
            Node* temp = top;
            cout<<temp->data<<" request handled."<<endl;
            top = top->next;
            delete temp;
        }
    }
    void peek()
    {
        if(top == NULL)
        {
            cout<<"Stack is Empty!"<<endl;
        }
        else
        {
            cout<<"Current TOP request: "<<top->data<<endl;
        }
    }
    void display()
    {
        if(top == NULL)
        {
            cout<<"Stack is Empty!"<<endl;
        }
        else
        {
            Node* current = top;
            cout<<"Patient Requests: ";
            while(current != NULL)
            {
                cout<<current->data<<" ";
                current = current->next;
            }
            cout<<endl;
        }
    }
};
int main()
{
    Stack s;
    s.push("P101");
    s.push("P102");
    s.push("P103");
    s.push("P104");
    s.display();
    s.pop();
    s.peek();
    s.display();
    return 0;
}


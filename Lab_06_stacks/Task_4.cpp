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
class Stack
{
private:
    Node* top;
public:
    Stack(){
        top = NULL;
    }
    void push(string value){
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }
    void pop(){
        if(top == NULL){
            cout<<"Stack Underflow!"<<endl;
        }
        else
        {
            Node* temp = top;
            cout<<temp->data<<" order processed."<<endl;
            top = top->next;
            delete temp;
        }
    }
    void peek(){
        if(top == NULL){
            cout<<"Stack is Empty!"<<endl;
        }
        else{
            cout<<"Current TOP order: "<<top->data<<endl;
        }
    }
    void display(){
        if(top == NULL){
            cout<<"Stack is Empty!"<<endl;
        }
        else{
            Node* current = top;
            cout<<"Restaurant Orders: ";
            while(current != NULL){
                cout<<current->data<<" ";
                current = current->next;
            }
            cout<<endl;
        }
    }
    bool isEmpty(){
        return top == NULL;
    }
};
int main(){
    Stack s;
    s.push("ORD-101");
    s.push("ORD-102");
    s.push("ORD-103");
    s.push("ORD-104");
    s.display();
    s.pop();
    s.pop();
    s.peek();
    s.display();
    if(s.isEmpty()){
        cout<<"Stack is Empty!"<<endl;
    }
    else{
        cout<<"Stack is not Empty!"<<endl;
    }
    return 0;
}


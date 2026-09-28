#include <iostream>
using namespace std;
class Node
{
public:
    int id;
    Node* next;
};
int main()
{
    Node* head=NULL;
    Node* current;
    Node* temp;
    int n,id,remove;
    cout<<"Enter number of products: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Product ID: ";
        cin>>id;
        Node* newNode=new Node();
        newNode->id=id;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
        }
        else{
            current=head;
            while(current->next!=NULL){
                current=current->next;
            }
            current->next=newNode;
        }
    }
    cout<<"Shopping Cart: ";
    current=head;
    while(current!=NULL){
        cout<<"P"<<current->id;
        if(current->next!=NULL)
            cout<<" -> ";
        current=current->next;
    }
    cout<<endl;
    cout<<"Remove Product: P";
    cin>>remove;
    current=head;
    temp=NULL;
    while(current!=NULL){
        if(current->id==remove)
            break;
        temp=current;
        current=current->next;
    }
    if(current==NULL){
        cout<<"Product Not Found"<<endl;
    }
    else{
        if(temp==NULL){
            head=head->next;
        }
        else{
            temp->next=current->next;
        }
        delete current;
    }
    cout<<"Updated Cart: ";
    current=head;
    while(current!=NULL){
        cout<<"P"<<current->id;
        if(current->next!=NULL)
            cout<<" -> ";
        current=current->next;
    }
    cout<<endl;
}

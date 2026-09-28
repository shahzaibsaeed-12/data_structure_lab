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
    int n,id;
    cout<<"Enter number of patients: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Patient ID: ";
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
    cout<<"Waiting Patients: ";
    current=head;
    while(current!=NULL){
        cout<<"P"<<current->id;
        if(current->next!=NULL)
            cout<<" -> ";
        current=current->next;
    }
    cout<<endl;
    if(head!=NULL){
        current=head;
        cout<<"Patient P"<<current->id<<" is being served."<<endl;
        head=head->next;
        delete current;
    }
    cout<<"Updated Queue: ";
    current=head;
    while(current!=NULL){
        cout<<"P"<<current->id;
        if(current->next!=NULL)
            cout<<" -> ";
        current=current->next;
    }
    cout<<endl;
}

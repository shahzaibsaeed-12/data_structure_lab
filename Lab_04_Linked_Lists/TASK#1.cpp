#include <iostream>
using namespace std;
class Node
{
public:
    int roll;
    Node* next;
};
int main()
{
    Node* head=NULL;
    Node* current;
    int n,roll,search;
    cout<<"Enter number of students: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Roll Number: ";
        cin>>roll;
        Node* newNode=new Node();
        newNode->roll=roll;
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
    cout<<"Registered Students: ";
    current=head;
    while(current!=NULL){
        cout<<current->roll;
        if(current->next!=NULL)
            cout<<" -> ";
        current=current->next;
    }
    cout<<endl;
    cout<<"Enter Roll Number to Search: ";
    cin>>search;
    current=head;
    bool found=false;
    while(current!=NULL){
        if(current->roll==search){
            found=true;
            break;
        }
        current=current->next;
    }
    if(found)
        cout<<"Student Found"<<endl;
    else
        cout<<"Student Not Found"<<endl;
}

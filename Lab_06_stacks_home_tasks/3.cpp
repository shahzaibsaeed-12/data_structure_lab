#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int x){
        data=x;
        next=NULL;
    }
};

class Stack{
    Node* top;

public:
    Stack(){
        top=NULL;
    }

    void PUSH(int x){
        Node* n=new Node(x);
        n->next=top;
        top=n;
    }

    void POP(){
        if(top!=NULL){
            Node* temp=top;
            top=top->next;
            delete temp;
        }
    }

    int TOP(){
        return top->data;
    }

    bool isEmpty(){
        return top==NULL;
    }
};

int main(){
    int arr[]={30,35,28,40,32};
    int n=5;
    int ans[5];

    Stack s;

    for(int i=n-1;i>=0;i--){

        while(!s.isEmpty() && s.TOP()<=arr[i]){
            s.POP();
        }

        if(s.isEmpty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.TOP();
        }

        s.PUSH(arr[i]);
    }

    cout<<"Temperature\tNext Greater"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t\t"<<ans[i]<<endl;
    }

    return 0;
}


#include<iostream>
using namespace std;

class TwoStacks{
    int arr[10];
    int top1,top2;

public:
    TwoStacks(){
        top1=-1;
        top2=10;
    }

    void PUSH1(int x){
        if(top1+1==top2){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            arr[++top1]=x;
        }
    }

    void PUSH2(int x){
        if(top1+1==top2){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            arr[--top2]=x;
        }
    }

    void POP1(){
        if(top1==-1){
            cout<<"Stack 1 is Empty"<<endl;
        }
        else{
            cout<<"Popped from Stack 1: "<<arr[top1--]<<endl;
        }
    }

    void POP2(){
        if(top2==10){
            cout<<"Stack 2 is Empty"<<endl;
        }
        else{
            cout<<"Popped from Stack 2: "<<arr[top2++]<<endl;
        }
    }

    void TOP1(){
        if(top1==-1){
            cout<<"Stack 1 is Empty"<<endl;
        }
        else{
            cout<<"Top of Stack 1: "<<arr[top1]<<endl;
        }
    }

    void TOP2(){
        if(top2==10){
            cout<<"Stack 2 is Empty"<<endl;
        }
        else{
            cout<<"Top of Stack 2: "<<arr[top2]<<endl;
        }
    }

    void DISPLAY(){
        cout<<"Available Books: ";
        for(int i=0;i<=top1;i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;

        cout<<"Returned Books: ";
        for(int i=top2;i<10;i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }
};

int main(){
    TwoStacks s;

    s.PUSH1(101);
    s.PUSH1(102);
    s.PUSH1(103);

    s.PUSH2(201);
    s.PUSH2(202);
    s.PUSH2(203);

    s.DISPLAY();

    s.TOP1();
    s.TOP2();

    s.POP1();
    s.POP2();

    cout<<"After POP Operations:"<<endl;

    s.DISPLAY();

    return 0;
}


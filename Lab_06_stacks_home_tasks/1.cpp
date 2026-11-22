#include<iostream>
using namespace std;

class Stack{
    char arr[100];
    int top;

public:
    Stack(){
        top=-1;
    }

    void PUSH(char x){
        arr[++top]=x;
    }

    void POP(){
        top--;
    }

    char TOP(){
        return arr[top];
    }

    bool isEmpty(){
        return top==-1;
    }
};

int main(){
    Stack s;
    string exp="{[()]}";
    bool balanced=true;

    for(int i=0;i<exp.length();i++){
        char ch=exp[i];

        if(ch=='(' || ch=='{' || ch=='['){
            s.PUSH(ch);
        }
        else{
            if(s.isEmpty()){
                balanced=false;
                break;
            }

            char x=s.TOP();

            if((ch==')' && x=='(') ||
               (ch=='}' && x=='{') ||
               (ch==']' && x=='[')){
                s.POP();
            }
            else{
                balanced=false;
                break;
            }
        }
    }

    if(!s.isEmpty()){
        balanced=false;
    }

    if(balanced){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }

    return 0;
}


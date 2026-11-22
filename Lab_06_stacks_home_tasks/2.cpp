#include<iostream>
using namespace std;

class Stack{
    int arr[100];
    int top;

public:
    Stack(){
        top=-1;
    }

    void PUSH(int x){
        arr[++top]=x;
    }

    int POP(){
        return arr[top--];
    }
};

int main(){
    Stack s;
    string exp="5 6 2 + * 12 4 / -";

    for(int i=0;i<exp.length();i++){

        if(exp[i]==' '){
            continue;
        }

        if(exp[i]>='0' && exp[i]<='9'){
            s.PUSH(exp[i]-'0');
        }
        else{
            int b=s.POP();
            int a=s.POP();
            int result;

            if(exp[i]=='+'){
                result=a+b;
            }
            else if(exp[i]=='-'){
                result=a-b;
            }
            else if(exp[i]=='*'){
                result=a*b;
            }
            else if(exp[i]=='/'){
                result=a/b;
            }

            s.PUSH(result);
        }
    }

    cout<<"Final Result: "<<s.POP()<<endl;

    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int a[2][3][4]={
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        },
        {
            {13,14,15,16},
            {17,18,19,20},
            {21,22,23,24}
        }
    };
    int x;
    int found=0;
    cout<<"3D Array:"<<endl;
    for(int i=0;i<2;i++){
        cout<<"Layer "<<i+1<<":"<<endl;
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                cout<<a[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<"Enter number to search: ";
    cin>>x;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                if(a[i][j][k]==x){
                    cout<<"Number found."<<endl;
                    cout<<"Layer = "<<i+1<<endl;
                    cout<<"Row = "<<j+1<<endl;
                    cout<<"Column = "<<k+1<<endl;
                    found=1;
                }
            }
        }
    }
    if(found==0){
        cout<<"Number not found."<<endl;
    }
}

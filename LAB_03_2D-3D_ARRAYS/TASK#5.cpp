#include <iostream>
using namespace std;
int main(){
    int computers[2][3][5]={
        {
            {1,0,1,0,1},
            {0,1,0,1,0},
            {1,1,0,0,1}
        },
        {
            {0,1,1,0,0},
            {1,0,1,0,1},
            {0,0,1,1,0}
        }
    };
    int available=0;
    int inUse=0;
    int labAvailable;
    int lab,row,computer;
    for(int i=0;i<2;i++){
        cout<<"Lab "<<i+1<<":"<<endl;
        for(int j=0;j<3;j++){
            cout<<"Row "<<j+1<<": ";
            for(int k=0;k<5;k++){
                cout<<computers[i][j][k]<<" ";
                if(computers[i][j][k]==0){
                    available++;
                }
                else{
                    inUse++;
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<"Total Available Computers = "<<available<<endl;
    cout<<"Total Computers In Use = "<<inUse<<endl;
    cout<<endl;
    cout<<"Available Computers in Each Lab:"<<endl;
    for(int i=0;i<2;i++){
        labAvailable=0;
        for(int j=0;j<3;j++){
            for(int k=0;k<5;k++){
                if(computers[i][j][k]==0){
                    labAvailable++;
                }
            }
        }
        cout<<"Lab "<<i+1<<" = "<<labAvailable<<endl;
    }
    cout<<endl;
    cout<<"Enter lab number: ";
    cin>>lab;
    cout<<"Enter row number: ";
    cin>>row;
    cout<<"Enter computer number: ";
    cin>>computer;
    lab--;
    row--;
    computer--;
    if(computers[lab][row][computer]==0){
        cout<<"The computer is available."<<endl;
    }
    else{
        cout<<"The computer is currently in use."<<endl;
    }
}

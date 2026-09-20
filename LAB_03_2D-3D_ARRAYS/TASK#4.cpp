#include <iostream>
using namespace std;
int main(){
    int beds[3][3][4]={
        {
            {1,0,1,0},
            {0,1,0,1},
            {1,1,0,0}
        },
        {
            {0,1,1,0},
            {1,0,0,1},
            {0,1,0,1}
        },
        {
            {1,1,1,0},
            {0,0,1,1},
            {1,0,0,0}
        }
    };
    int occupied=0;
    int available=0;
    int floorOccupied;
    int floor,ward,bed;
    for(int i=0;i<3;i++){
        cout<<"Floor "<<i+1<<":"<<endl;
        for(int j=0;j<3;j++){
            cout<<"Ward "<<j+1<<": ";
            for(int k=0;k<4;k++){
                cout<<beds[i][j][k]<<" ";
                if(beds[i][j][k]==1){
                    occupied++;
                }
                else{
                    available++;
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<"Total Occupied Beds = "<<occupied<<endl;
    cout<<"Total Available Beds = "<<available<<endl;
    cout<<endl;
    cout<<"Occupied Beds on Each Floor:"<<endl;
    for(int i=0;i<3;i++){
        floorOccupied=0;
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                if(beds[i][j][k]==1){
                    floorOccupied++;
                }
            }
        }
        cout<<"Floor "<<i+1<<" = "<<floorOccupied<<endl;
    }
    cout<<endl;
    cout<<"Enter floor number: ";
    cin>>floor;
    cout<<"Enter ward number: ";
    cin>>ward;
    cout<<"Enter bed number: ";
    cin>>bed;
    floor--;
    ward--;
    bed--;
    if(beds[floor][ward][bed]==0){
        cout<<"The selected bed is available."<<endl;
    }
    else{
        cout<<"The selected bed is occupied."<<endl;
    }
}

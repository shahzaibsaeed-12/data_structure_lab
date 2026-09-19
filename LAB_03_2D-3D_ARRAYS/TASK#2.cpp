#include <iostream>
using namespace std;
int main(){
	int arr[4][5]={
	{1,0,1,0,1},
	{1,0,1,1,1},
	{1,1,1,0,1},
	{1,0,0,0,0}
	};
	int occupy= 0;
	int empty = 0;
	int row, column;
	cout<<"Parking Space: "<<endl;
	
	for(int i=0; i<4; i++){
		for(int j =0 ; j<5; j++){
			cout<<arr[i][j]<<" ";
			if(arr[i][j]==1){
				occupy++;
			}
			else{
				empty++;
			}
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Occupied spaces = "<<occupy<<endl;
	cout<<"empty spaces = "<<empty<<endl;
	
	cout<<"Enter row and Cloumn u want to check is free or not "<<endl;
	cout<<"Enter Row ";
	cin>>row;
	cout<<"\n Enter column ";
	cin>>column;
	row--;
	column--;
	if(arr[row][column]==0){
		cout<<"Space Is available ";
	}
	else{
		cout<<"\n Space is occupied ";
	}
	
	cout<<"Total parking capacity = 20"<<endl;
	cout<<"Occupied = "<<occupy;
	
}

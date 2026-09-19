#include <iostream>
using namespace std;
int main(){
	int arrA[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	int arrB[3][3]={
	{9,8,7},
	{6,5,4},
	{3,2,1}
	};
	int arrC[3][3];
	cout<<"Matrix A:"<<endl;
	for(int i =0; i<3;i++){
		for(int j = 0; j<3;j++){
			cout<<arrA[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Matrix B:"<<endl;
	for(int i =0;i<3; i++){
		for(int j = 0; j<3;j++){
			cout<<arrA[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++){
		for(int j =0 ;j<3;j++){
			arrC[i][j]=arrA[i][j]+arrB[i][j];
		}
	}
	cout<<"Sum of matrix A and B: "<<endl;
	for(int i =0;i<3; i++){
		for(int j = 0; j<3;j++){
			cout<<arrC[i][j]<<" ";
		}
		cout<<endl;
	}
}

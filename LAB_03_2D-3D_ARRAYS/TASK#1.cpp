#include <iostream>
using namespace std;
int main(){
	int arr[6][4];
	int total;
	float avg;
	int highest=0;
	int student=0, topstudent=0;
	
	cout<<"enter marks of 6 students"<<endl;
	for(int i=0;i<6;i++){
		cout<<"student"<<i+1<<":"<<endl;
		for(int j=0;j<4;j++){
			cin >>arr[i][j];
		}
	}
	cout<<endl<<"Table: "<<endl;
	cout<<"English Math Programming Ai"<<endl;
	for(int i=0;i<6;i++){
		for(int j=0;j<4;j++){
			cout <<arr[i][j] <<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<6;i++){
		total = 0;
		for(int j=0;j<4;j++){
			total = total+arr[i][j];
		}
		avg = total/4.0;
		cout << "Student " <<i + 1 << " Total = " << total << endl;
        cout << "Student " <<i + 1 << " Average = " << avg<< endl;
        if(total > highest){
            highest = total;
            topstudent = i + 1;
        }
	}
	for(int j=0;j<4;j++){
		highest = arr[0][j];
		for( int i =1; i<6; i++){
			if(arr[i][j]>highest){
				highest=arr[i][j];
			}
		}
		if(j == 0){
            cout <<"English = " <<highest <<endl;
        }
        if(j == 1){
            cout <<"Mathematics = " <<highest <<endl;
        }
        if(j == 2){
            cout <<"Programming = " <<highest <<endl;
        }
        if(j == 3){
            cout <<"AI = " <<highest <<endl;
        }
	}
	cout<<endl;
	cout<<"Students with highest total marks = Student "<<topstudent <<endl;
	cout<<"Highest Total = "<<highest;
	
}

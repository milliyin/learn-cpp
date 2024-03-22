#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int row=0,col=0;
	do{
		cout<<"Enter the number of rows: ";
		cin>>row;
		if(row<= 0){
		cout<<"Wrong Input of row\n";
		continue;
		}
		cout<<"Enter the number of columns: ";
		cin>>col;
		if(col<= 0){
		cout<<"Wrong Input of columns\n";
		continue;
		}
	}while(row<=0 && col<=0);
	int arr[row][col];
	cout<<"\n_INPUT DATA_"<<endl;
	cout<<"arr[row][col]"<<endl;
	for(int i =0;i<row;i++){
		for(int j =0;j<col;j++){
		cout<<"arr["<<i+1<<"]["<<j+1<<"]=";
		cin>>arr[i][j];
		}
	}
	cout<<endl<<"_THE ARRAY_"<<endl;
	cout<<setw(13)<<"";
	for(int j =0;j<col;j++){
			cout<<setw(8)<<"COl:"<<j+1<<"| ";
		}
	cout<<endl;
	for(int i =0;i<row;i++){
			cout<<setw(10)<<"ROW:"<<i+1<<" | ";
		for(int j =0;j<col;j++){
			cout<<setw(8)<<arr[i][j]<<"| ";
		}
		cout<<endl;
	}
	
	
}

#include<iostream>
using namespace std;
int main(){
	int size = 0;
	do{
	cout<<"Enter the size for 1D arry(size>0): ";
	cin>>size;
	if(size<= 0){
		cout<<"Wrong Input\n";
	}
	}while(size<=0);

	int ar[size];
	for(int i =0;i<size;i++){
		cout<<"ar["<<i<<"]=";
		cin>>ar[i];
	}
	cout<<endl<<"_THE ARRAY_"<<endl;
	for(int i =0;i<size;i++){
		cout<<"ar["<<i<<"]=";
		cout<<ar[i]<<endl;
	}	
}

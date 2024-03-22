#include<iostream>
using namespace std;
int main(){
	int size=5;
	double fh[size],cl[size];
	for(int i=0;i<size;i++){
	cout<<"Enter the "<<i+1<<" Fahrenheit value: ";
	cin>>fh[i];
	cl[i]=(fh[i]-32)* 5/9; //(°F - 32) × 5/9 
	}
	cout<<endl<<"Fahrenheit | Celsius "<<endl;
	for(int i=0;i<size;i++){
		cout<<fh[i]<<"  |  "<<cl[i]<<endl;
	}
}

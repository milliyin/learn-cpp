#include<iostream>
using namespace std;
int main(){
	int size=5.0;
	double sum,avg;
	int values[size];
	for(int i=0;i<size;i++){
	cout<<"Enter the "<<i+1<<" value: ";
	cin>>values[i];
	sum += values[i];
	}
	avg = sum/size;
	cout<<"Sum= "<<sum<<endl;
	cout<<"Avg= "<<avg<<endl;
}

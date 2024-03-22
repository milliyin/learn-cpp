#include<iostream>
using namespace std;
int main(){
	int size=3;
	string names[size];
	int roll[size],search;
	double gpa[size];
	
	for(int i=0;i<size;i++){
	
	cout<<"Enter the student "<<i+1<<" name: ";
	cin>>names[i];
	cout<<"Enter the student "<<i+1<<" roll number: ";
	cin>>roll[i];
	cout<<"Enter the student "<<i+1<<" gpa: ";
	cin>>gpa[i];
	}
	cout<<"Enter the roll number to search: ";
	cin>>search;
	
	for(int i=0;i<size;i++){
		if(roll[i]==search){
			cout<<endl<<"----------------------"<<endl;
			cout<<"Name: "<<names[i]<<endl;
			cout<<"gpa: "<<gpa[i]<<endl;
			cout<<"roll-number: "<<roll[i]<<endl;
			break;
		}
	}
	
}

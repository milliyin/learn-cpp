#include<iostream>
using namespace std;
int main(){
	int arr[10],s1[5],s2[5];
	for(int i=0;i<10;i++){
		cout<<"arr["<<i<<"] ";
		cin>>arr[i];
	}
	for(int i=0;i<5;i++){
		s1[i] = arr[i];
		s2[i] = arr[i+5];
	}
	cout<<endl<<"Orginal"<<endl;
	for(int i=0;i<10;i++){
		cout<<"arr["<<i<<"]"<<arr[i]<<"  ";
	}
	cout<<endl<<"Spilted 1"<<endl;
	for(int i=0;i<5;i++){
		cout<<"s1["<<i<<"]"<<s1[i]<<"  ";
	}
	cout<<endl<<"Spilted 2"<<endl;
	for(int i=0;i<5;i++){
		cout<<"s2["<<i<<"]"<<s2[i]<<"  ";
	}
	
}

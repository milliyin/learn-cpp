#include <iostream>
using namespace std;
int main(){
	int year,mod;
	cout<<"Enter the Year: ";
	cin>>year;
	mod = year % 4;
	//cout<<mod;
	if(mod == 0){
		cout<<"Leap Year"<<endl;
		
	}else{
		cout<<"Not a Leap Year"<<endl;
	}
	mod = year % 2;
	if(mod == 0){
		cout<<"Even"<<endl;
		
	}else if(mod == 1){
		cout<<"odd"<<endl;
	}

}


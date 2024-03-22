#include<iostream>
using namespace std;
int main(){
	int num,i=10;
	cout<<"Enter the numebr less then 10: ";
	cin>>num;
	
	do{
		cout<<i<<" ";
		i--;
	}while(i>=num);
	
}

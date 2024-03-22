#include<iostream>
using namespace std;
int main(){
	int num,result;
	cout<<"Enter number for factorial: ";
	cin>>num;
	result = 1;
	for(int i=num;i>=1;i--){
		cout<<i<<"x";
		result=result*i;
	}
	cout<<" = "<<result;
	
}

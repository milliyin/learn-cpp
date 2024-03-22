#include<iostream>
using namespace std;
int main(){
	int num,pow,result;
	cout<<"Enter number: ";
	cin>>num;
	cout<<"Enter power: ";
	cin>>pow;
	result = 1;
	for(int i=pow;i!=0;i--){
		result = result*num;
	}
	cout<<num<<"^"<<pow<<"="<<result;
}

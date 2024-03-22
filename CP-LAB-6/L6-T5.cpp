#include<iostream>
using namespace std;
int main(){
	int num,i=1,sumeven,sumodd;
	cout<<"Enter the numebr: ";
	cin>>num;
	
	while(i<num){
		if(i%2 ==0){
			sumeven += i;
		} else
		{
			sumodd += i;
		}
		i++;
	}
	cout<<"Sum of even numbers:"<<sumeven<<endl;
	cout<<"Sum of odd numbers:"<<sumodd;
}

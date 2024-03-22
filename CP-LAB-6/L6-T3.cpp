#include<iostream>
using namespace std;
int main(){
	int num,out;
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num ==0 or num==1){
		out=0;
	} else if(num==2)
	{
		out=1;
	} else{
		int x = 2;
		while(x <= num/2){
			if(num%x ==0 ){
				out=0;
				break;
			} else {
				out = 1;
			}
			x++;
		}
		
	}
	if(out==0){
		cout<<"Prime number nahi hai";
	} else{
		cout<<"prime number hai";
	}
	
}

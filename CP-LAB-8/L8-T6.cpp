#include<iostream>
using namespace std;
int main(){
	int size=10;
	int num[size];
	for(int i=0;i<size;i++){
		cout<<"Enter number("<<i+1<<"): ";
		cin>>num[i];
	}
	int odd=0,even=0,pos=0,neg=0,zero=0,prim=0,compost=0, palindromes=0;
	for(int i=0;i<size;i++){
		int out;
		
		if(num[i]%2 ==0){
			even++;
		} else{
			odd++;
		}
		if(num[i] > 0){
			pos++;
		} else if(num[i] < 0){
			neg++;
		} else{
			zero++;
		}
		//----------------------------
	if(num[i] ==0 or num[i]==1){
		out=0;
	} else if(num[i]==2)
	{
		out=1;
	} else{
		int x = 2;
		while(x <= num[i]/2){
			if(num[i]%x ==0 ){
				out=0;
				break;
			} else {
				out = 1;
			}
			x++;
		}
		
	}
	if(out==0 num[i] !=3){
		compost++;
	} else{
		prim++;
	}
		//--------------------
		
	int ans;
	int temp=num[i];
	while(temp>0){
		int b = temp%10;
		ans = ans*10 + b;
		temp = temp/10;
	}
	if(num[i] == ans){
		palindromes++;
	}
	}
	
	cout<<"odd="<<odd<<endl;
	cout<<"even="<<even<<endl;
	cout<<"pos="<<pos<<endl;
	cout<<"neg="<<neg<<endl;
	
	cout<<"zero="<<zero<<endl;
	cout<<"prim="<<prim<<endl;
	cout<<"compost="<<compost<<endl;
	cout<<"palindromes="<<palindromes<<endl;
	
}

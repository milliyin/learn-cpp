#include <iostream>
using namespace std;
int main(){
int num;
cout<<"Enter Number to Check: ";
cin>>num;
if(num>0){
	cout<<num<<" is a Postive Number";
} else if (num < 0){
	cout<<num<<" is a Negative Number";
}else if(num == 0){
	cout<<"Zero";
}

}


#include <iostream>
using namespace std;
int main(){
	int num,dig;
	cout<<"Input 4 digit number: ";
	cin>>num;
	dig = num/100 % 10;
	cout<<"The 100th value is = "<<dig<<" Which is ";
	switch(dig){
		case 1:
		case 3:
		case 7:
		case 9:
			cout<<"odd";
			break;
		case 0:
		case 2:
		case 4:
		case 6:
		case 8:	
			cout<<"Even";
			break;
	}
}


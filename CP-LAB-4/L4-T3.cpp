#include <iostream>
using namespace std;
int main(){
	double num1,num2,sol;
	char op;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	cout<<"Enter the operation +,-,*,/,%: ";
	cin>>op;
	
	switch(op){
		case '+':
			sol = num1 + num2;
			break;
		case '-':
			sol = num1 - num2;
			break;
		case '*':
			sol = num1 * num2;
			break;
		case '/':
			sol = num1 / num2;
			break;
		case '%':
			sol = int(num1) % int(num2);
			break;
		default:
			cout<<"Wrong Operation";
			return 0;
	}
	cout<<"Answer = "<<sol;
}


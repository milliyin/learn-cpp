#include <iostream>
using namespace std;
int main(){
	char con='n';
	do{
	double num1, num2;
	char op;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;
	do{
	cout<<"Enter the operation +, -, /, *  :";
	cin>>op;
	}while(op != '+' && op != '-' && op != '/' && op != '*');
	
 if(op == '+'){
		cout<<"Addition:"<<num1+num2;
	}
	else if(op == '-'){
		cout<<"Subtraction:"<<num1-num2;
	}
	else if(op == '*'){
		cout<<"Multipltaion:"<<num1*num2;
	}
	else if(op == '/'){
		cout<<"Devison:"<<num1/num2;
	}
	cout<<endl<<"------"<<endl<<"Do you want to do more?[y/n]:";
	cin>>con;
	}while(con!='n');
}

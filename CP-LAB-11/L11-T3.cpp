#include<iostream>
using namespace std;
int main(){
	int x = 99;
	int *a = &x;
	int **b = &a;
	int ***c = &b;
	cout<<x<<endl; // value of x;
	cout<<&x<<endl; // address of x;
	cout<<a<<endl; // address of x;
	cout<<*a<<endl; // value of x;
	cout<<&a<<endl; //address of a;
	cout<<endl;
	cout<<b<<endl; //address of a
	cout<<*b<<endl; //value of a = address of x;
	cout<<**b<<endl;//value of x
	cout<<&b<<endl; // address of b
	cout<<endl;
	cout<<c<<endl; // address of b
	cout<<*c<<endl;//value of b = address of a;
	cout<<**c<<endl; //value of a = address of x;
	cout<<***c<<endl; //value of x;
	cout<<&c<<endl; //address of c;

	
}

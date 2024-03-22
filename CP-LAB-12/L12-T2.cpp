#include<iostream>
using namespace std;
float radius();
double area(double);
int main()
{
	float r = radius();
	double x = area(r);
	cout<<"AREA OF CIRCLE IS : "<<x<<endl;
	
}
float radius()
{
	float rad;
	cout<<"ENTER VALUE OF RADIUS : ";
	cin>>rad;
	return rad;
}
double area(double a)
{
	double arr;
	arr= 3.14*a*a;
	return arr;
}
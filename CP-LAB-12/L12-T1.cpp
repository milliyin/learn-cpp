#include<iostream>
using namespace std;
void Sum(float , float );
void Multiply(float , float);
float subtract(float,float);
void Divide(float,float);
int main()
	{
		int a,b;
		Sum(10.5,2.332);
		Multiply(10.2,4);
		float z = subtract(48.3,19.5);
		cout<<"SUBTRACTION IS : "<<z<<endl;	
		cout<<endl<<"ENTER VALUES FOR a : ";
		cin>>a;
		cout<<"ENTER VALUE FOR b : ";
		cin>>b;
		Divide(a,b);
	}
void Sum(float x ,float y)
{
	float sum;
	sum = x+y;
	cout<<"SUM IS : "<<sum<<"\n";
}
void Multiply(float a, float b)
{
	double result;
	result = a*b;
	cout<<"MULTIPLICATION IS : "<<result<<endl;
}
float subtract(float m,float n)
{
	float sub;
	sub= m-n;
	return sub;
}
void Divide(float a,float b)
{

	double div;
	div = a/b;
	cout<<"\n DIVISION : "<<div<<endl;
	
}
#include<iostream>
using namespace std;
int main(){
	int x,y;
	int *a,*b,*c;
	x = 5;
	y = 10;
	//-swape
	a = &x;
	b = &y;
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	cout<<x<<"  "<<y;
}

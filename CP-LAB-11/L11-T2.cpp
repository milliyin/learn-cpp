#include<iostream>
using namespace std;
int main(){
	int x,y,z,max;
	x = 90;
	y = 99;
	z = 30;
	
	int *a,*b,*c,*maxx;
	a = &x;
	b = &y;
	c = &z;
	maxx = &x;
	if(*maxx < *b){
		maxx = b;
	}else if (*maxx < *c){
		maxx = c;
	}
	cout<<*maxx;
}

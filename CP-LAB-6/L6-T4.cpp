#include<iostream>
using namespace std;
int main(){
	
	int a=2,b;
	double sum=1;
	while(a<=100){
		sum = sum + 1.0/a;
		a++;
	}
	cout<<sum;
	
}

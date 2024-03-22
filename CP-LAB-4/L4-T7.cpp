#include <iostream>
using namespace std;
int main(){
	double ag1,ag2,ag3,sum;
	cout<<"Enter The angle 1: ";
	cin>>ag1;
	cout<<"Enter The angle 2: ";
	cin>>ag2;
	cout<<"Enter The angle 3: ";
	cin>>ag3;
	sum = ag1 + ag2 + ag3;
	switch(sum == 180){
		case 1:
			cout<<"Valid Triangle";
			break;
		case 0:
			cout<<"Invalid Triangle";
			break;
	}
}


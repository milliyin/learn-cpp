#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the number: ";
	cin>>x;
	int y = 1,n;
	int z = 0;
	cout<<z<<" "<<y<<" ";
	n = y + z;
	
	while(n<=x){
	cout<<n<<" ";	
	z = y;
	y = n;
	n = y + z;
	}
}

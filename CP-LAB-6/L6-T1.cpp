#include<iostream>
using namespace std;
int main(){
	int x,n;
	cout<<"Enter the range start to end: ";
	cin>>x>>n;
	
	while(x<=n-1){
		if(x%2 ==0){
			cout<<x<<" ";
		}
		x++;
	}
}

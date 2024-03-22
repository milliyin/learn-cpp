#include<iostream>
using namespace std;
int main(){
	int arr[2][2]={{1,2},{3,4}};
	cout<<"\nNormal: \n";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	int c = arr[0][0];
	arr[0][0]=arr[1][1];
	arr[1][1] = c;
	
	arr[0][1]= -(arr[0][1]);
	arr[1][0]= -(arr[1][0]);
	
	cout<<"\nAdjoint: \n";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
}

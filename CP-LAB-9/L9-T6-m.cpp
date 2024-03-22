#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a[3][3];
	int b[3][3];
	int c[3][3];
	cout<<"Enter Data for first arry: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
	cout<<"Enter Data for Second arry: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"b["<<i<<"]["<<j<<"]=";
			cin>>b[i][j];
		}
	}
	cout<<"Multiplication:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		c[i][j]=(a[i][0]*b[0][j])+(a[i][1]*b[1][j])+(a[i][2]*b[2][i]);
		cout<<setw(5)<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	}
//c[0][0]=(a[0][0]*b[0][0])+(a[0][1]*b[1][0])+(a[0][2]*b[2][0]);
//c[0][1]=(a[0][0]*b[0][1])+(a[0][1]*b[1][1])+(a[0][2]*b[2][1]);
//c[0][2]=(a[0][0]*b[0][2])+(a[0][1]*b[1][2])+(a[0][2]*b[2][2]);
	

	
	


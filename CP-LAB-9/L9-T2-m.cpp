#include<iostream>
using namespace std;
int main(){
	int arry[2][2];
	int arry2[2][2];
	int arry3[2][2];
	char ch;
	cout<<"Is this for add or subtract?(+/-) ";
	cin>>ch;
	cout<<"Enter Data for first arry: "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"arry["<<i<<"]["<<j<<"]=";
			cin>>arry[i][j];
		}
	}
	cout<<"Enter Data for first arry: "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"arry2["<<i<<"]["<<j<<"]=";
			cin>>arry2[i][j];
			switch(ch){
				case '+':
				arry3[i][j] = arry[i][j]+arry2[i][j];
				break;
				case '-':
				arry3[i][j] = arry[i][j]-arry2[i][j];
				break;
			}
			
		}
	}
	cout<<"Answer:"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"arry3["<<i<<"]["<<j<<"]="<<arry3[i][j]<<endl;
		}
	}
	
}

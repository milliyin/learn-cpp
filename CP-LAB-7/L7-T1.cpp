#include<iostream>
using namespace std;
int main(){
	int m1,m2,m3;
	double average;
	char con='n';
	do{
	cout<<"Enter the marks of student1:";
	cin>>m1;
	cout<<"Enter the marks of student2:";
	cin>>m2;
	cout<<"Enter the marks of student3:";
	cin>>m3;
	average = (m1+m2+m3)/3.0;
	cout<<"Average="<<average<<endl;
	cout<<"------"<<endl<<"Do you want to take another set of average?[y/n]:";
	cin>>con;
	}while(con!='n');
	
}

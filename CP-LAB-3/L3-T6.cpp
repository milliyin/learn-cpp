#include <iostream>
using namespace std;
int main(){
int sal, grade;
cout<<"Enter your salary: ";
cin>>sal;
cout<<"Enter your grade: ";
cin>>grade;

if(grade > 15){
	sal = sal*1.5;
} else if(grade <= 15){
	sal = sal*1.25;
}
cout<<"Salary = "<<sal<<"$";
}

#include <iostream>
using namespace std;
 
 int main(){
 int num1,num2,num3,num4,num5,max,min;
 cout<<"Enter first number: ";
 cin>>num1;
  cout<<"Enter second number: ";
 cin>>num2;
 cout<<"Enter third number: ";
 cin>>num3;
 cout<<"Enter forth number: ";
 cin>>num4;
 cout<<"Enter fith number: ";
 cin>>num5;
 
 if(num1 > num2){
	max = num1;
	min = num2;
 } else{max = num2;min = num1;}
 
 if(max > num3){
 	max = num2;
 	min = num3;
 } else{max = num3;min = num2;}
 
  if(max > num4){
 	max = num3;
 	min = num4;
 } else{max = num4;min = num3;}
 
  if(max > num5){
 	max = num4;
 	min = num5;
 } else{max = num5;min = num4;}
 
 cout<<"Max = "<<max<<"\nMin = "<<min;
 }

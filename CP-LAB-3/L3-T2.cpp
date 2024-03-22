#include <iostream>
using namespace std;
 
 int main(){
  double marks;
  cout<<"Enter you Marks: ";
  cin>>marks;
 
  if(marks>=90){
  cout<<"Grade A";
}
  else if(marks>=80 && marks <= 89){
  cout<<"Grade B";
}
else if(marks>=70 && marks <= 79){
  cout<<"Grade B-";
}
else if(marks>=60 && marks <= 69){
  cout<<"Grade C";
}
else if(marks>=50 && marks <= 59){
  cout<<"Grade C-";
}
else if(marks>=40 && marks <= 49){
  cout<<"Grade D";
}
else if(marks <= 40){
  cout<<"Grade F";
}
else {
cout<<"Wrong Input";
}
 }

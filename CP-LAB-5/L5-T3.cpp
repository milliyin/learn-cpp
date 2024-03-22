#include<iostream>
using namespace std;
int main(){
	string name="illiyin";
	double gpa=3.6;
	int roll=230594;
	for(int i=1;i<=40;i++){
		
		if(i%10 == 1){
			cout<<endl;
			cout<<i<<" ";
		} else if(i%5 == 0 && i%4 == 0){
			cout<<roll<<" ";
		}else if(i%5 == 0){
			cout<<gpa<<" ";
		} else if(i%4 == 0){
			cout<<name<<" ";
		}
		else{
			cout<<i<<" ";
		}
	}
}

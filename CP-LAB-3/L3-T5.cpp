#include <iostream>
using namespace std;
int main(){
	int calls,extra;
	double cost;
	cout<<"Enter The calls: ";
	cin>>calls;
	if(call > 0 && call <= 70){
		cost = 250
	} 
	if (call > 70 && call =< 100){
		extra = calls-70;
		cost = 250 + extra*0.6;
	}
	if (call > 100 && call =<130){
		extra= calls-100;
		cost = 250 + 30*0.6 + extra*0.5;
	}
	if (call > 130){
		extra= calls-130;
		cost = 250 + 30*0.6 + 30*0.5 + extra*0.4;
	}
	cout<<"Cost = "<<cost<<"$";
}

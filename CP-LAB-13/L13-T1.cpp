//Write a recursive function that computes sum of all numbers from 1 to n-1, where n is given
//as parameter?

#include<iostream>
using namespace std;
int sum_all(int);
int main(){
	cout<<sum_all(5);
}
int sum_all(int n){
	if(n>=1){
		return n + sum_all(n-1);
	}else{
		return 1;
	}
}

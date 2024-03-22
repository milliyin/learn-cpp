#include<iostream>
using namespace std;
int main(){
	int size=5;
	int numbers[size],square[size],
	cube[size],factorial[size],sum[size];
	
	for(int i=0;i<size;i++){
		numbers[i]=i;
		square[i]=i*i;
		cube[i]=i*i*i;
		
		int ans=1;
		for(int a=i;a>0;a--){
			ans *= a;
		}
		factorial[i] = ans;
		
		sum[i]=numbers[i]+square[i]+cube[i]+factorial[i];
	}
	int numbersum=0,squaresum=0,cubesum=0,factorialsum=0,sumSum=0;
	for(int i=0;i<5;i++){
		
		numbersum += numbers[i];
		squaresum += square[i];
		cubesum += cube[i];
		factorialsum += factorial[i];
		sumSum += sum[i];
		
	}
	
	cout<<endl<<"numbers"<<endl;
	for(int i=0;i<5;i++){
		cout<<"["<<i<<"] "<<numbers[i]<<"  |  ";
	}
	cout<<"SUM="<<numbersum;
	
	cout<<endl<<"square"<<endl;
	for(int i=0;i<5;i++){
		cout<<"["<<i<<"] "<<square[i]<<"  |  ";
	}
	cout<<"SUM="<<squaresum;
	
	cout<<endl<<"cube"<<endl;
	for(int i=0;i<5;i++){
		cout<<"["<<i<<"] "<<cube[i]<<"  |  ";
	}
	cout<<"SUM="<<cubesum;
	
	cout<<endl<<"factorial"<<endl;
	for(int i=0;i<5;i++){
		cout<<"["<<i<<"] "<<factorial[i]<<"  |  ";
	}
	cout<<"SUM="<<factorialsum;
	
	cout<<endl<<"sum"<<endl;
	for(int i=0;i<5;i++){
		cout<<"["<<i<<"] "<<sum[i]<<"  |  ";
	}
	cout<<"SUM="<<sumSum;
	
	cout<<"\nGRAND SUM="<<sumSum+factorialsum+cubesum+squaresum+numbersum;
	
}
	

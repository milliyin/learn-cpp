#include<iostream>
using namespace std;
int main(){
	int ar[3][3]={{7,2,9},
					{66,91,60},
					{71,10,90}};
	int ans=0;
	int a1=(ar[1][1]*ar[2][2])-(ar[1][2]*ar[2][1]);
	int b1=(ar[1][0]*ar[2][2])-(ar[1][2]*ar[2][0]);
	int c1=(ar[1][0]*ar[2][1])-(ar[1][1]*ar[2][0]);
	ans = (ar[0][0]*(a1))-(ar[0][1]*(b1))+(ar[0][2]*(c1));
	cout<<"Answer: "<<ans;
	
	
}

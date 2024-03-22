#include<iostream>
using namespace std;
int square(int);
int cube(int);
int main()
{
	int sq,cub,addition;
	cout<<"ENTER VALUE FOR VARIABLE 1 : ";
	cin>>sq;
	cout<<"ENTER VALUE FOR VARIABLE 1 : ";
	cin>>cub;
	int result_Sq=square(sq);
	cout<<"SQUARE  IS : "<<result_Sq<<endl;
	int result_Cube=cube(cub);
	cout<<"CUBE  IS : "<<result_Cube<<endl;
	addition = result_Sq + result_Cube;
	cout<<"ADDITION FOR BOTH SI : "<<addition<<endl;
}
int square(int x)
	{
		int SQUARE;
		SQUARE = x*x;
		return SQUARE;
	}
int cube(int y)
{
	int CUBE;
	CUBE = y*y*y;
	return CUBE;
}
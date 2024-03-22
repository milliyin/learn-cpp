#include <iostream>
using namespace std;
int main(){
	char text;
	cout<<"Enter The alphabet: ";
	cin>>text;
	switch(text){
		case 'a' ... 'z':
			cout<<"Small Letter";
			break;
		case 'A' ... 'Z':
			cout<<"Capital Letter";
			break;
		default:
			cout<<"Wrong Input";
			
	}
}


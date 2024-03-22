#include <iostream>
using namespace std;
int main(){
	char text;
	cout<<"Enter The alphabet: ";
	cin>>text;
	switch(text){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"Vowels";
			break;
		default:
			cout<<"Consonant";
			
	}
}


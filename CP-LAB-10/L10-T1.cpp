#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream fin1,fout2;
	fin1.open("L10-T1-text.txt",ios::in);
	fout2.open("L10-T1-text-out.txt",ios::out);
	string a;
	getline(fin1,a);
	fout2<<a;
}

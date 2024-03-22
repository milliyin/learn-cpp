#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
using namespace std;
int main(){
	fstream fin1;
	fin1.open("T2-csv-file.csv",ios::in);
	string temp;
	getline(fin1,temp);
	string Sv[9];int Iv[9];float Fv[9];char Cv[9];
	for(int i = 0;i<9;i++){
		string line;
		getline(fin1,line);
		istringstream iss(line);
		getline(iss,Sv[i],',');
		iss>>Iv[i];
		iss.ignore(200,',');
		iss>>Fv[i];
		iss.ignore(200,',');
		iss>>Cv[i];
	}
	for(int i = 0;i<9;i++){
		cout<<setw(20)<<Sv[i]<<setw(20)<<Iv[i]<<setw(20)<<Fv[i]<<setw(20)<<Cv[i]<<endl;
	}
	
	
}

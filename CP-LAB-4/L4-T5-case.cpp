#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,num4,max,x;//x is the second highest number.
    cout<<"Enter four integers : ";
    cin>>num1>>num2>>num3>>num4;
    
    switch(num1>num2){
	case 1:
        max = num1;
        x = num2;
        break;
    case 0:
        max = num2;
        x =num1;
}

    switch(num3>max){
    case 1:
        x =  max;
        max =num3;
        break;
    case 0:
    	switch (num3>x){
    		case 1:
        		x =num3;
        		break;
	}
}
    switch(num4>max){
    	case 1:
        	x = max;
        	max= num4;
        	break;
    case 0:
    	switch(num4>x){
        	case 1:
			x  = num4;
			break;
    }
}
    cout<<"The second maximum number is :"<<x<<endl;
    return (0);
}

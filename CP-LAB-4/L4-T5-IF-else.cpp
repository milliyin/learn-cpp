#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,num4,max,x;//x is the second highest number.
    cout<<"Enter four integers : ";
    cin>>num1>>num2>>num3>>num4;
    if(num1>num2){
        max = num1;
        x = num2;
    }
    else
    {
        max = num2;
        x =num1;
    }
    if(num3>max){
        x =  max;
        max =num3;
    }
    else if(num3>x)
    {
        x =num3;
    }
    if(num4>max){
        x = max;
        max= num4;
    }
    else if(num4>x)
    {
        x  = num4;
    }
    cout<<"The second maximum number is :"<<x<<endl;
    return (0);
}

#include<iostream>
using namespace std;
string CourseGrade(double);
int main()
{
    double marks;
    cout<<"ENTER YOUR MARKS : ";
    cin>>marks;
    string result; 
    result = CourseGrade(marks);
    cout<<"YOUR GRADE IS : "<<result<<endl;
    
}


string CourseGrade(double x)
{
    string grade;
    if (x>100||x<0)
    {
        cout<<"INAVALID MARKS.\n";
    }
    else if(x>=80 &&x<=100)
    {
        grade = "A";
    }
    else if(x>=60 && x<80)
    {
        grade = "-A";
    }
    else if(x>50 && x<60 )
    {
        grade = "B+";
    }
    else {
        grade = "F";
    }
    return grade;
}
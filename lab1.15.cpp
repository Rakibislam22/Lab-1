#include <iostream>

using namespace std;

int isLeapYear(int y)
{

    return (y%4==0 && (y%100!= 0 || y%400==0));
}

int fnearestLeapYear(int y)
{
    while(!isLeapYear(y))
    {
        y++;
    }
    return y;
}

int main()
{
    int y;
    cout<<"Enter Year: ";
    cin>>y;
    if(isLeapYear(y))
    {
        cout<<y<<" is leap Year !"<<endl;
    }
    else {
        int nearestLeapYear=fnearestLeapYear(y);
        cout<<y<<" is not leap year!"<<endl<<"Nearest leap year is: "<<nearestLeapYear<<endl;
    }
}

